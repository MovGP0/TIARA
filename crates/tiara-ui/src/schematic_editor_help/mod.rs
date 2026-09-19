//! Iced state for the recovered Schematic Editor Help and TI utility menus.
//!
//! Two kinds of entry live here: the ones that open a topic in a local help
//! file, and the ones that hand a fixed URL to the system browser.

use std::path::{Path, PathBuf};

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The main help file.
pub const MAIN_HELP_FILE: &str = "TINA.CHM";

/// The component help file.
pub const COMPONENT_HELP_FILE: &str = "TCH.CHM";

/// The context the Help menu's Contents entry opens.
pub const CONTENTS_CONTEXT: u32 = 1000;

/// The context the Getting Started entry opens.
pub const GETTING_STARTED_CONTEXT: u32 = 0x2711;

/// The keyword the component help entry looks up.
pub const COMPONENT_HELP_KEYWORD: &str = "index";

/// The verb the recovered build passes to the shell when opening a link.
pub const SHELL_OPEN_VERB: &str = "open";

/// The links the TI Utilities menu opens.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TiLink {
    /// `mnTIUtilities.mnRequestTISampleParts` ("Request TI sample parts").
    RequestSampleParts,
    /// `mnTIUtilities.mnTinaTIFAQ` ("Tina-TI FAQ").
    Faq,
    /// `mnTIUtilities.mnTIAnalogeLabDesignTools`
    /// ("TI Analog eLab Design Center").
    AnalogELabDesignCenter,
}

impl TiLink {
    /// The address the recovered handler passes to the shell, verbatim.
    #[must_use]
    pub const fn url(self) -> &'static str {
        match self {
            Self::RequestSampleParts => "https://www-a.ti.com/apps/sampcert/basket.asp",
            Self::Faq => {
                "http://focus.ti.com/analog/docs/gencontent.tsp?familyId=02&genContentId=33361"
            }
            Self::AnalogELabDesignCenter => {
                "http://focus.ti.com/adc/docs/portal.tsp?sectionId=121&contentId=23493&DCMP=hpa_design_center&HQS=Tools+OT+analogdesigncenter"
            }
        }
    }
}

pub trait TiLinkHost {
    /// Hands one address to the shell with the given verb.
    fn open_url(&mut self, verb: &str, url: &str);
}

/// Implements Ghidra functions `FUN_01c9d3d0` at `0x01C9D3D0`, `FUN_01c9d110`
/// at `0x01C9D110`, and `FUN_01c9d240` at `0x01C9D240`.
///
/// Opens one of the TI web links in the system browser.
///
/// The addresses are compiled into the build rather than read from a
/// configuration file, so they cannot be redirected — two of the three still
/// point at plain `http`.
pub fn open_ti_link(link: TiLink, host: &mut impl TiLinkHost) {
    host.open_url(SHELL_OPEN_VERB, link.url());
}

/// The help topics the Help menu opens.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HelpTopic {
    /// `Help.Contents` ("&Contents").
    Contents,
    /// `Help.mnGettingStarted` ("&Getting Started").
    GettingStarted,
}

impl HelpTopic {
    /// The help context the recovered handler opens.
    #[must_use]
    pub const fn context(self) -> u32 {
        match self {
            Self::Contents => CONTENTS_CONTEXT,
            Self::GettingStarted => GETTING_STARTED_CONTEXT,
        }
    }
}

pub trait HelpTopicHost {
    /// The directory the help files live in.
    fn help_directory(&mut self) -> PathBuf;

    /// The per-topic subdirectory the recovered handler inserts into the path.
    ///
    /// Each entry carries its own literal here, and the recovered symbols do
    /// not expose them, so the caller supplies it.
    fn topic_subdirectory(&mut self, topic: HelpTopic) -> String;

    /// Resolves the localized variant of a help file.
    fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf;

    /// Opens a help file at one context.
    fn show_help_context(&mut self, context: u32, help_file: &Path);

    /// Opens a help file at one keyword.
    fn show_help_keyword(&mut self, keyword: &str, help_file: &Path);
}

/// Implements Ghidra functions `FUN_01c761b0` at `0x01C761B0` and
/// `FUN_01c8e7d0` at `0x01C8E7D0`.
///
/// Opens one topic of the main help file.
///
/// Both entries build the same three-part path — help directory, a per-topic
/// subdirectory, then the file — and resolve the localized variant before
/// opening, so a translated help file is preferred wherever one exists.
pub fn open_help_topic(topic: HelpTopic, host: &mut impl HelpTopicHost) -> PathBuf {
    let subdirectory = host.topic_subdirectory(topic);
    let base_path = host
        .help_directory()
        .join(subdirectory)
        .join(MAIN_HELP_FILE);
    let resolved = host.resolve_localized_help(&base_path);
    host.show_help_context(topic.context(), &resolved);
    resolved
}

/// Implements Ghidra function `FUN_01c90710` at `0x01C90710`.
///
/// Handles `MainMenu.Help.HelpOnComponents.OnClick` ("C&omponent Help").
///
/// Opens the component help file.
///
/// This is the one help entry that looks a keyword up rather than jumping to a
/// numbered context, so the topic it lands on follows the help file's own index
/// instead of an id compiled into the build.
pub fn open_component_help(host: &mut impl HelpTopicHost) -> PathBuf {
    let subdirectory = host.topic_subdirectory(HelpTopic::Contents);
    let base_path = host
        .help_directory()
        .join(subdirectory)
        .join(COMPONENT_HELP_FILE);
    let resolved = host.resolve_localized_help(&base_path);
    host.show_help_keyword(COMPONENT_HELP_KEYWORD, &resolved);
    resolved
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Links {
        opened: Vec<(String, String)>,
    }

    impl TiLinkHost for Links {
        fn open_url(&mut self, verb: &str, url: &str) {
            self.opened.push((verb.to_owned(), url.to_owned()));
        }
    }

    #[test]
    fn every_link_is_opened_with_the_recovered_verb() {
        let mut host = Links::default();

        for link in [
            TiLink::RequestSampleParts,
            TiLink::Faq,
            TiLink::AnalogELabDesignCenter,
        ] {
            open_ti_link(link, &mut host);
        }

        assert_eq!(host.opened.len(), 3);
        assert!(host.opened.iter().all(|(verb, _)| verb == SHELL_OPEN_VERB));
    }

    #[test]
    fn the_addresses_are_the_recovered_literals() {
        assert_eq!(
            TiLink::RequestSampleParts.url(),
            "https://www-a.ti.com/apps/sampcert/basket.asp"
        );
        assert!(TiLink::Faq.url().starts_with("http://focus.ti.com/analog/"));
        assert!(
            TiLink::AnalogELabDesignCenter
                .url()
                .contains("analogdesigncenter")
        );
    }

    #[derive(Debug, Default)]
    struct Help {
        resolved: Vec<PathBuf>,
        contexts: Vec<(u32, PathBuf)>,
        keywords: Vec<(String, PathBuf)>,
    }

    impl HelpTopicHost for Help {
        fn help_directory(&mut self) -> PathBuf {
            PathBuf::from(r"C:\TINA")
        }

        fn topic_subdirectory(&mut self, _topic: HelpTopic) -> String {
            "HELP".to_owned()
        }

        fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf {
            self.resolved.push(base_path.to_path_buf());
            base_path.to_path_buf()
        }

        fn show_help_context(&mut self, context: u32, help_file: &Path) {
            self.contexts.push((context, help_file.to_path_buf()));
        }

        fn show_help_keyword(&mut self, keyword: &str, help_file: &Path) {
            self.keywords
                .push((keyword.to_owned(), help_file.to_path_buf()));
        }
    }

    #[test]
    fn the_two_topics_open_their_own_contexts_in_the_main_file() {
        let mut host = Help::default();

        let contents = open_help_topic(HelpTopic::Contents, &mut host);
        let started = open_help_topic(HelpTopic::GettingStarted, &mut host);

        assert!(contents.ends_with(MAIN_HELP_FILE));
        assert_eq!(
            host.contexts,
            [
                (CONTENTS_CONTEXT, contents),
                (GETTING_STARTED_CONTEXT, started),
            ]
        );
        assert_eq!(host.resolved.len(), 2);
    }

    #[test]
    fn component_help_looks_up_a_keyword_in_its_own_file() {
        let mut host = Help::default();

        let path = open_component_help(&mut host);

        assert!(path.ends_with(COMPONENT_HELP_FILE));
        assert_eq!(host.keywords, [(COMPONENT_HELP_KEYWORD.to_owned(), path)]);
        assert!(host.contexts.is_empty());
    }
}
