//! Handing a netlist to a simulator, and reading back what it says.
//!
//! The port writes a netlist ([`crate::spice_netlist`]) and does not solve
//! it. A simulator is a separate program that is run when one is there, and
//! the analysis commands are greyed when one is not - the same shape the
//! menu already uses for the measurement card and the installed help.
//!
//! **Why a separate program rather than a crate linked in.** The engine
//! this is built for is [RSpice](https://github.com/JaimeHW/RSpice), which
//! is carried as a sub-repository under `external/RSpice`. Its licence
//! allows personal, educational and open academic use and forbids
//! redistribution: "You may not redistribute, re-host, sublicense, mirror,
//! or otherwise make the source code or compiled binaries available to
//! third parties". TIARA is MIT and is meant to be distributable, so a
//! binary with the engine linked into it could not be shipped. Run as a
//! program the user has built or installed, nothing of it is in TIARA's
//! binary and both licences are satisfied.
//!
//! It is not tied to that engine. Anything that reads a SPICE netlist on
//! the command line and writes a table can stand here; the program is
//! named by a setting, so ngspice or another build serves as well.
//!
//! What this does not do is decide what a waveform means. It runs the
//! program, reads the table back, and hands it on.

use std::collections::BTreeMap;
use std::path::PathBuf;
use std::process::Command;

use crate::spice_netlist::Netlist;

/// What the engine is called, and what to look for on the path.
pub const PROGRAM: &str = "rspice";

/// The variable that says where it is, when it is not on the path.
pub const HOME_VARIABLE: &str = "TIARA_SPICE";

/// The format asked for, which every engine of this kind can write.
pub const FORMAT: &str = "csv";

/// What can go wrong between the netlist and the answer.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// No simulator was found, so nothing could be run.
    NoSimulator,
    /// The program could not be started. The text is the system's own.
    Io(String),
    /// It ran and refused the circuit. The text is its own.
    Refused(String),
    /// It ran and wrote something that could not be read back.
    Unreadable(String),
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::NoSimulator => write!(f, "no simulator was found"),
            Self::Io(what) | Self::Refused(what) | Self::Unreadable(what) => write!(f, "{what}"),
        }
    }
}

impl std::error::Error for Error {}

/// A table of results: a column per thing measured, a row per point.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Table {
    /// What each column is - `time`, `V(1)`, `I(R1)`.
    pub columns: Vec<String>,
    /// The rows, each as long as [`Self::columns`].
    pub rows: Vec<Vec<f64>>,
}

impl Table {
    /// One column by name.
    #[must_use]
    pub fn column(&self, named: &str) -> Option<Vec<f64>> {
        let at = self.columns.iter().position(|it| it == named)?;
        Some(
            self.rows
                .iter()
                .filter_map(|row| row.get(at).copied())
                .collect(),
        )
    }

    /// Whether anything was measured.
    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.rows.is_empty()
    }
}

/// A simulator that is run as a program.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Simulator {
    /// The program itself.
    pub program: PathBuf,
}

impl Simulator {
    /// The simulator this machine has, if it has one.
    ///
    /// Looked for where the rest of the port looks for things it does not
    /// ship: the variable that names it outright, then the path, then
    /// beside the application, then in the sub-repository's own build
    /// output for someone working on both at once.
    #[must_use]
    pub fn found() -> Option<Self> {
        for path in candidates() {
            if path.is_file() {
                return Some(Self { program: path });
            }
        }
        // On the path, which `Command` will resolve for us. There is no way
        // to ask without running it, so this is checked by asking it for
        // its version.
        let named = PathBuf::from(with_extension(PROGRAM));
        Self { program: named }.answers().then(|| Self {
            program: PathBuf::from(with_extension(PROGRAM)),
        })
    }

    /// Whether the program is there and answers.
    #[must_use]
    pub fn answers(&self) -> bool {
        Command::new(&self.program)
            .arg("--version")
            .output()
            .is_ok_and(|done| done.status.success())
    }

    /// Asks it whether a netlist makes sense, without simulating it.
    ///
    /// # Errors
    ///
    /// [`Error::Io`] if it cannot be run, and [`Error::Refused`] with what
    /// it said if it does not like the circuit.
    pub fn check(&self, netlist: &Netlist) -> Result<(), Error> {
        let written = write_beside_nothing(netlist)?;
        let done = Command::new(&self.program)
            .arg("check")
            .arg(&written)
            .output()
            .map_err(|error| Error::Io(error.to_string()))?;
        let _ = std::fs::remove_file(&written);

        if done.status.success() {
            return Ok(());
        }
        Err(Error::Refused(said(&done.stderr, &done.stdout)))
    }

    /// Runs a netlist and reads the table back.
    ///
    /// # Errors
    ///
    /// [`Error::Io`] if it cannot be run, [`Error::Refused`] if it will not
    /// simulate the circuit, and [`Error::Unreadable`] if what it wrote is
    /// not a table.
    pub fn run(&self, netlist: &Netlist) -> Result<Table, Error> {
        let written = write_beside_nothing(netlist)?;
        let results = written.with_extension(FORMAT);

        let done = Command::new(&self.program)
            .arg("run")
            .arg(&written)
            .arg("--output")
            .arg(&results)
            .arg("--format")
            .arg(FORMAT)
            .output()
            .map_err(|error| Error::Io(error.to_string()))?;
        let _ = std::fs::remove_file(&written);

        if !done.status.success() {
            let _ = std::fs::remove_file(&results);
            return Err(Error::Refused(said(&done.stderr, &done.stdout)));
        }

        let text = std::fs::read_to_string(&results)
            .map_err(|error| Error::Unreadable(error.to_string()))?;
        let _ = std::fs::remove_file(&results);
        table_of(&text)
    }
}

/// Where a simulator might be, in the order they are tried.
fn candidates() -> Vec<PathBuf> {
    let mut found = Vec::new();
    if let Some(named) = std::env::var_os(HOME_VARIABLE) {
        let named = PathBuf::from(named);
        // The variable may name the program or the folder holding it.
        found.push(named.clone());
        found.push(named.join(with_extension(PROGRAM)));
    }
    if let Ok(application) = std::env::current_exe() {
        if let Some(beside) = application.parent() {
            found.push(beside.join(with_extension(PROGRAM)));
            // Where the sub-repository builds it, for someone working on
            // both at once.
            found.push(
                beside
                    .join("external")
                    .join("RSpice")
                    .join("target")
                    .join("release")
                    .join(with_extension(PROGRAM)),
            );
        }
    }
    found
}

/// A program's name with whatever ending this system puts on one.
#[must_use]
pub fn with_extension(name: &str) -> String {
    if cfg!(windows) {
        format!("{name}.exe")
    } else {
        name.to_owned()
    }
}

/// Whatever the program said, preferring what it said went wrong.
fn said(stderr: &[u8], stdout: &[u8]) -> String {
    let complaint = String::from_utf8_lossy(stderr).trim().to_owned();
    if complaint.is_empty() {
        String::from_utf8_lossy(stdout).trim().to_owned()
    } else {
        complaint
    }
}

/// Writes a netlist somewhere the simulator can read it.
fn write_beside_nothing(netlist: &Netlist) -> Result<PathBuf, Error> {
    let name = format!("tiara-{}-{}.cir", std::process::id(), netlist.lines.len());
    let path = std::env::temp_dir().join(name);
    std::fs::write(&path, netlist.to_text()).map_err(|error| Error::Io(error.to_string()))?;
    Ok(path)
}

/// A table out of what the simulator wrote.
///
/// # Errors
///
/// [`Error::Unreadable`] if there is no header row.
pub fn table_of(text: &str) -> Result<Table, Error> {
    let mut lines = text.lines().filter(|line| !line.trim().is_empty());
    let Some(header) = lines.next() else {
        return Err(Error::Unreadable("the simulator wrote nothing".to_owned()));
    };

    let columns: Vec<String> = header
        .split(',')
        .map(|name| name.trim().trim_matches('"').to_owned())
        .collect();

    let rows: Vec<Vec<f64>> = lines
        .map(|line| {
            line.split(',')
                .map(|cell| cell.trim().parse::<f64>().unwrap_or(f64::NAN))
                .collect()
        })
        .collect();

    Ok(Table { columns, rows })
}

/// Everything a run wants, gathered in one place.
///
/// The netlist it would be given and what is missing from it, so that the
/// interface can say why a circuit cannot be simulated without running
/// anything.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Readiness {
    /// Whether a simulator was found at all.
    pub have_a_simulator: bool,
    /// What the netlist is short of. See [`Netlist::wanting`].
    pub wanting: Vec<String>,
}

impl Readiness {
    /// Whether a run could be attempted.
    #[must_use]
    pub fn can_run(&self) -> bool {
        self.have_a_simulator && self.wanting.is_empty()
    }

    /// Why not, in one line, for the status bar.
    #[must_use]
    pub fn why_not(&self) -> Option<String> {
        if !self.have_a_simulator {
            return Some("no simulator was found".to_owned());
        }
        let first = self.wanting.first()?;
        Some(match self.wanting.len() {
            1 => first.clone(),
            more => format!("{first}, and {} more", more - 1),
        })
    }
}

/// What stands between a circuit and a run.
#[must_use]
pub fn readiness(netlist: &Netlist, simulator: Option<&Simulator>) -> Readiness {
    Readiness {
        have_a_simulator: simulator.is_some(),
        wanting: netlist.wanting.clone(),
    }
}

/// The columns of a table, as a name to its numbers.
#[must_use]
pub fn by_name(table: &Table) -> BTreeMap<String, Vec<f64>> {
    table
        .columns
        .iter()
        .filter_map(|name| table.column(name).map(|values| (name.clone(), values)))
        .collect()
}

#[cfg(test)]
mod tests {
    use super::{
        Error, HOME_VARIABLE, PROGRAM, Readiness, Simulator, by_name, readiness, said, table_of,
        with_extension,
    };
    use crate::spice_netlist::Netlist;

    fn a_netlist() -> Netlist {
        Netlist {
            title: "Divider".to_owned(),
            lines: vec!["R1 1 0 1k".to_owned()],
            wanting: Vec::new(),
            asking: Some(crate::spice_netlist::Analysis::OperatingPoint),
        }
    }

    #[test]
    fn a_table_is_read_out_of_what_the_simulator_wrote() {
        let table = table_of("time,V(1),V(2)\n0,10,5\n1e-3,10,5\n").unwrap();
        assert_eq!(table.columns, ["time", "V(1)", "V(2)"]);
        assert_eq!(table.rows.len(), 2);
        assert_eq!(table.column("V(1)"), Some(vec![10.0, 10.0]));
        assert_eq!(table.column("V(9)"), None);
        assert!(!table.is_empty());
    }

    #[test]
    fn quoted_headings_and_blank_lines_are_read_as_well() {
        let table = table_of("\"time\",\"V(1)\"\n\n0,1\n\n1,2\n").unwrap();
        assert_eq!(table.columns, ["time", "V(1)"]);
        assert_eq!(table.rows.len(), 2);
    }

    #[test]
    fn a_table_of_nothing_is_refused_rather_than_read_as_empty() {
        assert!(matches!(table_of(""), Err(Error::Unreadable(_))));
    }

    #[test]
    fn a_heading_without_rows_is_a_table_that_measured_nothing() {
        let table = table_of("time,V(1)\n").unwrap();
        assert_eq!(table.columns.len(), 2);
        assert!(table.is_empty());
    }

    #[test]
    fn the_columns_can_be_had_by_name() {
        let table = table_of("time,V(1)\n0,10\n1,20\n").unwrap();
        let found = by_name(&table);
        assert_eq!(found["V(1)"], vec![10.0, 20.0]);
        assert_eq!(found.len(), 2);
    }

    #[test]
    fn a_program_name_carries_this_systems_ending() {
        let named = with_extension(PROGRAM);
        if cfg!(windows) {
            assert_eq!(named, "rspice.exe");
        } else {
            assert_eq!(named, "rspice");
        }
    }

    #[test]
    fn nothing_can_be_run_without_a_simulator() {
        let ready = readiness(&a_netlist(), None);
        assert!(!ready.can_run());
        assert_eq!(ready.why_not().as_deref(), Some("no simulator was found"));
    }

    #[test]
    fn a_circuit_that_is_short_of_something_says_what() {
        let mut netlist = a_netlist();
        netlist.wanting = vec!["R1 has no value".to_owned()];
        let ready = Readiness {
            have_a_simulator: true,
            wanting: netlist.wanting,
        };
        assert!(!ready.can_run());
        assert_eq!(ready.why_not().as_deref(), Some("R1 has no value"));

        let many = Readiness {
            have_a_simulator: true,
            wanting: vec!["one".to_owned(), "two".to_owned(), "three".to_owned()],
        };
        assert_eq!(many.why_not().as_deref(), Some("one, and 2 more"));
    }

    #[test]
    fn a_circuit_with_a_simulator_and_nothing_missing_is_ready() {
        let ready = Readiness {
            have_a_simulator: true,
            wanting: Vec::new(),
        };
        assert!(ready.can_run());
        assert_eq!(ready.why_not(), None);
    }

    #[test]
    fn a_simulator_that_is_not_there_does_not_answer() {
        let missing = Simulator {
            program: std::env::temp_dir().join("tiara-no-such-simulator"),
        };
        assert!(!missing.answers());
        assert!(matches!(missing.check(&a_netlist()), Err(Error::Io(_))));
        assert!(matches!(missing.run(&a_netlist()), Err(Error::Io(_))));
    }

    #[test]
    fn the_variable_is_looked_at_before_the_path() {
        // Not by running anything: the name is what matters, and this
        // records where it is read from so it cannot be renamed by
        // accident.
        assert_eq!(HOME_VARIABLE, "TIARA_SPICE");
    }

    #[test]
    fn what_the_program_said_prefers_the_complaint_over_the_chatter() {
        // Whether a given program refuses a given circuit is the engine's
        // business; what is this module's business is which of the two
        // things it wrote gets carried back.
        assert_eq!(said(b"it went wrong", b"working..."), "it went wrong");
        assert_eq!(
            said(
                b"   
",
                b"working..."
            ),
            "working..."
        );
        assert_eq!(said(b"", b""), "");
    }
}
