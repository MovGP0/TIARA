//! Extract embedded Delphi UI image properties and write a TSV manifest.

use std::{
    env,
    fs,
    io::{self, BufWriter, Write},
    path::Path,
    process,
};

use undelphi::{
    DelphiBinary,
    dfm::{DfmObject, DfmValue},
};

struct ImageFormat
{
    name: &'static str,
    extension: &'static str,
    offset: usize,
}

fn main()
{
    let arguments: Vec<_> = env::args().collect();
    if arguments.len() != 3
    {
        eprintln!("usage: tiara_glyph_extractor <rebuilt-tina.exe> <output-directory>");
        process::exit(2);
    }

    let input_path = &arguments[1];
    let output_path = Path::new(&arguments[2]);
    let data = fs::read(input_path).unwrap_or_else(|error|
    {
        eprintln!("cannot read {input_path}: {error}");
        process::exit(1);
    });
    let binary = DelphiBinary::parse(&data).unwrap_or_else(|error|
    {
        eprintln!("cannot parse Delphi binary: {error}");
        process::exit(1);
    });
    fs::create_dir_all(output_path).unwrap_or_else(|error|
    {
        eprintln!("cannot create {}: {error}", output_path.display());
        process::exit(1);
    });

    let mut output = BufWriter::new(io::stdout().lock());
    writeln!(
        output,
        "Index\tFileName\tFormat\tFormResource\tFormClass\tComponentPath\tControlClass\tProperty\tSourceBytes\tExtractedBytes\tSourceOffset"
    )
    .expect("cannot write manifest header");

    let mut index = 0usize;
    for (resource, root) in binary.forms()
    {
        if !is_valid_form(resource, root)
        {
            continue;
        }

        for (component_path, component) in root.walk_with_path()
        {
            for property in &component.properties
            {
                if !is_image_property(property.name())
                {
                    continue;
                }
                let DfmValue::Binary(bytes) = &property.value else
                {
                    continue;
                };

                index = index.saturating_add(1);
                let format = detect_image_format(bytes);
                let (format_name, extension, source_offset) = match format
                {
                    Some(value) => (value.name, value.extension, value.offset),
                    None => ("unknown", "bin", 0),
                };
                let extracted_bytes = &bytes[source_offset..];
                let file_name = format!(
                    "{index:04}_{}_{}_{}.{}",
                    safe_name(resource),
                    safe_name(&component_path),
                    safe_name(property.name()),
                    extension,
                );
                let file_path = output_path.join(&file_name);
                fs::write(&file_path, extracted_bytes).unwrap_or_else(|error|
                {
                    eprintln!("cannot write {}: {error}", file_path.display());
                    process::exit(1);
                });

                writeln!(
                    output,
                    "{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}",
                    index,
                    clean_field(&file_name),
                    format_name,
                    clean_field(resource),
                    clean_field(root.class_name()),
                    clean_field(&component_path),
                    clean_field(component.class_name()),
                    clean_field(property.name()),
                    bytes.len(),
                    extracted_bytes.len(),
                    source_offset,
                )
                .expect("cannot write manifest row");
            }
        }
    }
}

fn is_valid_form(resource: &str, root: &DfmObject<'_>) -> bool
{
    !resource.is_empty()
        && resource.chars().all(|value| !value.is_control())
        && root.class_name().starts_with('T')
        && root.object_name().chars().all(|value| !value.is_control())
}

fn is_image_property(name: &str) -> bool
{
    name.eq_ignore_ascii_case("Glyph.Data")
        || name.eq_ignore_ascii_case("Picture.Data")
        || name.eq_ignore_ascii_case("Image.Data")
        || name.ends_with("Glyph.Data")
        || name.ends_with("Picture.Data")
        || name.ends_with("Image.Data")
}

fn detect_image_format(data: &[u8]) -> Option<ImageFormat>
{
    let maximum_offset = data.len().min(64);
    for offset in 0..maximum_offset
    {
        let candidate = &data[offset..];
        if candidate.starts_with(b"BM")
        {
            return Some(ImageFormat { name: "bmp", extension: "bmp", offset });
        }
        if candidate.starts_with(b"\x89PNG\r\n\x1a\n")
        {
            return Some(ImageFormat { name: "png", extension: "png", offset });
        }
        if candidate.starts_with(b"\xff\xd8\xff")
        {
            return Some(ImageFormat { name: "jpeg", extension: "jpg", offset });
        }
        if candidate.starts_with(b"GIF87a") || candidate.starts_with(b"GIF89a")
        {
            return Some(ImageFormat { name: "gif", extension: "gif", offset });
        }
        if candidate.starts_with(b"\x00\x00\x01\x00")
        {
            return Some(ImageFormat { name: "icon", extension: "ico", offset });
        }
        if candidate.starts_with(b"\x00\x00\x02\x00")
        {
            return Some(ImageFormat { name: "cursor", extension: "cur", offset });
        }
        if candidate.starts_with(b"\xd7\xcd\xc6\x9a")
        {
            return Some(ImageFormat { name: "wmf", extension: "wmf", offset });
        }
        if candidate.len() >= 44
            && candidate[0..4] == [1, 0, 0, 0]
            && candidate[40..44] == [0x20, 0x45, 0x4d, 0x46]
        {
            return Some(ImageFormat { name: "emf", extension: "emf", offset });
        }
    }
    None
}

fn safe_name(value: &str) -> String
{
    let mut output = String::new();
    for character in value.chars().take(96)
    {
        if character.is_ascii_alphanumeric() || character == '-' || character == '_'
        {
            output.push(character);
        }
        else
        {
            output.push('_');
        }
    }
    if output.is_empty()
    {
        output.push_str("unnamed");
    }
    output
}

fn clean_field(value: &str) -> String
{
    value
        .chars()
        .map(|character| if character == '\t' || character == '\r' || character == '\n' { ' ' } else { character })
        .collect()
}
