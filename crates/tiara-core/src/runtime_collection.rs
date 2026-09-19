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

/// What happened to an element, as the collection reports it.
///
/// Part of Ghidra functions `FUN_00597e50`, `FUN_00599670` and the routines
/// that call them.
///
/// Three codes, not two: an element is added as `1`, taken out to be used as
/// `3`, and thrown away as `5`. Extracting and removing are the same
/// operation to the list and different events to whoever is listening, which
/// is the distinction the two codes are there to carry — a listener releasing
/// what it is told about must not release something the caller has just taken
/// possession of.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RuntimeCollectionChange {
    /// Recovered code 1.
    Added,
    /// Recovered code 3: taken out and handed to the caller.
    Extracted,
    /// Recovered code 5: taken out and let go.
    Removed,
}

impl RuntimeCollectionChange {
    /// The code the recovered collection reports this as.
    #[must_use]
    pub const fn code(self) -> u8 {
        match self {
            Self::Added => 1,
            Self::Extracted => 3,
            Self::Removed => 5,
        }
    }
}

/// Which end of the collection a search starts from.
///
/// Part of Ghidra function `FUN_004df3f0` at `0x004DF3F0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SearchEnd {
    /// Recovered flag zero: from the beginning.
    Start,
    /// Any other value: from the other end.
    Far,
}

/// Ports Ghidra function `FUN_004f6c80` at `0x004F6C80`, in 78 copies, and
/// `FUN_004f6cb0` at `0x004F6CB0`, in 78 more.
///
/// The two reach the same comparer at the same slot with the same arguments
/// and differ only in what they do with the answer: the first reduces it to
/// whether it was nothing, and the second hands it back as it is. Which is
/// which is not in doubt, because only one of them tests it.
///
/// Sameness is not asked about directly. The recovered test reaches through
/// the object at `0x18` to the comparer it holds at `0x38`, asks it to
/// compare, and calls the two values equal when the answer is nothing — so
/// one comparison answers both questions and there is nowhere for the two to
/// disagree. [`Ordering::is_eq`] is the same reduction.
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

/// Ports Ghidra function `FUN_004dd2d0` at `0x004DD2D0` in 127 copies,
/// `FUN_004e2900` at `0x004E2900` in 34 more, and `FUN_004e28c0` at
/// `0x004E28C0` in 30 more again.
///
/// The three keep the method pointer at `0x40`, `0x38` and `0x28`, each with
/// its object eight bytes after it, and are otherwise the same call with the
/// same guard — so the offsets belong to the class that holds the notifier
/// rather than to the notifying.
///
/// The recovered raise is a method pointer kept in two halves — the code at
/// `0x40` and the object it belongs to at `0x48` — called with the collection
/// itself, the item and what happened to it. It is called only when the code
/// half is set, and the test is the whole of the guard: a notifier that was
/// never given is simply not raised, and nothing anywhere records whether one
/// was expected.
///
/// [`Option`] takes the place of the two halves and of the test.
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
    /// There is a third form, Ghidra function `FUN_004dece0` at `0x004DECE0`
    /// in 68 places, for a source that is already a block of elements. It is
    /// the same operation done properly: the tail is moved up once with a
    /// single copy, the whole block is put in place, the count is raised, and
    /// only then is anything announced — one notice per element, with the
    /// collection already whole. The enumerator form below inserts one element
    /// at a time, moving the tail again for each and announcing each as it
    /// goes, so a listener there sees the collection half built. Same answer,
    /// different cost and different order of events.
    ///
    /// Its bound is `index > count` rather than `>=`, which is what allows the
    /// position just past the end and means the end.
    ///
    /// A second copy of this, Ghidra function `FUN_004ded40` at `0x004DED40`
    /// in 68 places, shows what the order costs: it asks the source for an
    /// enumerator and steps it, inserting each value at a position it raises
    /// by one each time, so the values arrive in the collection in the order
    /// they left the source rather than reversed. That copy also releases the
    /// enumerator twice at the end — the first release clears the variable, so
    /// the second finds nothing and does nothing, which is why it is harmless
    /// rather than wrong.
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

    /// Ports Ghidra function `FUN_004de680` at `0x004DE680`, in 68 copies.
    ///
    /// One element by its position. The recovered check is a single unsigned
    /// comparison of the index against the count, which catches both an index
    /// past the end and a negative one — a negative index read as unsigned is
    /// an enormous one, so one test does the work of two and there is no
    /// second branch to get wrong.
    ///
    /// # Errors
    ///
    /// Returns [`RuntimeCollectionError`] for a position the collection does
    /// not have.
    pub fn get(&self, index: usize) -> Result<&T, RuntimeCollectionError> {
        self.values
            .get(index)
            .ok_or_else(|| RuntimeCollectionError::index_out_of_bounds(index, self.values.len()))
    }

    /// Ports Ghidra function `FUN_004df2e0` at `0x004DF2E0`, in 68 copies.
    ///
    /// The first element. Tested against the count being nothing rather than
    /// against a position, because there is only one position it could be.
    ///
    /// # Errors
    ///
    /// Returns [`RuntimeCollectionError`] when there is nothing in the
    /// collection.
    pub fn first(&self) -> Result<&T, RuntimeCollectionError> {
        self.get(0)
    }

    /// Ports Ghidra function `FUN_004df300` at `0x004DF300`, in 68 copies.
    ///
    /// The last element, reached by taking one off the count and then making
    /// the ordinary check — which is the whole trick. An empty collection
    /// gives a position of minus one, and minus one read as unsigned is
    /// larger than any count, so the ordinary check catches the empty case
    /// without anything being written for it.
    ///
    /// # Errors
    ///
    /// Returns [`RuntimeCollectionError`] when there is nothing in the
    /// collection.
    pub fn last(&self) -> Result<&T, RuntimeCollectionError> {
        let length = self.values.len();
        self.values.last().ok_or_else(|| {
            RuntimeCollectionError::index_out_of_bounds(length.wrapping_sub(1), length)
        })
    }

    /// Ports Ghidra function `FUN_004df260` at `0x004DF260`, in 68 copies.
    ///
    /// Takes one element out and hands it back.
    ///
    /// The element is read before it is removed, so what comes back is the
    /// thing that was there rather than whatever moved into its place. The
    /// removal carries a notification of its own, separate from the ordinary
    /// removal — taking something out to use it is not the same event as
    /// throwing it away.
    ///
    /// # Errors
    ///
    /// Returns [`RuntimeCollectionError`] for a position the collection does
    /// not have.
    pub fn extract(&mut self, index: usize) -> Result<T, RuntimeCollectionError> {
        if index >= self.values.len() {
            return Err(RuntimeCollectionError::index_out_of_bounds(
                index,
                self.values.len(),
            ));
        }
        let taken = self.values.remove(index);
        if let Some(notifier) = &self.notifier {
            notifier.notify(&taken, RuntimeCollectionChange::Extracted);
        }
        Ok(taken)
    }

    /// Ports Ghidra function `FUN_004de6b0` at `0x004DE6B0`, in 65 copies.
    ///
    /// Puts one element at a position, moving the rest along.
    ///
    /// A second copy of this, Ghidra function `FUN_004decc0` at `0x004DECC0`
    /// in 65 places, reaches a different list helper with the position and the
    /// value the other way round — the two helpers take their arguments in
    /// opposite orders, which is the only thing that separates them.
    ///
    /// The recovered routine does no checking of its own: it passes the
    /// position straight to the list, which checks. Inserting at the count
    /// itself is allowed and means the end, so the position may be one past
    /// anything that exists — which is why the check here cannot be the same
    /// one [`RuntimeCollection::get`] makes.
    ///
    /// # Errors
    ///
    /// Returns [`RuntimeCollectionError`] for a position beyond the end.
    pub fn insert(&mut self, index: usize, value: T) -> Result<(), RuntimeCollectionError> {
        if index > self.values.len() {
            return Err(RuntimeCollectionError::index_out_of_bounds(
                index,
                self.values.len(),
            ));
        }
        self.values.insert(index, value);
        if let Some(notifier) = &self.notifier {
            notifier.notify(&self.values[index], RuntimeCollectionChange::Added);
        }
        Ok(())
    }

    /// Ports Ghidra function `FUN_004df3c0` at `0x004DF3C0`, in 65 copies.
    ///
    /// Where one value sits, by the collection's own idea of sameness.
    ///
    /// The comparer decides, not the value's own equality, so a collection
    /// that has been given a comparer finds what that comparer calls the same
    /// thing rather than what the type does.
    ///
    /// Also part of Ghidra function `FUN_004df390` at `0x004DF390`, which
    /// reduces this answer to a yes or no.
    #[must_use]
    pub fn index_of(&self, value: &T) -> Option<usize> {
        self.values
            .iter()
            .position(|held| self.compare(held, value) == Ordering::Equal)
    }

    /// Ports Ghidra function `FUN_004de250` at `0x004DE250`, in 131 copies.
    ///
    /// Gives back whatever room the collection is not using.
    ///
    /// The array's own length is set to the element count exactly, so there is
    /// no slack left at all — and the next element added has to grow it again,
    /// by one. Doing this between additions is what turns filling a list into
    /// one reallocation per element.
    pub fn trim_to_count(&mut self) {
        self.values.shrink_to_fit();
    }

    /// Ports Ghidra function `FUN_004de630` at `0x004DE630` in 68 copies, and
    /// `FUN_004f7440` at `0x004F7440` in 28 more.
    ///
    /// Says how much room the collection is to have.
    ///
    /// The two reach different count-setters and are otherwise identical, which
    /// puts the difference in how the discarded tail is cleared rather than in
    /// anything the caller sees.
    ///
    /// Asking for less room than there are elements does not fail and does not
    /// refuse: the count is lowered first and the elements past the new end are
    /// let go. So this is a way of shortening a collection as well as a way of
    /// sizing one, and a caller that meant only to save memory loses data by
    /// it.
    pub fn set_capacity(&mut self, capacity: usize) {
        if capacity < self.values.len() {
            self.values.truncate(capacity);
        }
        self.values
            .reserve_exact(capacity.saturating_sub(self.values.len()));
    }

    /// Ports Ghidra function `FUN_004df220` at `0x004DF220`, in 65 copies.
    ///
    /// Takes one element out by value and hands it back.
    ///
    /// The value is looked up, and what comes back is the element that was
    /// found rather than the one that was asked for — which matters whenever
    /// the comparer calls things the same that are not identical. Nothing
    /// found means nothing taken and nothing answered.
    ///
    /// The removal carries the extract code rather than the remove code, so a
    /// listener knows the element has gone to the caller rather than away.
    pub fn extract_value(&mut self, value: &T) -> Option<T> {
        self.extract_value_from(value, SearchEnd::Start)
    }

    /// Ports Ghidra function `FUN_004df1d0` at `0x004DF1D0`, in 65 copies.
    ///
    /// The same, from whichever end the caller asks.
    pub fn extract_value_from(&mut self, value: &T, end: SearchEnd) -> Option<T> {
        let at = self.index_from(value, end)?;
        let taken = self.values.remove(at);
        if let Some(notifier) = &self.notifier {
            notifier.notify(&taken, RuntimeCollectionChange::Extracted);
        }
        Some(taken)
    }

    /// Ports Ghidra function `FUN_004dec10` at `0x004DEC10`, in 65 copies.
    ///
    /// Puts one element on the end and answers where it went.
    ///
    /// The list grows by one first if it is full — see
    /// [`crate::delphi_runtime::grow_for_append`] — then stores, raises the
    /// count, and tells whoever is listening. The position is answered after
    /// the element is in place, so it is where the element is rather than
    /// where it was going to go.
    pub fn add(&mut self, value: T) -> usize {
        self.values.push(value);
        let at = self.values.len() - 1;
        if let Some(notifier) = &self.notifier {
            notifier.notify(&self.values[at], RuntimeCollectionChange::Added);
        }
        at
    }

    /// Ports Ghidra function `FUN_004df120` at `0x004DF120`, in 65 copies.
    ///
    /// Takes one element out by value, and answers where it had been.
    ///
    /// Built out of the search and the delete rather than beside them: the
    /// value is looked up, and deleted only if the lookup found it. So
    /// removing something that is not there is not an error and changes
    /// nothing, and the answer is the position that no longer holds it.
    pub fn remove(&mut self, value: &T) -> Option<usize> {
        self.remove_from(value, SearchEnd::Start)
    }

    /// Ports Ghidra function `FUN_004df150` at `0x004DF150` in 65 copies, and
    /// `FUN_004f8020` at `0x004F8020` in 28 more.
    ///
    /// The same, from whichever end the caller asks.
    ///
    /// The second is the other arrangement's removal, paired from its own two
    /// searches — so every lookup in this family comes in twos, and every
    /// operation built on a lookup comes in twos with it.
    ///
    /// It differs from [`RuntimeCollection::remove`] only in which search it
    /// is built on, which matters for a collection holding the same thing
    /// twice: one takes the first and the other the last.
    pub fn remove_from(&mut self, value: &T, end: SearchEnd) -> Option<usize> {
        let at = self.index_from(value, end)?;
        let taken = self.values.remove(at);
        if let Some(notifier) = &self.notifier {
            notifier.notify(&taken, RuntimeCollectionChange::Removed);
        }
        Some(at)
    }

    /// Ports Ghidra function `FUN_004df430` at `0x004DF430`, in 65 copies.
    ///
    /// Where one value sits, looked for from the far end.
    ///
    /// The recovered code reaches a second list helper, used nowhere except
    /// here and behind the flag in
    /// [`RuntimeCollection::index_from`] — which is what identifies it as the
    /// other direction rather than another kind of search. No name for it
    /// survived; the pairing is the evidence.
    ///
    /// It matters only for a collection holding the same thing twice, where
    /// the two directions answer different positions.
    #[must_use]
    pub fn last_index_of(&self, value: &T) -> Option<usize> {
        self.values
            .iter()
            .rposition(|held| self.compare(held, value) == Ordering::Equal)
    }

    /// Ports Ghidra function `FUN_004df3f0` at `0x004DF3F0` in 65 copies, and
    /// `FUN_004f8500` at `0x004F8500` in 46 more.
    ///
    /// Where one value sits, from whichever end the caller asks.
    ///
    /// The second pairs the other two searches the same way, so both
    /// arrangements of a collection have a two-directional lookup of their own.
    ///
    /// One routine for both directions, choosing between the two list helpers
    /// on a flag — so a caller that does not care which end it searched from
    /// need not know there are two.
    #[must_use]
    pub fn index_from(&self, value: &T, end: SearchEnd) -> Option<usize> {
        match end {
            SearchEnd::Start => self.index_of(value),
            SearchEnd::Far => self.last_index_of(value),
        }
    }

    /// Ports Ghidra function `FUN_004df390` at `0x004DF390`, in 65 copies, and
    /// `FUN_004f84a0` at `0x004F84A0`, in 46 more.
    ///
    /// Whether the collection holds one value.
    ///
    /// Asked as a position and answered as a yes or no: the recovered routine
    /// looks the value up and reports whether the answer was not negative. A
    /// collection that can say whether something is there can therefore always
    /// say where, and the two answers cannot disagree — which is the same
    /// reason the equality test at `0x004F6C80` is built on a comparison.
    ///
    /// The second copy is built on a different search — a third list helper
    /// again — and reduces its answer the same way. Two searches, one
    /// question: whichever way a collection is arranged, asking whether
    /// something is in it costs exactly what finding it costs.
    #[must_use]
    pub fn contains(&self, value: &T) -> bool {
        self.index_of(value).is_some()
    }

    #[must_use]
    pub fn values(&self) -> &[T] {
        &self.values
    }

    /// Ports Ghidra function `FUN_004e37b0` at `0x004E37B0`, in 86 copies.
    ///
    /// One read, through the list at `8` to the count it keeps at `0x10`.
    /// The collection does not count its own elements — the list does, and the
    /// collection asks — so the two can never disagree.
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
    ///
    /// The shape is confirmed by a second constructor, Ghidra function
    /// `FUN_004e3910` at `0x004E3910`, in 90 copies: it takes the collection
    /// into the field at `8` and sets the index at `0x10` to minus one. That
    /// is why the step forward raises the index before it tests it — the
    /// first step lands on element zero — and why an enumerator that has not
    /// been stepped points at nothing rather than at the first element.
    #[must_use]
    pub fn new(collection: &'a RuntimeCollection<T>) -> Self {
        Self {
            values: collection.values.iter(),
        }
    }
}

/// Ports Ghidra function `FUN_004de370` at `0x004DE370`.
///
/// The recovered step forward is one line: raise the index at `0x10` and
/// answer whether it is still below the collection's own count at `0x10` of
/// the list at `8`. It answers the question and moves on in the same breath,
/// which is why the element itself has to be fetched separately afterwards.
///
/// [`Iterator::next`] does both at once and hands back the element or
/// nothing, so the separate fetch has nowhere to go wrong. The binary carries
/// this step in 262 places, one for each element type the collection was
/// instantiated with.
///
/// The fetch itself is Ghidra function `FUN_004df620` at `0x004DF620`, in 142
/// places of its own: one read of the list at `8` of the collection at `8`,
/// indexed by the same counter, with no test of any kind. It is safe only
/// while the step before it answered yes, which is what makes the two
/// separate calls a pair that must not come apart — and what [`Iterator`]
/// makes impossible.
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
    fn fun_004de250_leaves_no_room_at_all() {
        let mut collection = RuntimeCollection::from_iterable([4, 8, 15]);
        collection.remove(&15).expect("the last element is there");
        collection.trim_to_count();

        assert_eq!(collection.values(), [4, 8]);
        assert_eq!(collection.len(), 2);
    }

    #[test]
    fn fun_004de630_asking_for_less_room_than_there_are_elements_loses_them() {
        let mut collection = RuntimeCollection::from_iterable([4, 8, 15]);
        collection.set_capacity(1);

        assert_eq!(collection.values(), [4]);
    }

    #[test]
    fn fun_004de630_asking_for_more_room_changes_nothing_that_can_be_seen() {
        let mut collection = RuntimeCollection::from_iterable([4, 8]);
        collection.set_capacity(64);

        assert_eq!(collection.values(), [4, 8]);
    }

    #[test]
    fn fun_004df220_hands_back_the_element_that_was_found() {
        let mut collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.extract_value(&8), Some(8));
        assert_eq!(collection.values(), [4, 15]);
    }

    #[test]
    fn fun_004df220_answers_nothing_for_a_value_that_is_not_there() {
        let mut collection = RuntimeCollection::from_iterable([4]);

        assert_eq!(collection.extract_value(&9), None);
        assert_eq!(collection.values(), [4]);
    }

    #[test]
    fn fun_004df220_hands_back_what_was_found_not_what_was_asked_for() {
        let mut collection = RuntimeCollection::from_iterable([2, 3]);
        // Every even number is the same thing to this comparer.
        collection.set_comparer(Some(RuntimeComparer::new(|left: &i32, right: &i32| {
            (left % 2).cmp(&(right % 2))
        })));

        assert_eq!(collection.extract_value(&8), Some(2));
    }

    #[test]
    fn fun_004df1d0_takes_the_first_or_the_last_as_asked() {
        let mut from_far = RuntimeCollection::from_iterable([4, 8, 4]);

        assert_eq!(from_far.extract_value_from(&4, SearchEnd::Far), Some(4));
        assert_eq!(from_far.values(), [4, 8]);
    }

    #[test]
    fn the_three_change_codes_are_the_recovered_ones() {
        assert_eq!(RuntimeCollectionChange::Added.code(), 1);
        assert_eq!(RuntimeCollectionChange::Extracted.code(), 3);
        assert_eq!(RuntimeCollectionChange::Removed.code(), 5);
    }

    #[test]
    fn fun_004dec10_puts_an_element_on_the_end_and_says_where() {
        let mut collection = RuntimeCollection::from_iterable([4, 8]);

        assert_eq!(collection.add(15), 2);
        assert_eq!(collection.values(), [4, 8, 15]);
    }

    #[test]
    fn fun_004dec10_says_nothing_of_where_it_was_going_only_where_it_is() {
        let mut collection: RuntimeCollection<i32> = RuntimeCollection::new();

        assert_eq!(collection.add(4), 0);
        assert_eq!(collection.add(8), 1);
    }

    #[test]
    fn fun_004df120_takes_an_element_out_by_value() {
        let mut collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.remove(&8), Some(1));
        assert_eq!(collection.values(), [4, 15]);
    }

    #[test]
    fn fun_004df120_removing_what_is_not_there_changes_nothing() {
        let mut collection = RuntimeCollection::from_iterable([4, 8]);

        assert_eq!(collection.remove(&9), None);
        assert_eq!(collection.values(), [4, 8]);
    }

    #[test]
    fn fun_004df150_takes_the_first_or_the_last_as_asked() {
        let mut from_start = RuntimeCollection::from_iterable([4, 8, 4]);
        assert_eq!(from_start.remove_from(&4, SearchEnd::Start), Some(0));
        assert_eq!(from_start.values(), [8, 4]);

        let mut from_far = RuntimeCollection::from_iterable([4, 8, 4]);
        assert_eq!(from_far.remove_from(&4, SearchEnd::Far), Some(2));
        assert_eq!(from_far.values(), [4, 8]);
    }

    #[test]
    fn removing_and_extracting_are_told_apart_to_whoever_is_listening() {
        let seen = Arc::new(Mutex::new(Vec::new()));
        let recorded = Arc::clone(&seen);
        let mut collection = RuntimeCollection::from_iterable([4, 8]);
        collection.set_notifier(Some(RuntimeNotifier::new(move |_: &i32, change| {
            recorded
                .lock()
                .expect("the recorder is not poisoned")
                .push(change);
        })));
        collection.extract(0).expect("the first element is there");
        collection.remove(&8).expect("the other element is there");

        assert_eq!(
            *seen.lock().expect("the recorder is not poisoned"),
            [
                RuntimeCollectionChange::Extracted,
                RuntimeCollectionChange::Removed
            ]
        );
    }

    #[test]
    fn fun_004df430_searches_from_the_far_end() {
        let collection = RuntimeCollection::from_iterable([4, 8, 4]);

        assert_eq!(collection.index_of(&4), Some(0));
        assert_eq!(collection.last_index_of(&4), Some(2));
    }

    #[test]
    fn fun_004df430_agrees_when_there_is_only_one_of_something() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.index_of(&8), collection.last_index_of(&8));
    }

    #[test]
    fn fun_004df430_finds_nothing_that_is_not_there_either() {
        let collection = RuntimeCollection::from_iterable([4, 8]);

        assert_eq!(collection.last_index_of(&9), None);
    }

    #[test]
    fn fun_004df3f0_serves_both_directions_from_one_routine() {
        let collection = RuntimeCollection::from_iterable([4, 8, 4]);

        assert_eq!(collection.index_from(&4, SearchEnd::Start), Some(0));
        assert_eq!(collection.index_from(&4, SearchEnd::Far), Some(2));
    }

    #[test]
    fn fun_004df390_answers_whether_a_value_is_there() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert!(collection.contains(&8));
        assert!(!collection.contains(&9));
    }

    #[test]
    fn fun_004df390_cannot_disagree_with_where_it_says_the_value_is() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.contains(&15), collection.index_of(&15).is_some());
        assert_eq!(collection.index_of(&15), Some(2));
        assert_eq!(collection.index_of(&9), None);
    }

    #[test]
    fn fun_004df390_uses_the_comparer_rather_than_the_types_own_equality() {
        let mut collection = RuntimeCollection::from_iterable([4, 8, 15]);
        // A comparer that calls every even number the same thing.
        collection.set_comparer(Some(RuntimeComparer::new(|left: &i32, right: &i32| {
            (left % 2).cmp(&(right % 2))
        })));

        assert!(collection.contains(&2));
        assert_eq!(collection.index_of(&2), Some(0));
    }

    #[test]
    fn fun_004df390_finds_nothing_in_an_empty_collection() {
        let collection: RuntimeCollection<i32> = RuntimeCollection::new();

        assert!(!collection.contains(&4));
    }

    #[test]
    fn fun_004de680_reads_one_element_by_position() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.get(0), Ok(&4));
        assert_eq!(collection.get(2), Ok(&15));
    }

    #[test]
    fn fun_004de680_refuses_a_position_the_collection_does_not_have() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);
        let refused = collection.get(3).expect_err("three is past the end");

        assert_eq!(refused.index(), 3);
    }

    #[test]
    fn fun_004de680_catches_a_negative_index_by_the_same_test() {
        // A negative index read as unsigned is an enormous one, which is what
        // makes one comparison enough.
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);
        let huge = usize::MAX;

        assert!(collection.get(huge).is_err());
    }

    #[test]
    fn fun_004df2e0_and_fun_004df300_read_the_ends() {
        let collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.first(), Ok(&4));
        assert_eq!(collection.last(), Ok(&15));
    }

    #[test]
    fn fun_004df300_catches_an_empty_collection_without_a_test_of_its_own() {
        let collection: RuntimeCollection<u8> = RuntimeCollection::new();

        assert!(collection.last().is_err());
        assert!(collection.first().is_err());
    }

    #[test]
    fn fun_004df300_reports_the_position_it_worked_out() {
        let collection: RuntimeCollection<u8> = RuntimeCollection::new();
        let refused = collection.last().expect_err("nothing is there");

        // One off a count of nothing, which is what the unsigned check saw.
        assert_eq!(refused.index(), usize::MAX);
    }

    #[test]
    fn fun_004df260_hands_back_the_element_that_was_there() {
        let mut collection = RuntimeCollection::from_iterable([4, 8, 15]);

        assert_eq!(collection.extract(1), Ok(8));
        assert_eq!(collection.values(), [4, 15]);
    }

    #[test]
    fn fun_004df260_refuses_a_position_that_is_not_there() {
        let mut collection = RuntimeCollection::from_iterable([4]);

        assert!(collection.extract(1).is_err());
        assert_eq!(collection.values(), [4]);
    }

    #[test]
    fn fun_004df260_tells_whoever_is_listening() {
        let seen = Arc::new(Mutex::new(Vec::new()));
        let recorded = Arc::clone(&seen);
        let mut collection = RuntimeCollection::from_iterable([4, 8]);
        collection.set_notifier(Some(RuntimeNotifier::new(move |value: &i32, change| {
            recorded
                .lock()
                .expect("the recorder is not poisoned")
                .push((*value, change));
        })));
        collection.extract(0).expect("the first element is there");

        assert_eq!(
            *seen.lock().expect("the recorder is not poisoned"),
            [(4, RuntimeCollectionChange::Extracted)]
        );
    }

    #[test]
    fn fun_004de6b0_puts_an_element_at_a_position() {
        let mut collection = RuntimeCollection::from_iterable([4, 15]);
        collection.insert(1, 8).expect("one is within the list");

        assert_eq!(collection.values(), [4, 8, 15]);
    }

    #[test]
    fn fun_004de6b0_allows_the_position_just_past_the_end() {
        // Which is what inserting at the end means, and why this check
        // cannot be the one a read makes.
        let mut collection = RuntimeCollection::from_iterable([4]);
        collection.insert(1, 8).expect("the end is a position");

        assert_eq!(collection.values(), [4, 8]);
        assert!(collection.insert(3, 15).is_err());
    }

    #[test]
    fn fun_004de6b0_tells_whoever_is_listening() {
        let seen = Arc::new(Mutex::new(Vec::new()));
        let recorded = Arc::clone(&seen);
        let mut collection: RuntimeCollection<i32> = RuntimeCollection::new();
        collection.set_notifier(Some(RuntimeNotifier::new(move |value: &i32, change| {
            recorded
                .lock()
                .expect("the recorder is not poisoned")
                .push((*value, change));
        })));
        collection.insert(0, 4).expect("nothing is in the way");

        assert_eq!(
            *seen.lock().expect("the recorder is not poisoned"),
            [(4, RuntimeCollectionChange::Added)]
        );
    }

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
