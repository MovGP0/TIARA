//! What the application takes a file to be, from its name.
//!
//! A table of extensions and the types that go with them, built in and then
//! optionally overlaid with whatever the machine itself says. The overlay is
//! the interesting part: it is applied by name, so anything the machine knows
//! replaces what was compiled in, and the table can only grow more accurate
//! about the machine it is running on and less predictable between machines.

/// What every extension in the table begins with.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
///
/// Recognised by the test against the character itself where a registry entry
/// is read without one, which is the only place it appears as anything but an
/// untyped constant.
pub const EXTENSION_PREFIX: &str = ".";

/// The value under an extension key that names its type.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
pub const CONTENT_TYPE_VALUE: &str = "Content Type";

/// The value under a type key that names its extension.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
pub const EXTENSION_VALUE: &str = "Extension";

/// Where the machine keeps its types, the other way round.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
pub const MIME_DATABASE_KEY: &str = r"\MIME\Database\Content Type";

/// The table as it is compiled in, in the order it is added.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
///
/// Twelve extensions appear twice. Four of those are the same pair written
/// out twice over and make no difference; the other eight give one extension
/// two different types — `.mp3` is both a sound and a film, `.rm` is both —
/// and since a lookup answers the first line that matches, the second of each
/// pair is unreachable. It is kept because it is there.
pub const BUILT_IN_MIME_TYPES: [(&str, &str); 384] = [
    (".nml", "animation/narrative"),
    (".aac", "audio/mp4"),
    (".aif", "audio/x-aiff"),
    (".aifc", "audio/x-aiff"),
    (".aiff", "audio/x-aiff"),
    (".au", "audio/basic"),
    (".gsm", "audio/x-gsm"),
    (".kar", "audio/midi"),
    (".m3u", "audio/mpegurl"),
    (".m4a", "audio/x-mpg"),
    (".mid", "audio/midi"),
    (".midi", "audio/midi"),
    (".mpega", "audio/x-mpg"),
    (".mp2", "audio/x-mpg"),
    (".mp3", "audio/x-mpg"),
    (".mpga", "audio/x-mpg"),
    (".m3u", "audio/x-mpegurl"),
    (".pls", "audio/x-scpls"),
    (".qcp", "audio/vnd.qcelp"),
    (".ra", "audio/x-realaudio"),
    (".ram", "audio/x-pn-realaudio"),
    (".rm", "audio/x-pn-realaudio"),
    (".sd2", "audio/x-sd2"),
    (".sid", "audio/prs.sid"),
    (".snd", "audio/basic"),
    (".wav", "audio/x-wav"),
    (".wax", "audio/x-ms-wax"),
    (".wma", "audio/x-ms-wma"),
    (".mjf", "audio/x-vnd.AudioExplosion.MjuiceMediaFile"),
    (".art", "image/x-jg"),
    (".bmp", "image/bmp"),
    (".cdr", "image/x-coreldraw"),
    (".cdt", "image/x-coreldrawtemplate"),
    (".cpt", "image/x-corelphotopaint"),
    (".djv", "image/vnd.djvu"),
    (".djvu", "image/vnd.djvu"),
    (".gif", "image/gif"),
    (".ief", "image/ief"),
    (".ico", "image/x-icon"),
    (".jng", "image/x-jng"),
    (".jpg", "image/jpeg"),
    (".jpeg", "image/jpeg"),
    (".jpe", "image/jpeg"),
    (".pat", "image/x-coreldrawpattern"),
    (".pcx", "image/pcx"),
    (".pbm", "image/x-portable-bitmap"),
    (".pgm", "image/x-portable-graymap"),
    (".pict", "image/x-pict"),
    (".png", "image/x-png"),
    (".pnm", "image/x-portable-anymap"),
    (".pntg", "image/x-macpaint"),
    (".ppm", "image/x-portable-pixmap"),
    (".psd", "image/x-psd"),
    (".qtif", "image/x-quicktime"),
    (".ras", "image/x-cmu-raster"),
    (".rf", "image/vnd.rn-realflash"),
    (".rgb", "image/x-rgb"),
    (".rp", "image/vnd.rn-realpix"),
    (".sgi", "image/x-sgi"),
    (".svg", "image/svg+xml"),
    (".svgz", "image/svg+xml"),
    (".targa", "image/x-targa"),
    (".tif", "image/x-tiff"),
    (".wbmp", "image/vnd.wap.wbmp"),
    (".webp", "image/webp"),
    (".xbm", "image/xbm"),
    (".xbm", "image/x-xbitmap"),
    (".xpm", "image/x-xpixmap"),
    (".xwd", "image/x-xwindowdump"),
    (".323", "text/h323"),
    (".xml", "text/xml"),
    (".uls", "text/iuls"),
    (".txt", "text/plain"),
    (".rtx", "text/richtext"),
    (".wsc", "text/scriptlet"),
    (".rt", "text/vnd.rn-realtext"),
    (".htt", "text/webviewhtml"),
    (".htc", "text/x-component"),
    (".vcf", "text/x-vcard"),
    (".asf", "video/x-ms-asf"),
    (".asx", "video/x-ms-asf"),
    (".avi", "video/x-msvideo"),
    (".dl", "video/dl"),
    (".dv", "video/dv"),
    (".flc", "video/flc"),
    (".fli", "video/fli"),
    (".gl", "video/gl"),
    (".lsf", "video/x-la-asf"),
    (".lsx", "video/x-la-asf"),
    (".mng", "video/x-mng"),
    (".mp2", "video/mpeg"),
    (".mp3", "video/mpeg"),
    (".mp4", "video/mpeg"),
    (".mpeg", "video/x-mpeg2a"),
    (".mpa", "video/mpeg"),
    (".mpe", "video/mpeg"),
    (".mpg", "video/mpeg"),
    (".ogv", "video/ogg"),
    (".moov", "video/quicktime"),
    (".mov", "video/quicktime"),
    (".mxu", "video/vnd.mpegurl"),
    (".qt", "video/quicktime"),
    (".qtc", "video/x-qtc"),
    (".rv", "video/vnd.rn-realvideo"),
    (".ivf", "video/x-ivf"),
    (".webm", "video/webm"),
    (".wm", "video/x-ms-wm"),
    (".wmp", "video/x-ms-wmp"),
    (".wmv", "video/x-ms-wmv"),
    (".wmx", "video/x-ms-wmx"),
    (".wvx", "video/x-ms-wvx"),
    (".rms", "video/vnd.rn-realvideo-secure"),
    (".asx", "video/x-ms-asf-plugin"),
    (".movie", "video/x-sgi-movie"),
    (".7z", "application/x-7z-compressed"),
    (".a", "application/x-archive"),
    (".aab", "application/x-authorware-bin"),
    (".aam", "application/x-authorware-map"),
    (".aas", "application/x-authorware-seg"),
    (".abw", "application/x-abiword"),
    (".ace", "application/x-ace-compressed"),
    (".ai", "application/postscript"),
    (".alz", "application/x-alz-compressed"),
    (".ani", "application/x-navi-animation"),
    (".arj", "application/x-arj"),
    (".asf", "application/vnd.ms-asf"),
    (".bat", "application/x-msdos-program"),
    (".bcpio", "application/x-bcpio"),
    (".boz", "application/x-bzip2"),
    (".bz", "application/x-bzip"),
    (".bz2", "application/x-bzip2"),
    (".cab", "application/vnd.ms-cab-compressed"),
    (".cat", "application/vnd.ms-pki.seccat"),
    (".ccn", "application/x-cnc"),
    (".cco", "application/x-cocoa"),
    (".cdf", "application/x-cdf"),
    (".cer", "application/x-x509-ca-cert"),
    (".chm", "application/vnd.ms-htmlhelp"),
    (".chrt", "application/vnd.kde.kchart"),
    (".cil", "application/vnd.ms-artgalry"),
    (".class", "application/java-vm"),
    (".com", "application/x-msdos-program"),
    (".clp", "application/x-msclip"),
    (".cpio", "application/x-cpio"),
    (".cpt", "application/mac-compactpro"),
    (".cqk", "application/x-calquick"),
    (".crd", "application/x-mscardfile"),
    (".crl", "application/pkix-crl"),
    (".csh", "application/x-csh"),
    (".dar", "application/x-dar"),
    (".dbf", "application/x-dbase"),
    (".dcr", "application/x-director"),
    (".deb", "application/x-debian-package"),
    (".dir", "application/x-director"),
    (".dist", "vnd.apple.installer+xml"),
    (".distz", "vnd.apple.installer+xml"),
    (".dll", "application/x-msdos-program"),
    (".dmg", "application/x-apple-diskimage"),
    (".doc", "application/msword"),
    (".dot", "application/msword"),
    (".dvi", "application/x-dvi"),
    (".dxr", "application/x-director"),
    (".ebk", "application/x-expandedbook"),
    (".eps", "application/postscript"),
    (".evy", "application/envoy"),
    (".exe", "application/x-msdos-program"),
    (".fdf", "application/vnd.fdf"),
    (".fif", "application/fractals"),
    (".flm", "application/vnd.kde.kivio"),
    (".fml", "application/x-file-mirror-list"),
    (".gzip", "application/x-gzip"),
    (".gnumeric", "application/x-gnumeric"),
    (".gtar", "application/x-gtar"),
    (".gz", "application/x-gzip"),
    (".hdf", "application/x-hdf"),
    (".hlp", "application/winhlp"),
    (".hpf", "application/x-icq-hpf"),
    (".hqx", "application/mac-binhex40"),
    (".hta", "application/hta"),
    (".ims", "application/vnd.ms-ims"),
    (".ins", "application/x-internet-signup"),
    (".iii", "application/x-iphone"),
    (".iso", "application/x-iso9660-image"),
    (".jar", "application/java-archive"),
    (".karbon", "application/vnd.kde.karbon"),
    (".kfo", "application/vnd.kde.kformula"),
    (".kon", "application/vnd.kde.kontour"),
    (".kpr", "application/vnd.kde.kpresenter"),
    (".kpt", "application/vnd.kde.kpresenter"),
    (".kwd", "application/vnd.kde.kword"),
    (".kwt", "application/vnd.kde.kword"),
    (".latex", "application/x-latex"),
    (".lha", "application/x-lzh"),
    (".lcc", "application/fastman"),
    (".lrm", "application/vnd.ms-lrm"),
    (".lz", "application/x-lzip"),
    (".lzh", "application/x-lzh"),
    (".lzma", "application/x-lzma"),
    (".lzo", "application/x-lzop"),
    (".lzx", "application/x-lzx"),
    (".m13", "application/x-msmediaview"),
    (".m14", "application/x-msmediaview"),
    (".mpp", "application/vnd.ms-project"),
    (".mvb", "application/x-msmediaview"),
    (".man", "application/x-troff-man"),
    (".mdb", "application/x-msaccess"),
    (".me", "application/x-troff-me"),
    (".ms", "application/x-troff-ms"),
    (".msi", "application/x-msi"),
    (".mpkg", "vnd.apple.installer+xml"),
    (".mny", "application/x-msmoney"),
    (".nix", "application/x-mix-transfer"),
    (".o", "application/x-object"),
    (".oda", "application/oda"),
    (".odb", "application/vnd.oasis.opendocument.database"),
    (".odc", "application/vnd.oasis.opendocument.chart"),
    (".odf", "application/vnd.oasis.opendocument.formula"),
    (".odg", "application/vnd.oasis.opendocument.graphics"),
    (".odi", "application/vnd.oasis.opendocument.image"),
    (".odm", "application/vnd.oasis.opendocument.text-master"),
    (".odp", "application/vnd.oasis.opendocument.presentation"),
    (".ods", "application/vnd.oasis.opendocument.spreadsheet"),
    (".ogg", "application/ogg"),
    (".odt", "application/vnd.oasis.opendocument.text"),
    (
        ".otg",
        "application/vnd.oasis.opendocument.graphics-template",
    ),
    (".oth", "application/vnd.oasis.opendocument.text-web"),
    (
        ".otp",
        "application/vnd.oasis.opendocument.presentation-template",
    ),
    (
        ".ots",
        "application/vnd.oasis.opendocument.spreadsheet-template",
    ),
    (".ott", "application/vnd.oasis.opendocument.text-template"),
    (".p10", "application/pkcs10"),
    (".p12", "application/x-pkcs12"),
    (".p7b", "application/x-pkcs7-certificates"),
    (".p7m", "application/pkcs7-mime"),
    (".p7r", "application/x-pkcs7-certreqresp"),
    (".p7s", "application/pkcs7-signature"),
    (".package", "application/vnd.autopackage"),
    (".pfr", "application/font-tdpfr"),
    (".pkg", "vnd.apple.installer+xml"),
    (".pdf", "application/pdf"),
    (".pko", "application/vnd.ms-pki.pko"),
    (".pl", "application/x-perl"),
    (".pnq", "application/x-icq-pnq"),
    (".pot", "application/mspowerpoint"),
    (".pps", "application/mspowerpoint"),
    (".ppt", "application/mspowerpoint"),
    (".ppz", "application/mspowerpoint"),
    (".ps", "application/postscript"),
    (".pub", "application/x-mspublisher"),
    (".qpw", "application/x-quattropro"),
    (".qtl", "application/x-quicktimeplayer"),
    (".rar", "application/rar"),
    (".rdf", "application/rdf+xml"),
    (".rjs", "application/vnd.rn-realsystem-rjs"),
    (".rm", "application/vnd.rn-realmedia"),
    (".rmf", "application/vnd.rmf"),
    (".rmp", "application/vnd.rn-rn_music_package"),
    (".rmx", "application/vnd.rn-realsystem-rmx"),
    (".rnx", "application/vnd.rn-realplayer"),
    (".rpm", "application/x-redhat-package-manager"),
    (".rsml", "application/vnd.rn-rsml"),
    (".rtsp", "application/x-rtsp"),
    (".rss", "application/rss+xml"),
    (".scm", "application/x-icq-scm"),
    (".ser", "application/java-serialized-object"),
    (".scd", "application/x-msschedule"),
    (".sda", "application/vnd.stardivision.draw"),
    (".sdc", "application/vnd.stardivision.calc"),
    (".sdd", "application/vnd.stardivision.impress"),
    (".sdp", "application/x-sdp"),
    (".setpay", "application/set-payment-initiation"),
    (".setreg", "application/set-registration-initiation"),
    (".sh", "application/x-sh"),
    (".shar", "application/x-shar"),
    (".shw", "application/presentations"),
    (".sit", "application/x-stuffit"),
    (".sitx", "application/x-stuffitx"),
    (".skd", "application/x-koan"),
    (".skm", "application/x-koan"),
    (".skp", "application/x-koan"),
    (".skt", "application/x-koan"),
    (".smf", "application/vnd.stardivision.math"),
    (".smi", "application/smil"),
    (".smil", "application/smil"),
    (".spl", "application/futuresplash"),
    (".ssm", "application/streamingmedia"),
    (".sst", "application/vnd.ms-pki.certstore"),
    (".stc", "application/vnd.sun.xml.calc.template"),
    (".std", "application/vnd.sun.xml.draw.template"),
    (".sti", "application/vnd.sun.xml.impress.template"),
    (".stl", "application/vnd.ms-pki.stl"),
    (".stw", "application/vnd.sun.xml.writer.template"),
    (".svi", "application/softvision"),
    (".sv4cpio", "application/x-sv4cpio"),
    (".sv4crc", "application/x-sv4crc"),
    (".swf", "application/x-shockwave-flash"),
    (".swf1", "application/x-shockwave-flash"),
    (".sxc", "application/vnd.sun.xml.calc"),
    (".sxi", "application/vnd.sun.xml.impress"),
    (".sxm", "application/vnd.sun.xml.math"),
    (".sxw", "application/vnd.sun.xml.writer"),
    (".sxg", "application/vnd.sun.xml.writer.global"),
    (".t", "application/x-troff"),
    (".tar", "application/x-tar"),
    (".tcl", "application/x-tcl"),
    (".tex", "application/x-tex"),
    (".texi", "application/x-texinfo"),
    (".texinfo", "application/x-texinfo"),
    (".tbz", "application/x-bzip-compressed-tar"),
    (".tbz2", "application/x-bzip-compressed-tar"),
    (".tgz", "application/x-compressed-tar"),
    (".tlz", "application/x-lzma-compressed-tar"),
    (".tr", "application/x-troff"),
    (".trm", "application/x-msterminal"),
    (".troff", "application/x-troff"),
    (".tsp", "application/dsptype"),
    (".torrent", "application/x-bittorrent"),
    (".ttz", "application/t-time"),
    (".txz", "application/x-xz-compressed-tar"),
    (".udeb", "application/x-debian-package"),
    (".uin", "application/x-icq"),
    (".urls", "application/x-url-list"),
    (".ustar", "application/x-ustar"),
    (".vcd", "application/x-cdlink"),
    (".vor", "application/vnd.stardivision.writer"),
    (".vsl", "application/x-cnet-vsl"),
    (".wcm", "application/vnd.ms-works"),
    (".wb1", "application/x-quattropro"),
    (".wb2", "application/x-quattropro"),
    (".wb3", "application/x-quattropro"),
    (".wdb", "application/vnd.ms-works"),
    (".wks", "application/vnd.ms-works"),
    (".wmd", "application/x-ms-wmd"),
    (".wms", "application/x-ms-wms"),
    (".wmz", "application/x-ms-wmz"),
    (".wp5", "application/wordperfect5.1"),
    (".wpd", "application/wordperfect"),
    (".wpl", "application/vnd.ms-wpl"),
    (".wps", "application/vnd.ms-works"),
    (".wri", "application/x-mswrite"),
    (".xfdf", "application/vnd.adobe.xfdf"),
    (".xls", "application/x-msexcel"),
    (".xlb", "application/x-msexcel"),
    (".xpi", "application/x-xpinstall"),
    (".xps", "application/vnd.ms-xpsdocument"),
    (".xsd", "application/vnd.sun.xml.draw"),
    (".xul", "application/vnd.mozilla.xul+xml"),
    (".z", "application/x-compress"),
    (".zoo", "application/x-zoo"),
    (".zip", "application/x-zip-compressed"),
    (".wbmp", "image/vnd.wap.wbmp"),
    (".wml", "text/vnd.wap.wml"),
    (".wmlc", "application/vnd.wap.wmlc"),
    (".wmls", "text/vnd.wap.wmlscript"),
    (".wmlsc", "application/vnd.wap.wmlscriptc"),
    (".asm", "text/x-asm"),
    (".p", "text/x-pascal"),
    (".pas", "text/x-pascal"),
    (".cs", "text/x-csharp"),
    (".c", "text/x-csrc"),
    (".c++", "text/x-c++src"),
    (".cpp", "text/x-c++src"),
    (".cxx", "text/x-c++src"),
    (".cc", "text/x-c++src"),
    (".h", "text/x-chdr"),
    (".h++", "text/x-c++hdr"),
    (".hpp", "text/x-c++hdr"),
    (".hxx", "text/x-c++hdr"),
    (".hh", "text/x-c++hdr"),
    (".java", "text/x-java"),
    (".css", "text/css"),
    (".js", "text/javascript"),
    (".htm", "text/html"),
    (".html", "text/html"),
    (".xhtml", "application/xhtml+xml"),
    (".xht", "application/xhtml+xml"),
    (".rdf", "application/rdf+xml"),
    (".rss", "application/rss+xml"),
    (".ls", "text/javascript"),
    (".mocha", "text/javascript"),
    (".shtml", "server-parsed-html"),
    (".xml", "text/xml"),
    (".sgm", "text/sgml"),
    (".sgml", "text/sgml"),
    (".mht", "message/rfc822"),
];

/// A table of extensions and their types.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
///
/// The recovered table is a list of `extension=type` lines addressed by name,
/// which is why order matters and why writing to a name already present
/// replaces the first line carrying it rather than adding another.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct MimeTable {
    entries: Vec<(String, String)>,
}

impl MimeTable {
    /// An empty table.
    #[must_use]
    pub const fn new() -> Self {
        Self {
            entries: Vec::new(),
        }
    }

    /// How many lines it holds.
    #[must_use]
    pub fn len(&self) -> usize {
        self.entries.len()
    }

    /// Whether it holds none.
    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.entries.is_empty()
    }

    /// Every line, in order.
    #[must_use]
    pub fn entries(&self) -> &[(String, String)] {
        &self.entries
    }

    /// The type one extension is given.
    ///
    /// The first line that names it, so an extension written twice answers
    /// with the first of the two.
    #[must_use]
    pub fn get(&self, extension: &str) -> Option<&str> {
        self.entries
            .iter()
            .find(|(name, _)| name == extension)
            .map(|(_, mime)| mime.as_str())
    }

    /// Gives one extension a type, replacing what it had.
    ///
    /// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
    ///
    /// Writing by name replaces the first line carrying that name and leaves
    /// any later one alone, so a table that already held an extension twice
    /// still does afterwards.
    pub fn set(&mut self, extension: &str, mime: &str) {
        if let Some(entry) = self.entries.iter_mut().find(|(name, _)| name == extension) {
            mime.clone_into(&mut entry.1);
        } else {
            self.entries.push((extension.to_owned(), mime.to_owned()));
        }
    }

    /// Adds one line whether or not the extension is already there.
    ///
    /// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
    ///
    /// How the built-in table is laid down, which is why it can hold an
    /// extension twice at all.
    pub fn append(&mut self, extension: &str, mime: &str) {
        self.entries.push((extension.to_owned(), mime.to_owned()));
    }
}

/// Implements part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
///
/// Lays down the built-in table, but only into a table with nothing in it.
///
/// A table that already holds anything is left alone entirely — not merged
/// with, not added to. So whoever fills it first decides what it holds, and
/// calling this twice is not the same as calling it once and then adding.
///
/// Returns whether anything was laid down.
pub fn fill_built_in(table: &mut MimeTable) -> bool {
    if !table.is_empty() {
        return false;
    }
    for (extension, mime) in BUILT_IN_MIME_TYPES {
        table.append(extension, mime);
    }
    true
}

/// What reading the machine's own table needs.
///
/// Part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
pub trait MimeRegistry {
    /// The names directly under one key.
    fn subkeys(&mut self, key: &str) -> Vec<String>;

    /// One value under one key, or nothing when either is missing.
    fn read_value(&mut self, key: &str, value: &str) -> Option<String>;
}

/// Implements part of Ghidra function `FUN_008a2b70` at `0x008A2B70`.
///
/// Overlays whatever the machine says on top of the table.
///
/// Two passes, and the order of them is the whole of how conflicts settle.
/// The first walks the machine's own root for keys beginning with a dot and
/// takes the type each one names. The second walks the type database the other
/// way round, taking the extension each type names — and because both passes
/// write by name, the second overrides the first, and both override anything
/// compiled in.
///
/// An extension the second pass finds without a leading dot is given one, so
/// a machine that records `mp3` and one that records `.mp3` come out the same.
/// The first pass has no such step: a key that does not begin with a dot is
/// not an extension and is passed over.
pub fn augment_from_registry<Registry: MimeRegistry>(
    table: &mut MimeTable,
    registry: &mut Registry,
) {
    for name in registry.subkeys("") {
        if !name.starts_with(EXTENSION_PREFIX) {
            continue;
        }
        if let Some(mime) = registry.read_value(&name, CONTENT_TYPE_VALUE) {
            if !mime.is_empty() {
                table.set(&name, &mime);
            }
        }
    }

    for mime in registry.subkeys(MIME_DATABASE_KEY) {
        let key = format!("{MIME_DATABASE_KEY}\\{mime}");
        let Some(extension) = registry.read_value(&key, EXTENSION_VALUE) else {
            continue;
        };
        let extension = extension.trim();
        if extension.is_empty() {
            continue;
        }
        let extension = if extension.starts_with(EXTENSION_PREFIX) {
            extension.to_owned()
        } else {
            format!("{EXTENSION_PREFIX}{extension}")
        };
        table.set(&extension, &mime);
    }
}

/// Implements Ghidra function `FUN_008a2b70` at `0x008A2B70`.
///
/// Makes the table ready, from what was compiled in and optionally from the
/// machine.
///
/// The two halves are independent: a table that already holds something skips
/// the built-in half but is still overlaid from the machine, so a caller can
/// supply its own table and have it corrected without having the defaults
/// forced on it.
pub fn load_mime_types<Registry: MimeRegistry>(
    table: &mut MimeTable,
    registry: Option<&mut Registry>,
) {
    fill_built_in(table);
    if let Some(registry) = registry {
        augment_from_registry(table, registry);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Machine {
        keys: Vec<(String, Vec<String>)>,
        values: Vec<((String, String), String)>,
    }

    impl Machine {
        fn with_subkeys(mut self, key: &str, names: &[&str]) -> Self {
            self.keys.push((
                key.to_owned(),
                names.iter().map(|name| (*name).to_owned()).collect(),
            ));
            self
        }

        fn with_value(mut self, key: &str, value: &str, held: &str) -> Self {
            self.values
                .push(((key.to_owned(), value.to_owned()), held.to_owned()));
            self
        }
    }

    impl MimeRegistry for Machine {
        fn subkeys(&mut self, key: &str) -> Vec<String> {
            self.keys
                .iter()
                .find(|(held, _)| held == key)
                .map(|(_, names)| names.clone())
                .unwrap_or_default()
        }

        fn read_value(&mut self, key: &str, value: &str) -> Option<String> {
            self.values
                .iter()
                .find(|((held_key, held_value), _)| held_key == key && held_value == value)
                .map(|(_, held)| held.clone())
        }
    }

    fn filled() -> MimeTable {
        let mut table = MimeTable::new();
        fill_built_in(&mut table);
        table
    }

    #[test]
    fn the_built_in_table_holds_every_recovered_line() {
        assert_eq!(filled().len(), 384);
    }

    #[test]
    fn a_few_ordinary_extensions_come_out_right() {
        let table = filled();

        assert_eq!(table.get(".gif"), Some("image/gif"));
        assert_eq!(table.get(".wav"), Some("audio/x-wav"));
        assert_eq!(table.get(".pdf"), Some("application/pdf"));
    }

    #[test]
    fn an_extension_the_table_does_not_name_has_no_type() {
        assert_eq!(filled().get(".tsc"), None);
    }

    #[test]
    fn the_first_of_two_lines_for_one_extension_is_the_one_answered() {
        let table = filled();

        // Written as a sound first and a film second.
        assert_eq!(table.get(".mp3"), Some("audio/x-mpg"));
        assert_eq!(table.get(".mp2"), Some("audio/x-mpg"));
    }

    #[test]
    fn twelve_extensions_are_written_twice_and_eight_of_them_disagree() {
        let mut seen: Vec<&str> = BUILT_IN_MIME_TYPES
            .iter()
            .map(|(extension, _)| *extension)
            .collect();
        let before = seen.len();
        seen.sort_unstable();
        seen.dedup();
        let repeated = before - seen.len();

        let mut disagreeing = 0;
        for extension in &seen {
            let mut types: Vec<&str> = BUILT_IN_MIME_TYPES
                .iter()
                .filter(|(held, _)| held == extension)
                .map(|(_, mime)| *mime)
                .collect();
            let all = types.len();
            types.sort_unstable();
            types.dedup();
            if all > 1 && types.len() > 1 {
                disagreeing += 1;
            }
        }

        assert_eq!(repeated, 12);
        assert_eq!(disagreeing, 8);
    }

    #[test]
    fn a_table_that_already_holds_anything_is_left_alone() {
        let mut table = MimeTable::new();
        table.append(".tsc", "application/x-tina-circuit");

        assert!(!fill_built_in(&mut table));
        assert_eq!(table.len(), 1);
        assert_eq!(table.get(".gif"), None);
    }

    #[test]
    fn filling_twice_lays_nothing_down_the_second_time() {
        let mut table = MimeTable::new();

        assert!(fill_built_in(&mut table));
        assert!(!fill_built_in(&mut table));
        assert_eq!(table.len(), 384);
    }

    #[test]
    fn writing_by_name_replaces_the_first_line_and_leaves_a_later_one() {
        let mut table = MimeTable::new();
        table.append(".mp3", "audio/x-mpg");
        table.append(".mp3", "video/mpeg");
        table.set(".mp3", "audio/mpeg");

        assert_eq!(table.get(".mp3"), Some("audio/mpeg"));
        assert_eq!(table.entries()[1].1, "video/mpeg");
    }

    #[test]
    fn the_machines_own_extension_keys_override_what_was_compiled_in() {
        let mut table = filled();
        let mut machine = Machine::default()
            .with_subkeys("", &[".gif", "CLSID", ".tsc"])
            .with_value(".gif", CONTENT_TYPE_VALUE, "image/x-machine-gif")
            .with_value(".tsc", CONTENT_TYPE_VALUE, "application/x-tina");
        augment_from_registry(&mut table, &mut machine);

        assert_eq!(table.get(".gif"), Some("image/x-machine-gif"));
        assert_eq!(table.get(".tsc"), Some("application/x-tina"));
    }

    #[test]
    fn a_key_that_does_not_begin_with_a_dot_is_passed_over() {
        let mut table = MimeTable::new();
        let mut machine = Machine::default().with_subkeys("", &["CLSID"]).with_value(
            "CLSID",
            CONTENT_TYPE_VALUE,
            "nonsense",
        );
        augment_from_registry(&mut table, &mut machine);

        assert!(table.is_empty());
    }

    #[test]
    fn an_extension_key_with_no_type_of_its_own_adds_nothing() {
        let mut table = MimeTable::new();
        let mut machine = Machine::default()
            .with_subkeys("", &[".x", ".y"])
            .with_value(".y", CONTENT_TYPE_VALUE, "");
        augment_from_registry(&mut table, &mut machine);

        assert!(table.is_empty());
    }

    #[test]
    fn the_type_database_is_read_the_other_way_round() {
        let mut table = MimeTable::new();
        let mut machine = Machine::default()
            .with_subkeys(MIME_DATABASE_KEY, &["image/png"])
            .with_value(
                &format!("{MIME_DATABASE_KEY}\\image/png"),
                EXTENSION_VALUE,
                ".png",
            );
        augment_from_registry(&mut table, &mut machine);

        assert_eq!(table.get(".png"), Some("image/png"));
    }

    #[test]
    fn an_extension_recorded_without_a_dot_is_given_one() {
        let mut table = MimeTable::new();
        let mut machine = Machine::default()
            .with_subkeys(MIME_DATABASE_KEY, &["image/png"])
            .with_value(
                &format!("{MIME_DATABASE_KEY}\\image/png"),
                EXTENSION_VALUE,
                " png ",
            );
        augment_from_registry(&mut table, &mut machine);

        assert_eq!(table.get(".png"), Some("image/png"));
    }

    #[test]
    fn the_second_pass_overrides_the_first() {
        let mut table = MimeTable::new();
        let mut machine = Machine::default()
            .with_subkeys("", &[".png"])
            .with_value(".png", CONTENT_TYPE_VALUE, "image/from-first-pass")
            .with_subkeys(MIME_DATABASE_KEY, &["image/from-second-pass"])
            .with_value(
                &format!("{MIME_DATABASE_KEY}\\image/from-second-pass"),
                EXTENSION_VALUE,
                ".png",
            );
        augment_from_registry(&mut table, &mut machine);

        assert_eq!(table.get(".png"), Some("image/from-second-pass"));
    }

    #[test]
    fn loading_without_a_machine_gives_the_built_in_table_alone() {
        let mut table = MimeTable::new();
        load_mime_types::<Machine>(&mut table, None);

        assert_eq!(table.len(), 384);
    }

    #[test]
    fn a_caller_with_its_own_table_is_corrected_but_not_overruled() {
        // The built-in half is skipped and the machine half is not.
        let mut table = MimeTable::new();
        table.append(".tsc", "application/x-mine");
        let mut machine = Machine::default().with_subkeys("", &[".tsc"]).with_value(
            ".tsc",
            CONTENT_TYPE_VALUE,
            "application/x-machine",
        );
        load_mime_types(&mut table, Some(&mut machine));

        assert_eq!(table.len(), 1);
        assert_eq!(table.get(".tsc"), Some("application/x-machine"));
    }
}
