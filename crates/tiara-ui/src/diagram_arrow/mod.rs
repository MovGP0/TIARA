//! Diagram-arrow model and archive adapters.

pub const FIGURE_COLLECTION_NAME: &str = "Text";
pub const LIBRARY_EVALUATION: &str = "The Rust standard library supplies owned archive records, typed identifiers, and Result-based error propagation. The host archive decoder and diagram registry stay behind traits because their formats and object stores belong to the application shell. No additional serialization crate or live iced window is required.";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramObjectId(pub u16);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramObjectHandle(pub u64);

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct ArrowGeometry {
    pub start_x: f64,
    pub start_y: f64,
    pub end_x: f64,
    pub end_y: f64,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct ArrowRelativePosition {
    pub x: f64,
    pub y: f64,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ArrowText {
    pub content: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ArrowPen {
    pub color: u32,
    pub width: u16,
    pub style: u8,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ArrowStyle {
    pub option: u8,
    pub flags: u32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct ArrowAttachment {
    pub first: f64,
    pub second: f64,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct ArchivedArrow {
    pub id: Option<DiagramObjectId>,
    pub transient: bool,
    pub geometry: ArrowGeometry,
    pub relative_position: ArrowRelativePosition,
    pub text: ArrowText,
    pub pen: ArrowPen,
    pub style: ArrowStyle,
    pub owner_id: Option<DiagramObjectId>,
    pub attached_object_id: Option<DiagramObjectId>,
    pub attachment: ArrowAttachment,
}

pub trait ArrowArchiveReader {
    type Error;

    /// Decodes one versioned arrow record.
    ///
    /// # Errors
    ///
    /// Returns the host archive error when the record is missing or malformed.
    fn read_arrow(&mut self, version: u16) -> Result<ArchivedArrow, Self::Error>;
}

pub trait ArrowArchiveWriter {
    type Error;

    /// Encodes one arrow record. The host adapter writes `0xFFFF` for either
    /// absent object identifier.
    ///
    /// # Errors
    ///
    /// Returns the host archive error when the record cannot be written.
    fn write_arrow(&mut self, arrow: &ArchivedArrow) -> Result<(), Self::Error>;
}

pub trait ArrowArchiveIdProvider {
    fn id_for(&self, handle: DiagramObjectHandle) -> Option<DiagramObjectId>;
}

pub trait ArrowDiagramRegistry {
    fn resolve(&self, id: DiagramObjectId) -> Option<DiagramObjectHandle>;
    fn active_diagram(&self) -> Option<DiagramObjectHandle>;
    fn register_arrow(&mut self, target: DiagramObjectHandle, arrow: DiagramObjectHandle);
    fn add_figure(
        &mut self,
        owner: DiagramObjectHandle,
        collection_name: &str,
        arrow: DiagramObjectHandle,
    );
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ArrowArchiveReadError<E> {
    Archive(E),
    MissingOwner,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ArrowArchiveWriteError<E> {
    Archive(E),
    MissingObjectId(DiagramObjectHandle),
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct DiagramArrow {
    pub id: Option<DiagramObjectId>,
    pub transient: bool,
    pub geometry: ArrowGeometry,
    pub relative_position: ArrowRelativePosition,
    pub text: ArrowText,
    pub pen: ArrowPen,
    pub style: ArrowStyle,
    pub owner: Option<DiagramObjectHandle>,
    pub attached_object: Option<DiagramObjectHandle>,
    pub attachment: ArrowAttachment,
}

impl DiagramArrow {
    /// Implements Ghidra function `FUN_01a61410` at `0x01A61410`.
    ///
    /// The archive adapter decodes the recovered versioned geometry, relative
    /// position, text, pen, style, identifiers, and attachment values. A live
    /// arrow resolves its owner, falls back to the active diagram, registers
    /// with a resolved target, and enters the recovered `Text` figure
    /// collection. A transient arrow ignores both stored references.
    ///
    /// # Errors
    ///
    /// Returns the archive adapter error when decoding fails. Returns
    /// [`ArrowArchiveReadError::MissingOwner`] when a live arrow has neither a
    /// resolvable stored owner nor an active diagram fallback.
    pub fn read_from_archive<R, G>(
        &mut self,
        arrow_handle: DiagramObjectHandle,
        version: u16,
        reader: &mut R,
        registry: &mut G,
    ) -> Result<(), ArrowArchiveReadError<R::Error>>
    where
        R: ArrowArchiveReader,
        G: ArrowDiagramRegistry,
    {
        let archived = reader
            .read_arrow(version)
            .map_err(ArrowArchiveReadError::Archive)?;

        let (owner, attached_object) = if archived.transient {
            (None, None)
        } else {
            let owner = archived
                .owner_id
                .and_then(|id| registry.resolve(id))
                .or_else(|| registry.active_diagram())
                .ok_or(ArrowArchiveReadError::MissingOwner)?;
            let attached_object = archived
                .attached_object_id
                .and_then(|id| registry.resolve(id));

            (Some(owner), attached_object)
        };

        self.id = archived.id;
        self.transient = archived.transient;
        self.geometry = archived.geometry;
        self.relative_position = archived.relative_position;
        self.text = archived.text;
        self.pen = archived.pen;
        self.style = archived.style;
        self.owner = owner;
        self.attached_object = attached_object;
        self.attachment = archived.attachment;

        if let Some(target) = attached_object {
            registry.register_arrow(target, arrow_handle);
        }

        if let Some(owner) = owner {
            registry.add_figure(owner, FIGURE_COLLECTION_NAME, arrow_handle);
        }

        Ok(())
    }

    /// Implements Ghidra function `FUN_01a61fe0` at `0x01A61FE0`.
    ///
    /// The writer preserves the arrow's geometry, relative position, text,
    /// pen, style, stable object identifier, owner and target identifiers, and
    /// attachment values. The host archive adapter encodes an absent owner or
    /// target identifier as the recovered `0xFFFF` sentinel.
    ///
    /// # Errors
    ///
    /// Returns [`ArrowArchiveWriteError::MissingObjectId`] when a live owner or
    /// target has no stable archive identifier. Returns the archive adapter
    /// error when record output fails.
    pub fn write_to_archive<W, I>(
        &self,
        writer: &mut W,
        ids: &I,
    ) -> Result<(), ArrowArchiveWriteError<W::Error>>
    where
        W: ArrowArchiveWriter,
        I: ArrowArchiveIdProvider,
    {
        let owner_id = self
            .owner
            .map(|handle| {
                ids.id_for(handle)
                    .ok_or(ArrowArchiveWriteError::MissingObjectId(handle))
            })
            .transpose()?;
        let attached_object_id = self
            .attached_object
            .map(|handle| {
                ids.id_for(handle)
                    .ok_or(ArrowArchiveWriteError::MissingObjectId(handle))
            })
            .transpose()?;
        let archived = ArchivedArrow {
            id: self.id,
            transient: self.transient,
            geometry: self.geometry,
            relative_position: self.relative_position,
            text: self.text.clone(),
            pen: self.pen,
            style: self.style,
            owner_id,
            attached_object_id,
            attachment: self.attachment,
        };

        writer
            .write_arrow(&archived)
            .map_err(ArrowArchiveWriteError::Archive)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::collections::HashMap;

    #[derive(Debug)]
    struct Reader {
        expected_version: u16,
        archived: Option<ArchivedArrow>,
    }

    impl ArrowArchiveReader for Reader {
        type Error = &'static str;

        fn read_arrow(&mut self, version: u16) -> Result<ArchivedArrow, Self::Error> {
            assert_eq!(version, self.expected_version);
            self.archived.take().ok_or("archive exhausted")
        }
    }

    #[derive(Debug, Default)]
    struct Registry {
        objects: HashMap<DiagramObjectId, DiagramObjectHandle>,
        active_diagram: Option<DiagramObjectHandle>,
        registrations: Vec<(DiagramObjectHandle, DiagramObjectHandle)>,
        figures: Vec<(DiagramObjectHandle, String, DiagramObjectHandle)>,
    }

    #[derive(Debug, Default)]
    struct Writer {
        records: Vec<ArchivedArrow>,
    }

    impl ArrowArchiveWriter for Writer {
        type Error = &'static str;

        fn write_arrow(&mut self, arrow: &ArchivedArrow) -> Result<(), Self::Error> {
            self.records.push(arrow.clone());
            Ok(())
        }
    }

    #[derive(Debug, Default)]
    struct IdProvider {
        ids: HashMap<DiagramObjectHandle, DiagramObjectId>,
    }

    impl ArrowArchiveIdProvider for IdProvider {
        fn id_for(&self, handle: DiagramObjectHandle) -> Option<DiagramObjectId> {
            self.ids.get(&handle).copied()
        }
    }

    impl ArrowDiagramRegistry for Registry {
        fn resolve(&self, id: DiagramObjectId) -> Option<DiagramObjectHandle> {
            self.objects.get(&id).copied()
        }

        fn active_diagram(&self) -> Option<DiagramObjectHandle> {
            self.active_diagram
        }

        fn register_arrow(&mut self, target: DiagramObjectHandle, arrow: DiagramObjectHandle) {
            self.registrations.push((target, arrow));
        }

        fn add_figure(
            &mut self,
            owner: DiagramObjectHandle,
            collection_name: &str,
            arrow: DiagramObjectHandle,
        ) {
            self.figures
                .push((owner, collection_name.to_owned(), arrow));
        }
    }

    fn archived_arrow(transient: bool) -> ArchivedArrow {
        ArchivedArrow {
            id: Some(DiagramObjectId(4)),
            transient,
            geometry: ArrowGeometry {
                start_x: 1.0,
                start_y: 2.0,
                end_x: 3.0,
                end_y: 4.0,
            },
            relative_position: ArrowRelativePosition { x: 0.25, y: 0.75 },
            text: ArrowText {
                content: "load current".to_owned(),
            },
            pen: ArrowPen {
                color: 0x12_34_56,
                width: 2,
                style: 3,
            },
            style: ArrowStyle {
                option: 5,
                flags: 0x80,
            },
            owner_id: Some(DiagramObjectId(10)),
            attached_object_id: Some(DiagramObjectId(20)),
            attachment: ArrowAttachment {
                first: 0.4,
                second: 0.6,
            },
        }
    }

    #[test]
    fn archive_reader_restores_fields_registers_target_and_adds_figure() {
        let archived = archived_arrow(false);
        let expected = archived.clone();
        let mut reader = Reader {
            expected_version: 0x71,
            archived: Some(archived),
        };
        let mut registry = Registry::default();
        registry
            .objects
            .insert(DiagramObjectId(10), DiagramObjectHandle(100));
        registry
            .objects
            .insert(DiagramObjectId(20), DiagramObjectHandle(200));
        let arrow_handle = DiagramObjectHandle(300);
        let mut arrow = DiagramArrow::default();

        arrow
            .read_from_archive(arrow_handle, 0x71, &mut reader, &mut registry)
            .unwrap();

        assert_eq!(arrow.id, expected.id);
        assert_eq!(arrow.geometry, expected.geometry);
        assert_eq!(arrow.relative_position, expected.relative_position);
        assert_eq!(arrow.text, expected.text);
        assert_eq!(arrow.pen, expected.pen);
        assert_eq!(arrow.style, expected.style);
        assert_eq!(arrow.owner, Some(DiagramObjectHandle(100)));
        assert_eq!(arrow.attached_object, Some(DiagramObjectHandle(200)));
        assert_eq!(arrow.attachment, expected.attachment);
        assert_eq!(
            registry.registrations,
            [(DiagramObjectHandle(200), arrow_handle)]
        );
        assert_eq!(
            registry.figures,
            [(DiagramObjectHandle(100), "Text".to_owned(), arrow_handle)]
        );
    }

    #[test]
    fn unresolved_owner_falls_back_to_active_diagram() {
        let mut reader = Reader {
            expected_version: 0x50,
            archived: Some(archived_arrow(false)),
        };
        let mut registry = Registry {
            active_diagram: Some(DiagramObjectHandle(500)),
            ..Registry::default()
        };
        let arrow_handle = DiagramObjectHandle(600);
        let mut arrow = DiagramArrow::default();

        arrow
            .read_from_archive(arrow_handle, 0x50, &mut reader, &mut registry)
            .unwrap();

        assert_eq!(arrow.owner, Some(DiagramObjectHandle(500)));
        assert_eq!(arrow.attached_object, None);
        assert!(registry.registrations.is_empty());
        assert_eq!(
            registry.figures,
            [(DiagramObjectHandle(500), "Text".to_owned(), arrow_handle)]
        );
    }

    #[test]
    fn transient_arrow_ignores_references_and_collection_registration() {
        let mut reader = Reader {
            expected_version: 0x71,
            archived: Some(archived_arrow(true)),
        };
        let mut registry = Registry::default();
        registry
            .objects
            .insert(DiagramObjectId(10), DiagramObjectHandle(100));
        registry
            .objects
            .insert(DiagramObjectId(20), DiagramObjectHandle(200));
        let mut arrow = DiagramArrow::default();

        arrow
            .read_from_archive(DiagramObjectHandle(300), 0x71, &mut reader, &mut registry)
            .unwrap();

        assert!(arrow.transient);
        assert_eq!(arrow.owner, None);
        assert_eq!(arrow.attached_object, None);
        assert!(registry.registrations.is_empty());
        assert!(registry.figures.is_empty());
    }

    #[test]
    fn missing_owner_returns_error_without_changing_the_arrow() {
        let mut reader = Reader {
            expected_version: 0x71,
            archived: Some(archived_arrow(false)),
        };
        let mut registry = Registry::default();
        let mut arrow = DiagramArrow {
            text: ArrowText {
                content: "keep".to_owned(),
            },
            ..DiagramArrow::default()
        };

        let result =
            arrow.read_from_archive(DiagramObjectHandle(300), 0x71, &mut reader, &mut registry);

        assert_eq!(result, Err(ArrowArchiveReadError::MissingOwner));
        assert_eq!(arrow.text.content, "keep");
        assert!(registry.registrations.is_empty());
        assert!(registry.figures.is_empty());
    }

    #[test]
    fn archive_writer_preserves_fields_and_resolves_reference_ids() {
        let arrow = DiagramArrow {
            id: Some(DiagramObjectId(4)),
            transient: false,
            geometry: ArrowGeometry {
                start_x: 1.0,
                start_y: 2.0,
                end_x: 3.0,
                end_y: 4.0,
            },
            relative_position: ArrowRelativePosition { x: 0.25, y: 0.75 },
            text: ArrowText {
                content: "load current".to_owned(),
            },
            pen: ArrowPen {
                color: 0x12_34_56,
                width: 2,
                style: 3,
            },
            style: ArrowStyle {
                option: 5,
                flags: 0x80,
            },
            owner: Some(DiagramObjectHandle(100)),
            attached_object: Some(DiagramObjectHandle(200)),
            attachment: ArrowAttachment {
                first: 0.4,
                second: 0.6,
            },
        };
        let mut ids = IdProvider::default();
        ids.ids
            .insert(DiagramObjectHandle(100), DiagramObjectId(10));
        ids.ids
            .insert(DiagramObjectHandle(200), DiagramObjectId(20));
        let mut writer = Writer::default();

        arrow.write_to_archive(&mut writer, &ids).unwrap();

        assert_eq!(
            writer.records,
            [ArchivedArrow {
                id: arrow.id,
                transient: arrow.transient,
                geometry: arrow.geometry,
                relative_position: arrow.relative_position,
                text: arrow.text,
                pen: arrow.pen,
                style: arrow.style,
                owner_id: Some(DiagramObjectId(10)),
                attached_object_id: Some(DiagramObjectId(20)),
                attachment: arrow.attachment,
            }]
        );
    }

    #[test]
    fn archive_writer_keeps_absent_references_for_sentinel_encoding() {
        let arrow = DiagramArrow {
            id: Some(DiagramObjectId(4)),
            owner: None,
            attached_object: None,
            ..DiagramArrow::default()
        };
        let mut writer = Writer::default();

        arrow
            .write_to_archive(&mut writer, &IdProvider::default())
            .unwrap();

        assert_eq!(writer.records[0].owner_id, None);
        assert_eq!(writer.records[0].attached_object_id, None);
    }

    #[test]
    fn archive_writer_rejects_live_reference_without_stable_id() {
        let arrow = DiagramArrow {
            owner: Some(DiagramObjectHandle(100)),
            ..DiagramArrow::default()
        };
        let mut writer = Writer::default();

        let result = arrow.write_to_archive(&mut writer, &IdProvider::default());

        assert_eq!(
            result,
            Err(ArrowArchiveWriteError::MissingObjectId(
                DiagramObjectHandle(100)
            ))
        );
        assert!(writer.records.is_empty());
    }
}
