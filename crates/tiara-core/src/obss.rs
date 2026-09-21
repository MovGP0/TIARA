//! Reading an OBSS container.
//!
//! `DEVICES.DDB` and the other `.DDB` files the original installs are OBSS
//! containers. The name comes from the unit that reads and writes them,
//! `Obss_dr2`, and from the four bytes every one of them starts with.
//!
//! The shape of the file was read out of the recovered reader rather than
//! guessed from a hexdump. The addresses are named against each piece below,
//! and the whole was then checked by walking the installed 28 MB
//! `DEVICES.DDB` from its first record to its last, which lands exactly on
//! the end marker.
//!
//! ```text
//! 0   "OBSS" 1A 01 00     seven bytes, and nothing else is one of these
//! 7   u32                 a number the reader keeps and does not act on
//! 11  records, each:
//!       u16 tag           what the record is
//!       u16 sub           a second number the reader passes to the handler
//!       u32 size          how many bytes of data follow the header
//!       size bytes
//!     and the record whose tag is 255 ends the file.
//! ```
//!
//! Strings inside a record are a single count byte, then that many bytes of
//! which the last is a NUL: the count includes it, and the reader drops it.
//!
//! What this does NOT do is make sense of what is inside a record. The
//! container is one job and the records are another; see TIARA-0hni5d1 for
//! what is known about the records of `DEVICES.DDB`.

use std::fmt;
use std::io::{Read, Seek, SeekFrom};

/// What every OBSS file starts with.
///
/// Read against `DAT_01d31bc4` in `FUN_01d31b30`, which compares seven bytes
/// and raises [`Error::NotAnObssFile`] when they differ.
pub const MAGIC: [u8; 7] = *b"OBSS\x1a\x01\x00";

/// Where the first record starts.
///
/// `FUN_01d30fd0` seeks to 11 to go back to the beginning, which is the seven
/// bytes of the signature and the four that follow them.
pub const FIRST_RECORD: usize = 11;

/// How many bytes a record's header takes.
///
/// `FUN_01d30e90` reads eight, and `FUN_01d30df0` adds eight to the record's
/// own length to find the next one.
pub const RECORD_HEADER: usize = 8;

/// The tag of the record that ends the file.
///
/// `FUN_01d32e90` stops its loop when it reads this one.
pub const END_TAG: u16 = 0xFF;

/// The tag of the record naming what the file is.
///
/// `FUN_01d317c0` looks for this one and reads six strings out of it.
pub const VERSION_TAG: u16 = 2;

/// What can go wrong reading one of these.
///
/// The names follow the messages `FUN_01d30730` gives each code, so a failure
/// here can be matched against what the original would have said.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// `0x1001`. The file does not start with [`MAGIC`].
    NotAnObssFile,
    /// `0x1002`. The file could not be read. The text is the system's own.
    Io(String),
    /// `0x1005`. A record says it holds more than the file has left.
    RecordRunsPastTheEnd {
        /// Where the record's header was.
        at: u64,
        /// How many bytes it said it held.
        size: u32,
    },
    /// A string's count ran past the end of the record holding it.
    StringRunsPastTheEnd,
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::NotAnObssFile => write!(f, "invalid OBSS file header"),
            Self::Io(what) => write!(f, "{what}"),
            Self::RecordRunsPastTheEnd { at, size } => write!(
                f,
                "the record at {at} says it holds {size} bytes and the file has fewer"
            ),
            Self::StringRunsPastTheEnd => write!(f, "a string runs past the end of its record"),
        }
    }
}

impl std::error::Error for Error {}

impl From<std::io::Error> for Error {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

/// One record's header, and where its data begins.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Record {
    /// What the record is. The reader hands this to whichever handler claims
    /// it, which is how one file carries several kinds of thing.
    pub tag: u16,
    /// A second number, passed to the handler beside the tag.
    pub sub: u16,
    /// How many bytes of data the record holds.
    pub size: u32,
    /// Where those bytes start in the file.
    pub data_at: u64,
}

impl Record {
    /// Whether this is the record that ends the file.
    #[must_use]
    pub const fn ends_the_file(&self) -> bool {
        self.tag == END_TAG
    }

    /// Where the record after this one begins.
    #[must_use]
    pub const fn next(&self) -> u64 {
        self.data_at + self.size as u64
    }
}

/// An open OBSS container.
#[derive(Debug)]
pub struct Container<R> {
    source: R,
    version: u32,
    length: u64,
}

impl<R: Read + Seek> Container<R> {
    /// Opens a container, checking what it starts with.
    ///
    /// # Errors
    ///
    /// [`Error::NotAnObssFile`] if the seven bytes are not [`MAGIC`], and
    /// [`Error::Io`] if the file cannot be read that far.
    pub fn open(mut source: R) -> Result<Self, Error> {
        let length = source.seek(SeekFrom::End(0))?;
        source.seek(SeekFrom::Start(0))?;

        let mut head = [0_u8; FIRST_RECORD];
        source
            .read_exact(&mut head)
            .map_err(|_| Error::NotAnObssFile)?;
        if head[..MAGIC.len()] != MAGIC {
            return Err(Error::NotAnObssFile);
        }
        let version = u32::from_le_bytes([head[7], head[8], head[9], head[10]]);
        Ok(Self {
            source,
            version,
            length,
        })
    }

    /// The number that follows the signature.
    ///
    /// The reader keeps it and never acts on it, and every installed file
    /// seen so far holds zero, so nothing here acts on it either.
    #[must_use]
    pub const fn version(&self) -> u32 {
        self.version
    }

    /// How long the file is.
    #[must_use]
    pub const fn length(&self) -> u64 {
        self.length
    }

    /// Every record in the file, in the order they are written.
    ///
    /// The record that ends the file is included, so that a file which was
    /// cut short can be told from one that finished.
    ///
    /// # Errors
    ///
    /// [`Error::RecordRunsPastTheEnd`] if a record says it holds more than
    /// the file has, and [`Error::Io`] if the file cannot be read.
    pub fn records(&mut self) -> Result<Vec<Record>, Error> {
        let mut found = Vec::new();
        let mut at = FIRST_RECORD as u64;
        while at + RECORD_HEADER as u64 <= self.length {
            let record = self.record_at(at)?;
            found.push(record);
            if record.ends_the_file() {
                break;
            }
            at = record.next();
        }
        Ok(found)
    }

    /// The first record with a tag, if the file has one.
    ///
    /// # Errors
    ///
    /// As [`Self::records`].
    pub fn find(&mut self, tag: u16) -> Result<Option<Record>, Error> {
        Ok(self.records()?.into_iter().find(|record| record.tag == tag))
    }

    /// What one record holds.
    ///
    /// # Errors
    ///
    /// [`Error::Io`] if the file cannot be read.
    pub fn read(&mut self, record: Record) -> Result<Vec<u8>, Error> {
        self.source.seek(SeekFrom::Start(record.data_at))?;
        let mut data = vec![0_u8; record.size as usize];
        self.source.read_exact(&mut data)?;
        Ok(data)
    }

    /// What the file says it is, out of the version record.
    ///
    /// `FUN_01d317c0` reads six strings from it, of which the installed
    /// `DEVICES.DDB` fills five - the fourth is empty.
    ///
    /// # Errors
    ///
    /// As [`Self::records`] and [`Self::read`]. A file with no version record
    /// gives `Ok(None)` rather than an error: the reader treats the record as
    /// one that may be absent, and says `[NO_VER]` when it is.
    pub fn description(&mut self) -> Result<Option<Vec<String>>, Error> {
        let Some(record) = self.find(VERSION_TAG)? else {
            return Ok(None);
        };
        let data = self.read(record)?;
        let mut strings = Vec::new();
        let mut at = 0;
        // Six, which is what the recovered reader reads.
        for _ in 0..6 {
            match read_string(&data, &mut at) {
                Ok(text) => strings.push(text),
                Err(_) => break,
            }
        }
        Ok(Some(strings))
    }

    /// One record's header.
    fn record_at(&mut self, at: u64) -> Result<Record, Error> {
        self.source.seek(SeekFrom::Start(at))?;
        let mut header = [0_u8; RECORD_HEADER];
        self.source.read_exact(&mut header)?;

        let size = u32::from_le_bytes([header[4], header[5], header[6], header[7]]);
        let data_at = at + RECORD_HEADER as u64;
        if data_at + u64::from(size) > self.length {
            return Err(Error::RecordRunsPastTheEnd { at, size });
        }
        Ok(Record {
            tag: u16::from_le_bytes([header[0], header[1]]),
            sub: u16::from_le_bytes([header[2], header[3]]),
            size,
            data_at,
        })
    }
}

/// Reads one string, moving past it.
///
/// `FUN_01d312f0` reads a count byte, then that many bytes, then takes one
/// off the count: the last byte is a NUL and is not part of the text.
///
/// # Errors
///
/// [`Error::StringRunsPastTheEnd`] if the count says more than is there.
pub fn read_string(data: &[u8], at: &mut usize) -> Result<String, Error> {
    let count = *data.get(*at).ok_or(Error::StringRunsPastTheEnd)? as usize;
    let from = *at + 1;
    let to = from + count;
    let bytes = data.get(from..to).ok_or(Error::StringRunsPastTheEnd)?;
    *at = to;
    // The count includes the NUL, which is not part of the text. A count of
    // zero is a string that was not written at all.
    let text = bytes.split(|byte| *byte == 0).next().unwrap_or_default();
    Ok(String::from_utf8_lossy(text).into_owned())
}

#[cfg(test)]
mod tests {
    use super::{Container, END_TAG, Error, MAGIC, VERSION_TAG, read_string};
    use std::io::Cursor;

    /// A container holding the records given, written the way the original
    /// writes them.
    fn a_file(records: &[(u16, u16, &[u8])]) -> Vec<u8> {
        let mut file = Vec::new();
        file.extend_from_slice(&MAGIC);
        file.extend_from_slice(&0_u32.to_le_bytes());
        for (tag, sub, data) in records {
            file.extend_from_slice(&tag.to_le_bytes());
            file.extend_from_slice(&sub.to_le_bytes());
            #[allow(
                clippy::cast_possible_truncation,
                reason = "the test writes records of a few bytes"
            )]
            file.extend_from_slice(&(data.len() as u32).to_le_bytes());
            file.extend_from_slice(data);
        }
        file
    }

    /// A string as a record carries one: a count that includes the NUL.
    fn a_string(text: &str) -> Vec<u8> {
        let mut bytes = vec![0_u8];
        bytes.extend_from_slice(text.as_bytes());
        bytes.push(0);
        #[allow(
            clippy::cast_possible_truncation,
            reason = "the test writes short strings"
        )]
        {
            bytes[0] = (text.len() + 1) as u8;
        }
        bytes
    }

    #[test]
    fn a_file_that_does_not_start_with_the_signature_is_refused() {
        let not_one = Cursor::new(b"this is not a device database".to_vec());
        assert_eq!(
            Container::open(not_one).map(|_| ()).unwrap_err(),
            Error::NotAnObssFile
        );

        // One cut off before the header is finished is refused the same way.
        let cut_short = Cursor::new(b"OBSS".to_vec());
        assert_eq!(
            Container::open(cut_short).map(|_| ()).unwrap_err(),
            Error::NotAnObssFile
        );
    }

    #[test]
    fn the_records_are_walked_from_the_first_to_the_end_marker() {
        let file = a_file(&[
            (VERSION_TAG, 0, b"first"),
            (0x0301, 0x0102, b"a longer one"),
            (END_TAG, 0, b""),
        ]);
        let mut container = Container::open(Cursor::new(file)).unwrap();

        let records = container.records().unwrap();
        assert_eq!(records.len(), 3);
        assert_eq!(records[0].tag, VERSION_TAG);
        assert_eq!(records[0].size, 5);
        assert_eq!(records[1].sub, 0x0102);
        assert_eq!(records[1].size, 12);
        assert!(records[2].ends_the_file());
    }

    #[test]
    fn nothing_after_the_end_marker_is_read() {
        let mut file = a_file(&[(VERSION_TAG, 0, b"first"), (END_TAG, 0, b"")]);
        file.extend_from_slice(b"whatever the writer left behind");

        let mut container = Container::open(Cursor::new(file)).unwrap();
        assert_eq!(container.records().unwrap().len(), 2);
    }

    #[test]
    fn a_record_is_read_by_itself() {
        let file = a_file(&[(7, 0, b"the bytes"), (END_TAG, 0, b"")]);
        let mut container = Container::open(Cursor::new(file)).unwrap();

        let record = container.find(7).unwrap().unwrap();
        assert_eq!(container.read(record).unwrap(), b"the bytes");
        assert_eq!(container.find(9).unwrap(), None);
    }

    #[test]
    fn a_record_that_says_it_holds_more_than_the_file_has_is_refused() {
        let mut file = a_file(&[(7, 0, b"short")]);
        // Say the record holds a great deal more than it does.
        let size_at = file.len() - 5 - 4;
        file[size_at..size_at + 4].copy_from_slice(&9_999_u32.to_le_bytes());

        let mut container = Container::open(Cursor::new(file)).unwrap();
        assert!(matches!(
            container.records(),
            Err(Error::RecordRunsPastTheEnd { .. })
        ));
    }

    #[test]
    fn a_string_is_counted_with_its_nul_and_read_without_it() {
        let mut data = a_string("TINA Device Database");
        data.extend_from_slice(&a_string("V1.0"));
        data.extend_from_slice(&a_string(""));

        let mut at = 0;
        assert_eq!(read_string(&data, &mut at).unwrap(), "TINA Device Database");
        assert_eq!(at, 22);
        assert_eq!(read_string(&data, &mut at).unwrap(), "V1.0");
        assert_eq!(read_string(&data, &mut at).unwrap(), "");
        assert_eq!(
            read_string(&data, &mut at),
            Err(Error::StringRunsPastTheEnd)
        );
    }

    #[test]
    fn a_string_whose_count_runs_past_the_end_is_refused() {
        let data = [9_u8, b'a', b'b'];
        let mut at = 0;
        assert_eq!(
            read_string(&data, &mut at),
            Err(Error::StringRunsPastTheEnd)
        );
    }

    #[test]
    fn what_the_file_says_it_is_comes_out_of_the_version_record() {
        let mut version = Vec::new();
        for text in [
            "TINA Device Database",
            "V1.0",
            "30/04/97",
            "",
            "TINA Device Editor V1.0",
            " Copyright 1997 DesignSoft, Inc.",
        ] {
            version.extend_from_slice(&a_string(text));
        }
        let file = a_file(&[(VERSION_TAG, 0, &version), (END_TAG, 0, b"")]);

        let mut container = Container::open(Cursor::new(file)).unwrap();
        let said = container.description().unwrap().unwrap();
        assert_eq!(said.len(), 6);
        assert_eq!(said[0], "TINA Device Database");
        assert_eq!(said[2], "30/04/97");
        assert_eq!(said[3], "");
        assert_eq!(said[5], " Copyright 1997 DesignSoft, Inc.");
    }

    #[test]
    fn a_file_with_no_version_record_says_so_rather_than_failing() {
        let file = a_file(&[(7, 0, b"something else"), (END_TAG, 0, b"")]);
        let mut container = Container::open(Cursor::new(file)).unwrap();
        assert_eq!(container.description().unwrap(), None);
    }

    #[test]
    fn an_installed_library_is_walked_from_end_to_end() {
        // The proprietary file is never committed and never required: where
        // there is no installation there is nothing to check, and the rest of
        // the tests stand on files this test writes itself. Where there is
        // one, this is what proves the format above against the real thing.
        let Some(library) = installed_library() else {
            return;
        };
        let file = std::fs::File::open(&library).unwrap();
        let mut container = Container::open(std::io::BufReader::new(file)).unwrap();

        let records = container.records().unwrap();
        let last = records.last().unwrap();
        assert!(
            last.ends_the_file(),
            "{} should end with the end marker",
            library.display()
        );
        // The walk lands on the end of the file, give or take the marker's
        // own header - which is what a wrong record length would break.
        assert!(last.next() + 8 >= container.length());

        let said = container.description().unwrap().unwrap();
        assert_eq!(said[0], "TINA Device Database");
    }

    /// The installed `DEVICES.DDB`, where this machine has one.
    fn installed_library() -> Option<std::path::PathBuf> {
        let named = std::env::var_os("TIARA_TINA_HOME")?;
        let file = std::path::PathBuf::from(named).join("DEVICES.DDB");
        file.is_file().then_some(file)
    }
}
