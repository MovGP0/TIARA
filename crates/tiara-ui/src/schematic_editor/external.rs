//! The menu items that lead out of the program.
//!
//! `Help > DesignSoft on the Web` is four addresses, and the original hands
//! each to the system with the verb `open` - which is to say, to whichever
//! browser the machine uses. The captions are the addresses, so there is
//! nothing to decide about what these do: they go where they say they go.
//!
//! The launching itself is one thin function that is not tested, in the same
//! shape as the file dialogs: everything that decides is decided before it.

use std::process::Command;

/// The addresses the Help menu offers, by the name the resource gives each.
///
/// The captions in the menu are the addresses themselves, without the scheme;
/// the scheme is what the original puts in front of them before asking the
/// system to open one.
pub const ADDRESSES: [(&str, &str); 4] = [
    ("wwwdesignsoftwarecom", "http://www.designsoftware.com"),
    ("wwwtinacom", "http://www.tina.com"),
    ("wwwtinacloudcom", "http://www.tinacloud.com"),
    ("wwwedisonlabcom", "http://www.edisonlab.com"),
];

/// Where a command leads, where it leads out of the program at all.
#[must_use]
pub fn address_for(name: &str) -> Option<&'static str> {
    ADDRESSES
        .iter()
        .find(|(command, _)| *command == name)
        .map(|(_, address)| *address)
}

/// Whether an address is one worth handing to the system.
///
/// Only the two web schemes. Handing anything else to the shell would be
/// handing it whatever else the string happened to name, and nothing here
/// needs that.
#[must_use]
pub fn is_a_web_address(address: &str) -> bool {
    address.starts_with("http://") || address.starts_with("https://")
}

/// Asks the system to open an address in whatever browser it uses.
///
/// # Errors
///
/// Whatever the system said when it was asked. An address that is not a web
/// address is refused before anything is started.
pub fn open_in_the_browser(address: &str) -> std::io::Result<()> {
    if !is_a_web_address(address) {
        return Err(std::io::Error::new(
            std::io::ErrorKind::InvalidInput,
            format!("{address} is not a web address"),
        ));
    }

    // The address goes as one argument rather than through a shell, so an
    // address carrying an `&` arrives whole.
    let mut command = if cfg!(target_os = "windows") {
        let mut command = Command::new("rundll32.exe");
        command.arg("url.dll,FileProtocolHandler");
        command
    } else if cfg!(target_os = "macos") {
        Command::new("open")
    } else {
        Command::new("xdg-open")
    };
    command.arg(address).status().map(|_| ())
}

#[cfg(test)]
mod tests {
    use super::{ADDRESSES, address_for, is_a_web_address, open_in_the_browser};
    use crate::schematic_editor::menu_tree;

    #[test]
    fn every_address_is_a_command_the_menu_carries() {
        for (command, _) in ADDRESSES {
            assert!(
                menu_tree::find(command).is_some(),
                "{command} should be in the menu"
            );
        }
    }

    #[test]
    fn the_caption_in_the_menu_is_the_address_it_opens() {
        for (command, address) in ADDRESSES {
            let caption = menu_tree::find(command).unwrap().caption;
            assert_eq!(address, format!("http://{caption}"));
        }
    }

    #[test]
    fn a_command_that_leads_nowhere_says_so() {
        assert_eq!(address_for("wwwtinacom"), Some("http://www.tina.com"));
        assert_eq!(address_for("mnNew"), None);
        assert_eq!(address_for(""), None);
    }

    #[test]
    fn only_a_web_address_is_handed_to_the_system() {
        assert!(is_a_web_address("http://www.tina.com"));
        assert!(is_a_web_address("https://www.tina.com"));

        for other in [
            "file:///C:/Windows/System32/cmd.exe",
            "C:/Windows/System32/cmd.exe",
            "mailto:someone@example.com",
            "",
        ] {
            assert!(!is_a_web_address(other), "{other} should be refused");
        }
    }

    #[test]
    fn something_that_is_not_an_address_is_refused_before_anything_starts() {
        // Nothing is launched: the refusal comes before the command is built.
        let refused = open_in_the_browser("C:/Windows/System32/cmd.exe");
        assert!(refused.is_err());
        assert_eq!(
            refused.unwrap_err().kind(),
            std::io::ErrorKind::InvalidInput
        );
    }
}
