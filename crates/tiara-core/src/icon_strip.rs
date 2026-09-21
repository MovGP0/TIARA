//! The little pictures on the component bar.
//!
//! Every button in the component registry carries a number, and that number
//! is where its picture sits in `COMPREGE.BMP` - one long strip of square
//! tiles the installation ships beside the registry. The strip is a plain
//! Windows bitmap of sixteen colours: 7,308 pixels across and 29 down,
//! which is 252 tiles of 29 by 29.
//!
//! There is a second strip, `COMPREGU.BMP`, the same size. Which is which
//! has not been worked out - the names suggest one is for a button that can
//! be pressed and one for a button that cannot - so both are read the same
//! way and the first is what the bar draws.
//!
//! Four bits a pixel, sixteen colours in a table, rows written from the
//! bottom up and padded to a multiple of four bytes: that is all a bitmap of
//! this kind is, and it is read here rather than with a library because it
//! is twenty lines and a library would be a dependency for one file format
//! the program reads once.

use std::path::{Path, PathBuf};

/// What the strip the bar draws from is called.
pub const ENABLED_STRIP: &str = "COMPREGE.BMP";

/// The other strip, the same size.
pub const OTHER_STRIP: &str = "COMPREGU.BMP";

/// How many bytes the two headers take before the colour table.
const HEADERS: usize = 14 + 40;

/// What can go wrong reading one.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// The file could not be read. The text is the system's own.
    Io(String),
    /// It does not begin with `BM`, so it is not a bitmap.
    NotABitmap,
    /// It is a bitmap, but not one of these: sixteen colours, uncompressed.
    NotFourBitColour,
    /// It ends in the middle of the pixels.
    CutShort,
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Io(what) => write!(f, "{what}"),
            Self::NotABitmap => write!(f, "this is not a bitmap"),
            Self::NotFourBitColour => {
                write!(f, "this is not a sixteen-colour bitmap")
            }
            Self::CutShort => write!(f, "the bitmap ends in the middle of its pixels"),
        }
    }
}

impl std::error::Error for Error {}

impl From<std::io::Error> for Error {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

/// A strip of square pictures.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Strip {
    across: usize,
    down: usize,
    /// Four bytes a pixel, red first, from the top left.
    pixels: Vec<u8>,
}

impl Strip {
    /// Reads a strip from a file.
    ///
    /// # Errors
    ///
    /// [`Error::Io`] if it cannot be read, and the rest if it is not a
    /// bitmap of the kind the bar uses.
    pub fn read(path: &Path) -> Result<Self, Error> {
        Self::from_bytes(&std::fs::read(path)?)
    }

    /// Reads a strip from the bytes of one.
    ///
    /// # Errors
    ///
    /// As [`Self::read`].
    pub fn from_bytes(bytes: &[u8]) -> Result<Self, Error> {
        if bytes.len() < HEADERS || &bytes[..2] != b"BM" {
            return Err(Error::NotABitmap);
        }
        let number = |at: usize| -> u32 {
            u32::from_le_bytes([bytes[at], bytes[at + 1], bytes[at + 2], bytes[at + 3]])
        };
        let small = |at: usize| -> u16 { u16::from_le_bytes([bytes[at], bytes[at + 1]]) };

        let start = number(10) as usize;
        let across = number(18);
        // The height is written as a signed number: upside down means the
        // rows come the other way round.
        let down = i32::from_ne_bytes(number(22).to_ne_bytes());
        let depth = small(28);
        let squashed = number(30);

        if depth != 4 || squashed != 0 {
            return Err(Error::NotFourBitColour);
        }
        let across = usize::try_from(across).map_err(|_| Error::NotABitmap)?;
        let upwards = down > 0;
        let down = usize::try_from(down.unsigned_abs()).map_err(|_| Error::NotABitmap)?;
        if across == 0 || down == 0 {
            return Err(Error::NotABitmap);
        }

        // Sixteen colours, each written blue first with a byte to spare.
        let table = bytes.get(HEADERS..HEADERS + 64).ok_or(Error::CutShort)?;
        let colour = |which: usize| -> [u8; 4] {
            let at = which * 4;
            [table[at + 2], table[at + 1], table[at], 0xFF]
        };

        // Each row is padded out to a multiple of four bytes.
        let row_bytes = across.div_ceil(2).div_ceil(4) * 4;
        let mut pixels = vec![0_u8; across * down * 4];
        for row in 0..down {
            let from = start + row * row_bytes;
            let line = bytes.get(from..from + row_bytes).ok_or(Error::CutShort)?;
            // Written from the bottom up unless the height says otherwise.
            let into = if upwards { down - 1 - row } else { row };
            for column in 0..across {
                let byte = line[column / 2];
                let which = if column % 2 == 0 {
                    usize::from(byte >> 4)
                } else {
                    usize::from(byte & 0x0F)
                };
                let at = (into * across + column) * 4;
                pixels[at..at + 4].copy_from_slice(&colour(which));
            }
        }

        Ok(Self {
            across,
            down,
            pixels,
        })
    }

    /// How wide the whole strip is.
    #[must_use]
    pub const fn across(&self) -> usize {
        self.across
    }

    /// How tall it is, which is also how wide one picture is.
    #[must_use]
    pub const fn down(&self) -> usize {
        self.down
    }

    /// How many pictures are on it.
    #[must_use]
    pub const fn count(&self) -> usize {
        if self.down == 0 {
            return 0;
        }
        self.across / self.down
    }

    /// One picture, four bytes a pixel and red first, ready to be drawn.
    ///
    /// Nothing for a number past the end of the strip.
    #[must_use]
    pub fn picture(&self, which: usize) -> Option<Vec<u8>> {
        if which >= self.count() {
            return None;
        }
        let side = self.down;
        let left = which * side;
        let mut out = Vec::with_capacity(side * side * 4);
        for row in 0..side {
            let from = (row * self.across + left) * 4;
            out.extend_from_slice(self.pixels.get(from..from + side * 4)?);
        }
        Some(out)
    }
}

/// The strip inside an installation.
#[must_use]
pub fn file_in(installation: &Path) -> PathBuf {
    installation.join(ENABLED_STRIP)
}

#[cfg(test)]
mod tests {
    use super::{ENABLED_STRIP, Error, Strip};
    use std::path::PathBuf;

    /// A bitmap of the kind the bar uses: two tiles of two by two.
    fn a_strip() -> Vec<u8> {
        let across = 4_i32;
        let down = 2_i32;
        // Two pixels a byte, rows padded out to four bytes.
        let row_bytes = 4_usize;
        let start = 14 + 40 + 64;
        let mut bytes = vec![0_u8; start];
        bytes[0] = b'B';
        bytes[1] = b'M';
        bytes[10..14].copy_from_slice(&u32::try_from(start).unwrap().to_le_bytes());
        bytes[14..18].copy_from_slice(&40_u32.to_le_bytes());
        bytes[18..22].copy_from_slice(&across.to_le_bytes());
        bytes[22..26].copy_from_slice(&down.to_le_bytes());
        bytes[26..28].copy_from_slice(&1_u16.to_le_bytes());
        bytes[28..30].copy_from_slice(&4_u16.to_le_bytes());

        // Colour 1 is red and colour 2 is green; the rest are black.
        bytes[14 + 40 + 4..14 + 40 + 8].copy_from_slice(&[0, 0, 0xFF, 0]);
        bytes[14 + 40 + 8..14 + 40 + 12].copy_from_slice(&[0, 0xFF, 0, 0]);

        // The bottom row first: colours 1,1,2,2 then the top row 2,2,1,1.
        bytes.extend_from_slice(&[0x11, 0x22, 0, 0][..row_bytes]);
        bytes.extend_from_slice(&[0x22, 0x11, 0, 0][..row_bytes]);
        bytes
    }

    #[test]
    fn a_strip_says_how_many_pictures_it_holds() {
        let strip = Strip::from_bytes(&a_strip()).unwrap();
        assert_eq!(strip.across(), 4);
        assert_eq!(strip.down(), 2);
        assert_eq!(strip.count(), 2);
    }

    #[test]
    fn a_picture_comes_out_the_right_way_up() {
        let strip = Strip::from_bytes(&a_strip()).unwrap();
        let first = strip.picture(0).unwrap();

        // Two by two, four bytes a pixel.
        assert_eq!(first.len(), 2 * 2 * 4);
        // The top left is green, because the file writes the bottom row
        // first and the top row is 2,2,1,1.
        assert_eq!(&first[0..4], &[0, 0xFF, 0, 0xFF]);
        // And the bottom left is red.
        assert_eq!(&first[8..12], &[0xFF, 0, 0, 0xFF]);
    }

    #[test]
    fn the_second_picture_is_the_next_one_along() {
        let strip = Strip::from_bytes(&a_strip()).unwrap();
        let second = strip.picture(1).unwrap();

        // Its top left is the other colour.
        assert_eq!(&second[0..4], &[0xFF, 0, 0, 0xFF]);
        assert_eq!(strip.picture(2), None);
    }

    #[test]
    fn something_that_is_not_a_bitmap_is_refused() {
        assert_eq!(Strip::from_bytes(b"not a bitmap"), Err(Error::NotABitmap));
        assert_eq!(Strip::from_bytes(&[]), Err(Error::NotABitmap));
    }

    #[test]
    fn a_bitmap_of_another_kind_is_refused_rather_than_misread() {
        let mut deeper = a_strip();
        // Twenty-four bits a pixel, which this does not read.
        deeper[28..30].copy_from_slice(&24_u16.to_le_bytes());
        assert_eq!(Strip::from_bytes(&deeper), Err(Error::NotFourBitColour));

        let mut squashed = a_strip();
        squashed[30..34].copy_from_slice(&1_u32.to_le_bytes());
        assert_eq!(Strip::from_bytes(&squashed), Err(Error::NotFourBitColour));
    }

    #[test]
    fn a_bitmap_that_ends_too_soon_is_refused() {
        let whole = a_strip();
        assert_eq!(
            Strip::from_bytes(&whole[..whole.len() - 2]),
            Err(Error::CutShort)
        );
    }

    #[test]
    fn the_installed_strip_holds_the_bars_pictures() {
        // Read at run time and never committed.
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(PathBuf::from) else {
            return;
        };
        let path = super::file_in(&installation);
        if !path.is_file() {
            return;
        }

        let strip = Strip::read(&path).unwrap();
        // 7,308 across and 29 down, which is 252 pictures of 29 by 29.
        assert_eq!(strip.down(), 29);
        assert_eq!(strip.count(), strip.across() / 29);
        assert!(strip.count() > 200, "{} pictures is too few", strip.count());

        let first = strip.picture(0).unwrap();
        assert_eq!(first.len(), 29 * 29 * 4);
        // Every picture in it comes out, and the one past the end does not.
        assert!(strip.picture(strip.count() - 1).is_some());
        assert!(strip.picture(strip.count()).is_none());
        assert!(path.ends_with(ENABLED_STRIP));
    }
}
