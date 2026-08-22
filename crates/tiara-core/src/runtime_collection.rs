//! Typed adapter for the recovered Delphi generic-list runtime family.
//!
//! Library evaluation: [`Vec`] supplies owned contiguous storage, ordered
//! insertion, iteration, and automatic element destruction. [`Arc`] supplies
//! the recovered shared comparer ownership. No external collection crate is
//! required.

use std::cmp::Ordering;
use std::error::Error;
use std::fmt;
use std::iter::FusedIterator;
use std::slice;
use std::sync::Arc;

type CompareFunction<T> = dyn Fn(&T, &T) -> Ordering + Send + Sync;
type NotifyFunction<T> = dyn Fn(&T, RuntimeCollectionChange) + Send + Sync;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeCollectionChange {
    Added,
    Removed,
}

pub struct RuntimeComparer<T> {
    compare: Arc<CompareFunction<T>>,
}

impl<T> RuntimeComparer<T> {
    #[must_use]
    pub fn new(compare: impl Fn(&T, &T) -> Ordering + Send + Sync + 'static) -> Self {
        Self {
            compare: Arc::new(compare),
        }
    }

    #[must_use]
    pub fn compare(&self, left: &T, right: &T) -> Ordering {
        (self.compare)(left, right)
    }
}

impl<T> Clone for RuntimeComparer<T> {
    fn clone(&self) -> Self {
        Self {
            compare: Arc::clone(&self.compare),
        }
    }
}

impl<T> fmt::Debug for RuntimeComparer<T> {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("RuntimeComparer(..)")
    }
}

impl<T> Default for RuntimeComparer<T>
where
    T: Ord + 'static,
{
    fn default() -> Self {
        Self::new(Ord::cmp)
    }
}

pub struct RuntimeNotifier<T> {
    notify: Arc<NotifyFunction<T>>,
}

impl<T> RuntimeNotifier<T> {
    #[must_use]
    pub fn new(notify: impl Fn(&T, RuntimeCollectionChange) + Send + Sync + 'static) -> Self {
        Self {
            notify: Arc::new(notify),
        }
    }

    fn notify(&self, value: &T, change: RuntimeCollectionChange) {
        (self.notify)(value, change);
    }
}

impl<T> Clone for RuntimeNotifier<T> {
    fn clone(&self) -> Self {
        Self {
            notify: Arc::clone(&self.notify),
        }
    }
}

impl<T> fmt::Debug for RuntimeNotifier<T> {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("RuntimeNotifier(..)")
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RuntimeCollectionError {
    index: usize,
    length: usize,
}

impl RuntimeCollectionError {
    /// Ports Ghidra function `FUN_004ffb70` at `0x004FFB70`.
    ///
    /// The recovered routine formats and raises a collection exception. Rust
    /// returns the same failing index as structured data and leaves message
    /// localization to the caller.
    #[must_use]
    pub const fn index_out_of_bounds(index: usize, length: usize) -> Self {
        Self { index, length }
    }

    #[must_use]
    pub const fn index(self) -> usize {
        self.index
    }

    #[must_use]
    pub const fn length(self) -> usize {
        self.length
    }
}

impl fmt::Display for RuntimeCollectionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "collection index {} exceeds length {}",
            self.index, self.length
        )
    }
}

impl Error for RuntimeCollectionError {}

/// Owns one recovered generic-list specialization.
///
/// Rust's automatic [`Vec`] and [`Arc`] destruction ports Ghidra function
/// `FUN_004ffac0` at `0x004FFAC0`. It replaces the recovered explicit capacity
/// reset, dynamic-array finalization, comparer release, and base destructor.
#[derive(Debug, Clone)]
pub struct RuntimeCollection<T> {
    values: Vec<T>,
    comparer: RuntimeComparer<T>,
    notifier: Option<RuntimeNotifier<T>>,
}

impl<T> RuntimeCollection<T> {
    /// Ports Ghidra function `FUN_004ff7a0` at `0x004FF7A0`.
    ///
    /// A missing comparer selects the type's standard total order. [`Arc`]
    /// replaces the recovered reference-counted comparer interface.
    pub fn set_comparer(&mut self, comparer: Option<RuntimeComparer<T>>)
    where
        T: Ord + 'static,
    {
        self.comparer = comparer.unwrap_or_default();
    }

    /// Installs the composed equivalent of the recovered virtual and event
    /// notification bridge configured by `FUN_004ff710` and `FUN_004ff760`.
    pub fn set_notifier(&mut self, notifier: Option<RuntimeNotifier<T>>) {
        self.notifier = notifier;
    }

    /// Ports Ghidra function `FUN_004ffe40` at `0x004FFE40`.
    ///
    /// Inserts values in enumeration order. The index can equal the current
    /// length. An invalid index returns a typed error before any value is read
    /// from the input iterator or any collection state changes.
    ///
    /// # Errors
    ///
    /// Returns [`RuntimeCollectionError`] when `index` exceeds the current
    /// collection length.
    pub fn insert_range(
        &mut self,
        index: usize,
        values: impl IntoIterator<Item = T>,
    ) -> Result<(), RuntimeCollectionError> {
        if index > self.values.len() {
            return Err(RuntimeCollectionError::index_out_of_bounds(
                index,
                self.values.len(),
            ));
        }

        for (insertion_index, value) in (index..).zip(values) {
            self.values.insert(insertion_index, value);
            if let Some(notifier) = &self.notifier {
                notifier.notify(
                    &self.values[insertion_index],
                    RuntimeCollectionChange::Added,
                );
            }
        }
        Ok(())
    }

    #[must_use]
    pub fn enumerator(&self) -> RuntimeEnumerator<'_, T> {
        self.iter()
    }

    #[must_use]
    pub fn iter(&self) -> RuntimeEnumerator<'_, T> {
        RuntimeEnumerator::new(self)
    }

    #[must_use]
    pub fn values(&self) -> &[T] {
        &self.values
    }

    #[must_use]
    pub fn len(&self) -> usize {
        self.values.len()
    }

    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.values.is_empty()
    }

    #[must_use]
    pub fn compare(&self, left: &T, right: &T) -> Ordering {
        self.comparer.compare(left, right)
    }

    pub fn sort(&mut self) {
        let comparer = &self.comparer;
        self.values
            .sort_by(|left, right| comparer.compare(left, right));
    }
}

impl<T> RuntimeCollection<T>
where
    T: Ord + 'static,
{
    /// Ports Ghidra function `FUN_004ff8a0` at `0x004FF8A0`.
    ///
    /// Creates an empty collection and installs the default comparer.
    #[must_use]
    pub fn new() -> Self {
        Self::with_comparer(None)
    }

    /// Ports Ghidra function `FUN_004ff940` at `0x004FF940`.
    ///
    /// Creates empty storage and installs the supplied comparer, or the type's
    /// default comparer when the supplied interface is absent.
    #[must_use]
    pub fn with_comparer(comparer: Option<RuntimeComparer<T>>) -> Self {
        Self {
            values: Vec::new(),
            comparer: comparer.unwrap_or_default(),
            notifier: None,
        }
    }

    /// Ports Ghidra function `FUN_004ffa10` at `0x004FFA10`.
    ///
    /// Creates the default collection, then appends the complete input in its
    /// enumeration order.
    #[must_use]
    pub fn from_iterable(values: impl IntoIterator<Item = T>) -> Self {
        let mut collection = Self::new();
        collection.values.extend(values);
        collection
    }
}

impl<T> Default for RuntimeCollection<T>
where
    T: Ord + 'static,
{
    fn default() -> Self {
        Self::new()
    }
}

/// Ports Ghidra function `FUN_004ffac0` at `0x004FFAC0`.
impl<T> Drop for RuntimeCollection<T> {
    fn drop(&mut self) {
        if let Some(notifier) = &self.notifier {
            for value in &self.values {
                notifier.notify(value, RuntimeCollectionChange::Removed);
            }
        }
    }
}

impl<T> FromIterator<T> for RuntimeCollection<T>
where
    T: Ord + 'static,
{
    fn from_iter<I: IntoIterator<Item = T>>(iterator: I) -> Self {
        Self::from_iterable(iterator)
    }
}

impl<'a, T> IntoIterator for &'a RuntimeCollection<T> {
    type Item = &'a T;
    type IntoIter = RuntimeEnumerator<'a, T>;

    fn into_iter(self) -> Self::IntoIter {
        self.iter()
    }
}

#[derive(Debug, Clone)]
pub struct RuntimeEnumerator<'a, T> {
    values: slice::Iter<'a, T>,
}

impl<'a, T> RuntimeEnumerator<'a, T> {
    /// Ports Ghidra function `FUN_004ff510` at `0x004FF510`.
    ///
    /// [`slice::Iter`] replaces the recovered list reference and `-1` index
    /// sentinel. Its first `next` call returns element zero, and empty or
    /// exhausted collections return `None` without indexing storage.
    #[must_use]
    pub fn new(collection: &'a RuntimeCollection<T>) -> Self {
        Self {
            values: collection.values.iter(),
        }
    }
}

impl<'a, T> Iterator for RuntimeEnumerator<'a, T> {
    type Item = &'a T;

    fn next(&mut self) -> Option<Self::Item> {
        self.values.next()
    }

    fn size_hint(&self) -> (usize, Option<usize>) {
        self.values.size_hint()
    }
}

impl<T> ExactSizeIterator for RuntimeEnumerator<'_, T> {}
impl<T> FusedIterator for RuntimeEnumerator<'_, T> {}

#[cfg(test)]
mod tests {
    use std::sync::Arc;
    use std::sync::Mutex;
    use std::sync::atomic::{AtomicUsize, Ordering as AtomicOrdering};

    use super::*;

    #[test]
    fn fun_004ff510_enumerates_in_order_and_finishes_safely() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);
        let mut enumerator = RuntimeEnumerator::new(&collection);

        assert_eq!(enumerator.len(), 3);
        assert_eq!(enumerator.next(), Some(&4));
        assert_eq!(enumerator.next(), Some(&8));
        assert_eq!(enumerator.next(), Some(&15));
        assert_eq!(enumerator.next(), None);
        assert_eq!(enumerator.next(), None);
    }

    #[test]
    fn fun_004ff8a0_and_fun_004ff940_select_default_or_custom_comparer() {
        let default = RuntimeCollection::<i32>::new();
        assert_eq!(default.compare(&1, &2), Ordering::Less);

        let descending = RuntimeComparer::new(|left: &i32, right: &i32| right.cmp(left));
        let mut custom = RuntimeCollection::with_comparer(Some(descending));
        custom.insert_range(0, [1, 3, 2]).unwrap();
        custom.sort();

        assert_eq!(custom.values(), [3, 2, 1]);
    }

    #[test]
    fn fun_004ff7a0_replaces_comparer_and_restores_default_for_none() {
        let descending = RuntimeComparer::new(|left: &i32, right: &i32| right.cmp(left));
        let mut collection = RuntimeCollection::from_iterable([1, 3, 2]);

        collection.set_comparer(Some(descending));
        collection.sort();
        assert_eq!(collection.values(), [3, 2, 1]);

        collection.set_comparer(None);
        collection.sort();
        assert_eq!(collection.values(), [1, 2, 3]);
    }

    #[test]
    fn fun_004ffa10_preserves_iterable_order() {
        let collection = RuntimeCollection::from_iterable((1..=4).map(|value| value * 10));

        assert_eq!(collection.values(), [10, 20, 30, 40]);
    }

    #[test]
    fn fun_004ffe40_inserts_at_start_middle_and_end() {
        let mut collection = RuntimeCollection::from_iterable([3, 4]);

        collection.insert_range(0, [1, 2]).unwrap();
        collection.insert_range(2, [8, 9]).unwrap();
        collection.insert_range(collection.len(), [5, 6]).unwrap();

        assert_eq!(collection.values(), [1, 2, 8, 9, 3, 4, 5, 6]);
    }

    #[test]
    fn constructors_and_drop_bridge_add_and_remove_notifications() {
        let events = Arc::new(Mutex::new(Vec::new()));
        {
            let captured_events = Arc::clone(&events);
            let mut collection = RuntimeCollection::<i32>::new();
            collection.set_notifier(Some(RuntimeNotifier::new(move |value, change| {
                captured_events
                    .lock()
                    .expect("notification log lock must remain available")
                    .push((*value, change));
            })));

            collection.insert_range(0, [4, 8]).unwrap();
        }

        assert_eq!(
            *events
                .lock()
                .expect("notification log lock must remain available"),
            [
                (4, RuntimeCollectionChange::Added),
                (8, RuntimeCollectionChange::Added),
                (4, RuntimeCollectionChange::Removed),
                (8, RuntimeCollectionChange::Removed),
            ]
        );
    }

    #[test]
    fn fun_004ffb70_reports_invalid_index_before_consuming_input() {
        let reads = AtomicUsize::new(0);
        let values = (0..3).inspect(|_| {
            reads.fetch_add(1, AtomicOrdering::Relaxed);
        });
        let mut collection = RuntimeCollection::from_iterable([1, 2]);

        let error = collection
            .insert_range(3, values)
            .expect_err("index beyond the collection must fail");

        assert_eq!(error.index(), 3);
        assert_eq!(error.length(), 2);
        assert_eq!(error.to_string(), "collection index 3 exceeds length 2");
        assert_eq!(reads.load(AtomicOrdering::Relaxed), 0);
        assert_eq!(collection.values(), [1, 2]);
    }

    #[test]
    fn fun_004ffac0_uses_raii_to_drop_every_owned_value() {
        #[derive(Debug)]
        struct DropProbe {
            order: usize,
            drops: Arc<AtomicUsize>,
        }

        impl PartialEq for DropProbe {
            fn eq(&self, other: &Self) -> bool {
                self.order == other.order
            }
        }

        impl Eq for DropProbe {}

        impl PartialOrd for DropProbe {
            fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
                Some(self.cmp(other))
            }
        }

        impl Ord for DropProbe {
            fn cmp(&self, other: &Self) -> Ordering {
                self.order.cmp(&other.order)
            }
        }

        impl Drop for DropProbe {
            fn drop(&mut self) {
                self.drops.fetch_add(1, AtomicOrdering::Relaxed);
            }
        }

        let drops = Arc::new(AtomicUsize::new(0));
        {
            let collection = RuntimeCollection::from_iterable([
                DropProbe {
                    order: 1,
                    drops: Arc::clone(&drops),
                },
                DropProbe {
                    order: 2,
                    drops: Arc::clone(&drops),
                },
                DropProbe {
                    order: 3,
                    drops: Arc::clone(&drops),
                },
            ]);
            assert_eq!(collection.len(), 3);
            assert_eq!(drops.load(AtomicOrdering::Relaxed), 0);
        }

        assert_eq!(drops.load(AtomicOrdering::Relaxed), 3);
    }
}
