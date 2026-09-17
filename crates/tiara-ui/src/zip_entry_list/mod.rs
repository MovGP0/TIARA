//! Iced state for the recovered archive entry list dialog.

pub const TITLE: &str = "Files";
pub const FORM_RESOURCE: &str = "ZipListDlg";
pub const PROMPT_CAPTION: &str = "Select files to open: ";
pub const ACCEPT_CAPTION: &str = "Open";

/// An opaque handle to one list-view column.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ListColumn(pub u64);

pub trait ZipEntryListHost {
    /// The columns of the entry list, in display order.
    fn columns(&mut self) -> Vec<ListColumn>;

    /// Sorts the list with the comparator bound to one column index.
    fn sort_by_column(&mut self, column_index: usize);
}

/// Implements Ghidra function `FUN_01c1ca10` at `0x01C1CA10`.
///
/// Sorts the archive entry list by the column header the user clicked.
///
/// The recovered handler walks the column collection until it finds the clicked
/// column and then sorts with the shared comparator bound to that index, so
/// every column sorts through one comparator that switches on the index rather
/// than through a per-column function.
///
/// The recovered walk has no bound: a column that is not in the collection
/// would run past its end. This port reports that case instead, because a
/// column the list does not own can only come from a caller mistake and there
/// is no recovered behavior to preserve past that point.
pub fn sort_by_clicked_column(
    clicked: ListColumn,
    host: &mut impl ZipEntryListHost,
) -> Option<usize> {
    let index = host
        .columns()
        .iter()
        .position(|column| *column == clicked)?;
    host.sort_by_column(index);
    Some(index)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Host {
        columns: Vec<ListColumn>,
        sorted: Vec<usize>,
    }

    impl ZipEntryListHost for Host {
        fn columns(&mut self) -> Vec<ListColumn> {
            self.columns.clone()
        }

        fn sort_by_column(&mut self, column_index: usize) {
            self.sorted.push(column_index);
        }
    }

    #[test]
    fn clicking_a_header_sorts_by_that_columns_index() {
        let mut host = Host {
            columns: vec![ListColumn(10), ListColumn(20), ListColumn(30)],
            sorted: Vec::new(),
        };

        assert_eq!(sort_by_clicked_column(ListColumn(30), &mut host), Some(2));
        assert_eq!(sort_by_clicked_column(ListColumn(10), &mut host), Some(0));

        assert_eq!(host.sorted, [2, 0]);
    }

    #[test]
    fn a_column_the_list_does_not_own_sorts_nothing() {
        let mut host = Host {
            columns: vec![ListColumn(10)],
            sorted: Vec::new(),
        };

        assert_eq!(sort_by_clicked_column(ListColumn(99), &mut host), None);

        assert!(host.sorted.is_empty());
    }
}
