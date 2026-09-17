//! Iced state for the recovered IBIS import dialog.
//!
//! The dialog drives three dependent lists — components, signals, and models —
//! over one parsed IBIS file, plus a read-only model-type display and a
//! Typ/Min/Max corner choice. Every handler ported here changes dialog-local
//! state only; generating the SPICE output belongs to the modal caller.

pub const TITLE: &str = "IBIS import";
pub const FORM_RESOURCE: &str = "IbisImport";

/// The recovered signal names the accept path refuses.
pub const REJECTED_SIGNAL_NAMES: [&str; 3] = ["POWER", "GND", "NC"];

/// One model record of a parsed IBIS file.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IbisModel {
    pub name: String,
    /// The type string the read-only display shows.
    pub model_type: String,
}

/// One model selector, which offers several models under a single reference.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IbisModelSelector {
    pub name: String,
    /// Each entry names a model, then a description, separated by the recovered
    /// separator.
    pub entries: Vec<String>,
}

/// One signal of a parsed IBIS component.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IbisSignal {
    pub name: String,
    /// The model or model-selector name this signal refers to.
    pub model_reference: String,
}

/// One component of a parsed IBIS file.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IbisComponent {
    pub name: String,
    pub signals: Vec<IbisSignal>,
}

/// The parsed IBIS file the dialog reads.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IbisFile {
    pub components: Vec<IbisComponent>,
    pub models: Vec<IbisModel>,
    pub selectors: Vec<IbisModelSelector>,
}

impl IbisFile {
    /// Finds one component by name.
    #[must_use]
    pub fn component(&self, name: &str) -> Option<&IbisComponent> {
        self.components
            .iter()
            .find(|component| component.name == name)
    }

    /// Finds one signal of one component by name.
    #[must_use]
    pub fn signal(&self, component: &str, signal: &str) -> Option<&IbisSignal> {
        self.component(component)?
            .signals
            .iter()
            .find(|candidate| candidate.name == signal)
    }

    /// Finds one model by name.
    #[must_use]
    pub fn model(&self, name: &str) -> Option<&IbisModel> {
        self.models.iter().find(|model| model.name == name)
    }

    /// Finds one model selector by name.
    #[must_use]
    pub fn selector(&self, name: &str) -> Option<&IbisModelSelector> {
        self.selectors.iter().find(|selector| selector.name == name)
    }
}

/// The two single-character separators the recovered dialog uses inside model
/// selector entries and in the list line it displays.
///
/// Neither separator was recovered as a literal, so the caller supplies both.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IbisSeparators {
    /// Splits one selector entry into its model name and the rest.
    pub entry: char,
    /// Joins the staged model name and the rest into the displayed line.
    pub display: char,
}

/// Splits one model-selector entry at the recovered separator.
///
/// A missing separator yields the whole entry as the model name and nothing
/// after it, matching the recovered copy lengths for a zero position.
#[must_use]
pub fn split_selector_entry(entry: &str, separator: char) -> (String, String) {
    entry.find(separator).map_or_else(
        || (entry.to_owned(), String::new()),
        |index| {
            (
                entry[..index].to_owned(),
                entry[index + separator.len_utf8()..].to_owned(),
            )
        },
    )
}

/// The recovered IBIS import dialog state.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct IbisImportDialog {
    close_veto: bool,
    corner_index: i32,
    components: Vec<String>,
    component_row: usize,
    signals: Vec<String>,
    signal_row: usize,
    models: Vec<String>,
    model_row: usize,
    model_type: String,
    staged_model: String,
}

impl IbisImportDialog {
    #[must_use]
    pub fn components(&self) -> &[String] {
        &self.components
    }

    #[must_use]
    pub fn signals(&self) -> &[String] {
        &self.signals
    }

    #[must_use]
    pub fn models(&self) -> &[String] {
        &self.models
    }

    #[must_use]
    pub fn model_type(&self) -> &str {
        &self.model_type
    }

    #[must_use]
    pub fn staged_model(&self) -> &str {
        &self.staged_model
    }

    #[must_use]
    pub const fn corner_index(&self) -> i32 {
        self.corner_index
    }

    #[must_use]
    pub const fn close_veto(&self) -> bool {
        self.close_veto
    }

    /// Raises the close veto, which the accept path does after a failed check.
    pub const fn raise_close_veto(&mut self) {
        self.close_veto = true;
    }

    pub const fn select_component_row(&mut self, row: usize) {
        self.component_row = row;
    }

    pub const fn select_signal_row(&mut self, row: usize) {
        self.signal_row = row;
    }

    pub const fn select_model_row(&mut self, row: usize) {
        self.model_row = row;
    }

    fn current_component(&self) -> String {
        self.components
            .get(self.component_row)
            .cloned()
            .unwrap_or_default()
    }

    fn current_signal(&self) -> String {
        self.signals
            .get(self.signal_row)
            .cloned()
            .unwrap_or_default()
    }

    /// Implements Ghidra function `FUN_01bc0a50` at `0x01BC0A50`.
    ///
    /// Clears the close veto and the Typ/Min/Max corner choice when the form is
    /// created. The recovered handler touches no list and reads no parsed file,
    /// because the show handler builds the lists afterwards.
    pub const fn create(&mut self) {
        self.close_veto = false;
        self.corner_index = 0;
    }

    /// Implements Ghidra function `FUN_01bc0a70` at `0x01BC0A70`.
    ///
    /// The recovered destroy handler is a single return: the parsed file belongs
    /// to the modal caller, which destroys both the form and the parser, so the
    /// dialog releases nothing of its own.
    pub const fn destroy(&self) {}

    /// Implements Ghidra function `FUN_01bc0a30` at `0x01BC0A30`.
    ///
    /// Allows the close only while the validation veto is clear, then clears it.
    /// A rejected accept therefore keeps the modal form open for exactly one
    /// correction cycle, while a valid accept can return its built-in modal
    /// result.
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.close_veto;
        self.close_veto = false;
        can_close
    }

    /// Implements Ghidra function `FUN_01bc13e0` at `0x01BC13E0`.
    ///
    /// Copies a resolved model's type string into the read-only display. The
    /// recovered handler formats nothing and validates nothing.
    pub fn show_model_type(&mut self, model: &IbisModel) {
        model.model_type.clone_into(&mut self.model_type);
    }

    /// Implements Ghidra function `FUN_01bc0bd0` at `0x01BC0BD0`.
    ///
    /// Rebuilds the component list from the parsed file, selects its first row,
    /// and rebuilds the signal list from that row.
    ///
    /// The list is cleared first, so a file without components leaves it empty;
    /// the recovered handler still reads row zero afterwards, which yields no
    /// component name and cascades into an empty signal list rather than an
    /// error.
    pub fn rebuild_components(&mut self, file: &IbisFile, separators: IbisSeparators) {
        self.components = file
            .components
            .iter()
            .map(|component| component.name.clone())
            .collect();
        self.component_row = 0;
        let component = self.current_component();
        self.rebuild_signals(&component, file, separators);
    }

    /// Implements Ghidra function `FUN_01bc0a80` at `0x01BC0A80`.
    ///
    /// Shows the dialog by running the component-list rebuild, so the lists are
    /// always built from the parsed file each time the form is shown.
    pub fn show(&mut self, file: &IbisFile, separators: IbisSeparators) {
        self.rebuild_components(file, separators);
    }

    /// Implements Ghidra function `FUN_01bc0a90` at `0x01BC0A90`.
    ///
    /// Rebuilds the signal list for one component, selects its first row, and
    /// refreshes the model list from that signal.
    ///
    /// The list is cleared first, so a name that matches no component leaves it
    /// empty and the model refresh then finds nothing.
    pub fn rebuild_signals(
        &mut self,
        component: &str,
        file: &IbisFile,
        separators: IbisSeparators,
    ) {
        self.signals = file
            .component(component)
            .map(|component| {
                component
                    .signals
                    .iter()
                    .map(|signal| signal.name.clone())
                    .collect()
            })
            .unwrap_or_default();
        self.signal_row = 0;
        self.refresh_models(file, separators);
    }

    /// Implements Ghidra function `FUN_01bc0d00` at `0x01BC0D00`.
    ///
    /// Reads the selected component row and delegates to the signal rebuild. The
    /// recovered handler inspects no sender, guards no invalid index, imports
    /// nothing, and writes no persistent state.
    pub fn component_clicked(&mut self, file: &IbisFile, separators: IbisSeparators) {
        let component = self.current_component();
        self.rebuild_signals(&component, file, separators);
    }

    /// Implements Ghidra function `FUN_01bc0d90` at `0x01BC0D90`.
    ///
    /// Clears the model-type display and the model list, resolves the selected
    /// signal's model reference, and fills the list from it.
    ///
    /// A reference that names a model contributes that one model and shows its
    /// type immediately. A reference that names a model selector contributes one
    /// line per selector entry, each built from the entry's model name and the
    /// text after the separator; the first line is then selected and its model
    /// resolved so the type display matches. A reference that names neither
    /// leaves both the list and the type display empty.
    pub fn refresh_models(&mut self, file: &IbisFile, separators: IbisSeparators) {
        self.model_type.clear();
        self.models.clear();
        self.model_row = 0;

        let component = self.current_component();
        let signal = self.current_signal();
        self.staged_model = file
            .signal(&component, &signal)
            .map(|signal| signal.model_reference.clone())
            .unwrap_or_default();

        if let Some(model) = file.model(&self.staged_model) {
            let model = model.clone();
            self.models.push(model.name.clone());
            self.show_model_type(&model);
            self.model_row = 0;
            return;
        }

        let Some(selector) = file.selector(&self.staged_model).cloned() else {
            return;
        };

        for entry in &selector.entries {
            let (name, rest) = split_selector_entry(entry, separators.entry);
            self.models
                .push(format!("{name}{}{rest}", separators.display));
        }
        self.model_row = 0;
        self.resolve_selected_model(&selector, file, separators);
    }

    fn resolve_selected_model(
        &mut self,
        selector: &IbisModelSelector,
        file: &IbisFile,
        separators: IbisSeparators,
    ) {
        let Some(entry) = selector.entries.get(self.model_row) else {
            return;
        };
        let (name, _) = split_selector_entry(entry, separators.entry);
        self.staged_model = name;
        if let Some(model) = file.model(&self.staged_model).cloned() {
            self.show_model_type(&model);
        }
    }

    /// Implements Ghidra function `FUN_01bc11a0` at `0x01BC11A0`.
    ///
    /// Re-resolves the staged model after the model list selection moves.
    ///
    /// The handler re-reads the component and signal rows and the signal's model
    /// reference, and only a reference naming a model selector reaches the
    /// selected entry. It reads the entry from the selector itself rather than
    /// from the displayed line, so the displayed separator never affects the
    /// resolved model name. It rebuilds no list and imports nothing.
    pub fn model_selection_changed(&mut self, file: &IbisFile, separators: IbisSeparators) {
        let component = self.current_component();
        let signal = self.current_signal();
        self.staged_model = file
            .signal(&component, &signal)
            .map(|signal| signal.model_reference.clone())
            .unwrap_or_default();

        let Some(selector) = file.selector(&self.staged_model).cloned() else {
            return;
        };
        self.resolve_selected_model(&selector, file, separators);
    }

    /// Implements Ghidra functions `FUN_01bc1420` at `0x01BC1420` and
    /// `FUN_01bc1400` at `0x01BC1400`.
    ///
    /// Both the model list's click and its key-down delegate straight to the
    /// model-selection update, so choosing a model with the mouse and moving
    /// through the list with the keyboard behave identically. Neither inspects
    /// the sender, rebuilds the component or signal list, imports a model,
    /// closes the dialog, or guards an invalid list index.
    pub fn model_row_activated(&mut self, file: &IbisFile, separators: IbisSeparators) {
        self.model_selection_changed(file, separators);
    }

    /// Implements Ghidra functions `FUN_01bc1430` at `0x01BC1430` and
    /// `FUN_01bc1440` at `0x01BC1440`.
    ///
    /// Both the signal list's click and its key-down delegate straight to the
    /// shared model refresh, so mouse and keyboard selection behave identically.
    /// The refresh changes dialog-local model choices and staging only: it
    /// generates no import, closes no dialog, and persists nothing.
    pub fn signal_row_activated(&mut self, file: &IbisFile, separators: IbisSeparators) {
        self.refresh_models(file, separators);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    const SEPARATORS: IbisSeparators = IbisSeparators {
        entry: '|',
        display: ' ',
    };

    fn signal(name: &str, reference: &str) -> IbisSignal {
        IbisSignal {
            name: name.to_owned(),
            model_reference: reference.to_owned(),
        }
    }

    fn file() -> IbisFile {
        IbisFile {
            components: vec![
                IbisComponent {
                    name: "U1".to_owned(),
                    signals: vec![signal("A0", "DRV"), signal("A1", "SEL")],
                },
                IbisComponent {
                    name: "U2".to_owned(),
                    signals: vec![signal("B0", "MISSING")],
                },
            ],
            models: vec![
                IbisModel {
                    name: "DRV".to_owned(),
                    model_type: "Output".to_owned(),
                },
                IbisModel {
                    name: "FAST".to_owned(),
                    model_type: "3-state".to_owned(),
                },
                IbisModel {
                    name: "SLOW".to_owned(),
                    model_type: "Input".to_owned(),
                },
            ],
            selectors: vec![IbisModelSelector {
                name: "SEL".to_owned(),
                entries: vec!["FAST|quick edge".to_owned(), "SLOW|slow edge".to_owned()],
            }],
        }
    }

    fn shown() -> IbisImportDialog {
        let mut dialog = IbisImportDialog::default();
        dialog.create();
        dialog.show(&file(), SEPARATORS);
        dialog
    }

    #[test]
    fn create_clears_the_veto_and_the_corner_choice() {
        let mut dialog = IbisImportDialog {
            close_veto: true,
            corner_index: 2,
            ..IbisImportDialog::default()
        };

        dialog.create();

        assert!(!dialog.close_veto());
        assert_eq!(dialog.corner_index(), 0);
    }

    #[test]
    fn the_close_query_consumes_one_raised_veto() {
        let mut dialog = IbisImportDialog::default();
        dialog.raise_close_veto();

        assert!(!dialog.query_close());
        assert!(dialog.query_close());
        assert!(dialog.query_close());
    }

    #[test]
    fn showing_the_dialog_builds_all_three_lists_from_the_first_rows() {
        let dialog = shown();

        assert_eq!(dialog.components(), ["U1".to_owned(), "U2".to_owned()]);
        assert_eq!(dialog.signals(), ["A0".to_owned(), "A1".to_owned()]);
        assert_eq!(dialog.models(), ["DRV".to_owned()]);
        assert_eq!(dialog.model_type(), "Output");
        assert_eq!(dialog.staged_model(), "DRV");
    }

    #[test]
    fn a_selector_reference_lists_one_line_per_entry_and_resolves_the_first() {
        let mut dialog = shown();
        dialog.select_signal_row(1);

        dialog.signal_row_activated(&file(), SEPARATORS);

        assert_eq!(
            dialog.models(),
            ["FAST quick edge".to_owned(), "SLOW slow edge".to_owned()]
        );
        assert_eq!(dialog.staged_model(), "FAST");
        assert_eq!(dialog.model_type(), "3-state");
    }

    #[test]
    fn moving_the_model_row_resolves_from_the_selector_not_the_displayed_line() {
        let mut dialog = shown();
        dialog.select_signal_row(1);
        dialog.signal_row_activated(&file(), SEPARATORS);

        dialog.select_model_row(1);
        dialog.model_row_activated(&file(), SEPARATORS);

        assert_eq!(dialog.staged_model(), "SLOW");
        assert_eq!(dialog.model_type(), "Input");
        assert_eq!(dialog.models().len(), 2);
    }

    #[test]
    fn a_reference_that_names_neither_a_model_nor_a_selector_clears_both() {
        let mut dialog = shown();
        dialog.select_component_row(1);

        dialog.component_clicked(&file(), SEPARATORS);

        assert_eq!(dialog.signals(), ["B0".to_owned()]);
        assert!(dialog.models().is_empty());
        assert_eq!(dialog.model_type(), "");
        assert_eq!(dialog.staged_model(), "MISSING");
    }

    #[test]
    fn a_file_without_components_leaves_every_list_empty() {
        let mut dialog = IbisImportDialog::default();

        dialog.show(&IbisFile::default(), SEPARATORS);

        assert!(dialog.components().is_empty());
        assert!(dialog.signals().is_empty());
        assert!(dialog.models().is_empty());
        assert_eq!(dialog.model_type(), "");
    }

    #[test]
    fn an_entry_without_the_separator_is_taken_whole_as_the_model_name() {
        assert_eq!(
            split_selector_entry("FAST|quick", '|'),
            ("FAST".to_owned(), "quick".to_owned())
        );
        assert_eq!(
            split_selector_entry("FAST", '|'),
            ("FAST".to_owned(), String::new())
        );
        assert_eq!(
            split_selector_entry("|tail", '|'),
            (String::new(), "tail".to_owned())
        );
    }

    #[test]
    fn destroy_releases_nothing_of_its_own() {
        let dialog = shown();

        dialog.destroy();

        assert_eq!(dialog.components().len(), 2);
    }
}
