//! Export Delphi form controls and event-handler evidence as JSON.

use std::{
    collections::{BTreeMap, BTreeSet},
    env,
    fs,
    io::{self, BufWriter, Write},
    process,
};

use undelphi::{
    DelphiBinary,
    dfm::{DfmObject, DfmValue},
    render::render_value,
    xref::{HandlerBinding, event_bindings},
};

const UI_PROPERTIES: &[&str] = &[
    "Action",
    "ActivePage",
    "Align",
    "AllowAllUp",
    "Anchors",
    "AutoCheck",
    "AutoSize",
    "Cancel",
    "Caption",
    "Checked",
    "Default",
    "DropDownCount",
    "Enabled",
    "GroupIndex",
    "Height",
    "Hint",
    "ImageIndex",
    "Items.Strings",
    "Kind",
    "Left",
    "Max",
    "Min",
    "ModalResult",
    "PageIndex",
    "ParentShowHint",
    "Position",
    "RadioItem",
    "ReadOnly",
    "ShortCut",
    "ShowHint",
    "State",
    "Style",
    "TabOrder",
    "Text",
    "Top",
    "Visible",
    "Width",
];

fn main()
{
    let Some(path) = env::args().nth(1) else
    {
        eprintln!("usage: tiara_ui_evidence <path-to-rebuilt-tina.exe>");
        process::exit(2);
    };
    let data = match fs::read(&path)
    {
        Ok(value) => value,
        Err(error) =>
        {
            eprintln!("cannot read {path}: {error}");
            process::exit(1);
        }
    };
    let binary = match DelphiBinary::parse(&data)
    {
        Ok(value) => value,
        Err(error) =>
        {
            eprintln!("cannot parse Delphi binary: {error}");
            process::exit(1);
        }
    };

    let bindings = event_bindings(&binary);
    let binding_map = build_binding_map(bindings);
    let forms: Vec<_> = binary
        .forms()
        .iter()
        .filter(|(resource, root)| is_valid_form(resource, root))
        .collect();
    let mut output = BufWriter::new(io::stdout().lock());

    writeln!(output, "{{").expect("cannot write JSON");
    writeln!(output, "  \"schemaVersion\": \"1.0.0\",").expect("cannot write JSON");
    writeln!(output, "  \"analyzer\": \"undelphi 0.3.2 with TIARA reconstructed-PE section mapping\",")
        .expect("cannot write JSON");
    writeln!(output, "  \"classCount\": {},", binary.classes().len())
        .expect("cannot write JSON");
    writeln!(output, "  \"formCount\": {},", forms.len()).expect("cannot write JSON");
    writeln!(output, "  \"eventBindingCount\": {},", binding_map.len())
        .expect("cannot write JSON");
    writeln!(output, "  \"forms\": [").expect("cannot write JSON");

    for (form_index, (resource, root)) in forms.iter().enumerate()
    {
        if form_index > 0
        {
            writeln!(output, ",").expect("cannot write JSON");
        }
        write_form(&mut output, resource, root, &binding_map).expect("cannot write form JSON");
    }

    writeln!(output).expect("cannot write JSON");
    writeln!(output, "  ]").expect("cannot write JSON");
    writeln!(output, "}}").expect("cannot write JSON");
}

fn is_valid_form(resource: &str, root: &DfmObject<'_>) -> bool
{
    !resource.is_empty()
        && resource.chars().all(|value| !value.is_control())
        && root.class_name().starts_with('T')
        && root.object_name().chars().all(|value| !value.is_control())
}

fn build_binding_map(bindings: Vec<HandlerBinding>) -> BTreeMap<String, HandlerBinding>
{
    bindings
        .into_iter()
        .map(|binding|
        {
            let key = binding_key(
                &binding.form_resource,
                &binding.component_path,
                &binding.event_name,
            );
            (key, binding)
        })
        .collect()
}

fn binding_key(resource: &str, path: &str, event_name: &str) -> String
{
    format!("{resource}\u{1f}{path}\u{1f}{event_name}")
}

fn write_form(
    output: &mut impl Write,
    resource: &str,
    root: &DfmObject<'_>,
    binding_map: &BTreeMap<String, HandlerBinding>,
) -> io::Result<()>
{
    writeln!(output, "    {{")?;
    write!(output, "      \"resource\": ")?;
    write_json_string(output, resource)?;
    writeln!(output, ",")?;
    write!(output, "      \"className\": ")?;
    write_json_string(output, root.class_name())?;
    writeln!(output, ",")?;
    write!(output, "      \"objectName\": ")?;
    write_json_string(output, root.object_name())?;
    writeln!(output, ",")?;
    writeln!(output, "      \"componentCount\": {},", root.component_count())?;
    writeln!(output, "      \"components\": [")?;

    let components: Vec<_> = root.walk_with_path().collect();
    let mut path_occurrences = BTreeMap::new();
    let mut latest_unique_paths = BTreeMap::new();
    for (component_index, (source_path, component)) in components.iter().enumerate()
    {
        if component_index > 0
        {
            writeln!(output, ",")?;
        }
        let occurrence = path_occurrences
            .entry(source_path.to_string())
            .and_modify(|value| *value += 1)
            .or_insert(1);
        let unique_path = if *occurrence == 1
        {
            source_path.to_string()
        }
        else
        {
            format!("{source_path}#{occurrence}")
        };
        let unique_parent_path = source_path
            .rsplit_once('.')
            .and_then(|(parent, _)| latest_unique_paths.get(parent))
            .cloned();
        latest_unique_paths.insert(source_path.to_string(), unique_path.clone());
        write_component(
            output,
            resource,
            source_path,
            &unique_path,
            unique_parent_path.as_deref(),
            component,
            binding_map,
        )?;
    }

    writeln!(output)?;
    writeln!(output, "      ]")?;
    write!(output, "    }}")?;
    Ok(())
}

fn write_component(
    output: &mut impl Write,
    resource: &str,
    source_path: &str,
    unique_path: &str,
    unique_parent_path: Option<&str>,
    component: &DfmObject<'_>,
    binding_map: &BTreeMap<String, HandlerBinding>,
) -> io::Result<()>
{
    writeln!(output, "        {{")?;
    write!(output, "          \"path\": ")?;
    write_json_string(output, unique_path)?;
    writeln!(output, ",")?;
    write!(output, "          \"sourcePath\": ")?;
    write_json_string(output, source_path)?;
    writeln!(output, ",")?;
    write!(output, "          \"parentPath\": ")?;
    match unique_parent_path
    {
        Some(parent) => write_json_string(output, parent)?,
        None => write!(output, "null")?,
    }
    writeln!(output, ",")?;
    write!(output, "          \"className\": ")?;
    write_json_string(output, component.class_name())?;
    writeln!(output, ",")?;
    write!(output, "          \"name\": ")?;
    write_json_string(output, component.object_name())?;
    writeln!(output, ",")?;
    writeln!(output, "          \"properties\": {{")?;

    let selected_properties: Vec<_> = component
        .properties
        .iter()
        .filter(|property|
        {
            UI_PROPERTIES
                .iter()
                .any(|name| property.name().eq_ignore_ascii_case(name))
        })
        .collect();
    for (property_index, property) in selected_properties.iter().enumerate()
    {
        if property_index > 0
        {
            writeln!(output, ",")?;
        }
        write!(output, "            ")?;
        write_json_string(output, property.name())?;
        write!(output, ": ")?;
        write_json_string(output, &property_value(&property.value))?;
    }
    if !selected_properties.is_empty()
    {
        writeln!(output)?;
    }
    writeln!(output, "          }},")?;
    writeln!(output, "          \"events\": [")?;

    let event_names: BTreeSet<_> = component
        .properties
        .iter()
        .filter(|property| property.name().starts_with("On"))
        .map(|property| property.name())
        .collect();
    for (event_index, event_name) in event_names.iter().enumerate()
    {
        if event_index > 0
        {
            writeln!(output, ",")?;
        }
        let key = binding_key(resource, source_path, event_name);
        let binding = binding_map.get(&key);
        write!(output, "            {{ \"name\": ")?;
        write_json_string(output, event_name)?;
        write!(output, ", \"handler\": ")?;
        write_json_string(
            output,
            binding.map(|value| value.method_name.as_str()).unwrap_or(""),
        )?;
        write!(output, ", \"codeAddress\": ")?;
        match binding.and_then(|value| value.code_va)
        {
            Some(address) => write_json_string(output, &format!("{address:08x}"))?,
            None => write!(output, "null")?,
        }
        write!(output, " }}")?;
    }
    if !event_names.is_empty()
    {
        writeln!(output)?;
    }
    writeln!(output, "          ]")?;
    write!(output, "        }}")?;
    Ok(())
}

fn property_value(value: &DfmValue<'_>) -> String
{
    match value
    {
        DfmValue::String(bytes) => String::from_utf8_lossy(bytes).into_owned(),
        DfmValue::Utf16(bytes) =>
        {
            let units: Vec<_> = bytes
                .chunks_exact(2)
                .map(|pair| u16::from_le_bytes([pair[0], pair[1]]))
                .collect();
            String::from_utf16_lossy(&units)
        }
        _ => render_value(value, None),
    }
}

fn write_json_string(output: &mut impl Write, value: &str) -> io::Result<()>
{
    write!(output, "\"")?;
    for character in value.chars()
    {
        match character
        {
            '\"' => write!(output, "\\\"")?,
            '\\' => write!(output, "\\\\")?,
            '\u{08}' => write!(output, "\\b")?,
            '\u{0c}' => write!(output, "\\f")?,
            '\n' => write!(output, "\\n")?,
            '\r' => write!(output, "\\r")?,
            '\t' => write!(output, "\\t")?,
            value if value.is_control() => write!(output, "\\u{:04x}", value as u32)?,
            value => write!(output, "{value}")?,
        }
    }
    write!(output, "\"")
}
