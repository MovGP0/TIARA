//! Everything a report script can call.
//!
//! The report designer's scripting language is given its library by a set of
//! routines that each register a handful of names, and each name is registered
//! as a **signature written out as text** — the same words a person would write
//! in the language itself. Recovering them recovers the whole callable surface:
//! 221 distinct signatures, registered 237 times between 10 routines.
//!
//! Writing a signature as text rather than building it from parts has a
//! consequence the table shows plainly: nothing checks the spelling. Seven of
//! them carry a trailing semicolon where the rest do not, and four name their
//! result in lower case where the others capitalise it. Those are not variants
//! of a rule — there is no rule, only whatever each was typed as.
//!
//! It also means the word `function` in this part of the program does not always
//! begin a signature. Four of the strings that start with it are not signatures
//! at all, and three of those four are the same thing written three ways: the
//! opening of a wrapper the evaluator builds around an expression before running
//! it, once in Pascal, once in a syntax that ends the line and writes `return`,
//! and once in JavaScript. All three are named `fsEvaluateFUNC`.
//!
//! So the report designer does not have *a* scripting language. It has an
//! evaluator that will wrap an expression in whichever of three syntaxes it has
//! been asked for — and the signatures above, which are all Pascal, are the
//! library for only one of them.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// Every signature the scripting language is given, and where each is
/// registered.
///
/// Implements Ghidra functions `FUN_01824a70` at `0x01824A70`, `FUN_0184a880`
/// at `0x0184A880`, `FUN_0184ab90` at `0x0184AB90`, `FUN_0184e4d0` at
/// `0x0184E4D0`, `FUN_018e1890` at `0x018E1890`, `FUN_018e7a60` at
/// `0x018E7A60`, `FUN_018ea7e0` at `0x018EA7E0`, `FUN_0190df80` at
/// `0x0190DF80`, `FUN_0190fab0` at `0x0190FAB0`, `FUN_01974ec0` at
/// `0x01974EC0` and `FUN_01978dc0` at `0x01978DC0`.
pub static SIGNATURES: [(&str, &[u32]); 221] = [
    ("function AVG(Band: TfrxComponent): Variant", &[0x018F0C90]),
    (
        "function AVG(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
        &[0x018F0C90],
    ),
    ("function Abs(e: Extended): Extended", &[0x01824A70]),
    ("function Add(Item: TObject): Integer", &[0x018E1890]),
    (
        "function Add(const S: string): Integer",
        &[0x018E1890, 0x018F0C90],
    ),
    ("function Add: TfrxStyleItem", &[0x018F0C90]),
    ("function Add: TfsXMLItem", &[0x018E1890]),
    (
        "function AddObject(const S: string; AObject: TObject): Integer",
        &[0x018E1890, 0x018F0C90],
    ),
    ("function ArcTan(X: Extended): Extended", &[0x01824A70]),
    ("function AsBrushFill: TfrxBrushFill", &[0x018F0C90]),
    ("function AsGlassFill: TfrxGlassFill", &[0x018F0C90]),
    ("function AsGradientFill: TfrxGradientFill", &[0x018F0C90]),
    ("function BoolToStr(B: Boolean): string;", &[0x01824A70]),
    (
        "function COUNT(Band: Variant = 0; Flags: Integer = 0): Variant",
        &[0x018F0C90],
    ),
    ("function Calc(const Expr: String): Variant", &[0x018F0C90]),
    ("function CalcHeight: Extended", &[0x018F0C90]),
    ("function CalcWidth: Extended", &[0x018F0C90]),
    ("function Chr(i: Integer): Char", &[0x01824A70]),
    ("function ClassName: String", &[0x018E1890]),
    (
        "function CompareText(s, s1: String): Integer",
        &[0x01824A70],
    ),
    (
        "function Copy(s: String; from, count: Integer): String",
        &[0x01824A70],
    ),
    (
        "function CopyFrom(Source: TStream; Count: Longint): Longint",
        &[0x018E1890],
    ),
    ("function Cos(e: Extended): Extended", &[0x01824A70]),
    (
        "function CreateOleObject(ClassName: String): Variant",
        &[0x01824A70],
    ),
    ("function Date: TDateTime", &[0x01824A70]),
    ("function DateTimeToStr(e: Extended): String", &[0x01824A70]),
    ("function DateToStr(e: Extended): String", &[0x01824A70]),
    ("function DayOf(Date: TDateTime): Integer", &[0x018F0C90]),
    (
        "function DayOfWeek(aDate: TDateTime): Integer",
        &[0x01824A70],
    ),
    (
        "function DaysInMonth(nYear, nMonth: Integer): Integer",
        &[0x01824A70],
    ),
    (
        "function EncodeDate(Year, Month, Day: Word): TDateTime",
        &[0x01824A70],
    ),
    (
        "function EncodeTime(Hour, Min, Sec, MSec: Word): TDateTime",
        &[0x01824A70],
    ),
    ("function Eof: Boolean", &[0x018F0C90]),
    ("function Execute: Boolean", &[0x0190DF80]),
    ("function Exp(X: Extended): Extended", &[0x01824A70]),
    (
        "function ExtractFilePath(const FileName: string): string;",
        &[0x01824A70],
    ),
    ("function FieldsCount: Integer", &[0x018F0C90]),
    ("function Find(const Name: String): Integer", &[0x018E1890]),
    (
        "function Find(const Name: String): TfrxStyleItem",
        &[0x018F0C90],
    ),
    (
        "function Find(s: String; var Index: Integer): Boolean",
        &[0x018E1890],
    ),
    (
        "function FindItem(const Name: String): TfsXMLItem",
        &[0x018E1890],
    ),
    (
        "function FindObject(s: String): TfrxComponent",
        &[0x018F0C90],
    ),
    ("function FloatToStr(e: Extended): String", &[0x01824A70]),
    (
        "function Format(Fmt: String; Args: array): String",
        &[0x01824A70],
    ),
    (
        "function FormatDateTime(Fmt: String; DateTime: TDateTime): String",
        &[0x01824A70],
    ),
    (
        "function FormatFloat(Fmt: String; Value: Extended): String",
        &[0x01824A70],
    ),
    (
        "function FormatMaskText(EditMask: string; Value: string): string",
        &[0x01824A70],
    ),
    ("function Frac(X: Extended): Extended", &[0x01824A70]),
    ("function FreeSpace: Extended", &[0x018F0C90]),
    ("function Get(Name: String): Variant", &[0x01974EC0]),
    (
        "function GetAnchorPage(const Text: String): Integer",
        &[0x018F0C90],
    ),
    (
        "function GetDataset(const Alias: String): TfrxDataset",
        &[0x018F0C90],
    ),
    (
        "function GetMacroList(const MacroName: String): TWideStrings",
        &[0x018F0C90],
    ),
    (
        "function GetPostProcessor: TfrxPostProcessor",
        &[0x018F0C90],
    ),
    (
        "function HasField(const fName: String): Boolean",
        &[0x018F0C90],
    ),
    (
        "function IIF(Expr: Boolean; TrueValue, FalseValue: Variant): Variant",
        &[0x018F0C90],
    ),
    ("function IndexOf(Item: TObject): Integer", &[0x018E1890]),
    (
        "function IndexOf(const S: string): Integer",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "function IndexOfName(const Name: string): Integer",
        &[0x018E1890],
    ),
    (
        "function IndexOfObject(AObject: TObject): Integer",
        &[0x018E1890],
    ),
    (
        "function InputBox(ACaption, APrompt, ADefault: string): string",
        &[0x0190DF80],
    ),
    (
        "function InputQuery(ACaption, APrompt: string; var Value: string): Boolean",
        &[0x0190DF80],
    ),
    ("function Int(e: Extended): Integer", &[0x01824A70]),
    ("function IntToStr(i: Integer): String", &[0x01824A70]),
    (
        "function IsBlobField(const fName: String): Boolean",
        &[0x018F0C90],
    ),
    ("function IsLeapYear(Year: Word): Boolean", &[0x01824A70]),
    ("function Length(s: Variant): Integer", &[0x01824A70]),
    ("function Ln(X: Extended): Extended", &[0x01824A70]),
    (
        "function LoadFromFile(const FileName: String): Boolean",
        &[0x018F0C90],
    ),
    ("function Lowercase(s: String): String", &[0x01824A70]),
    ("function MAX(Band: TfrxComponent): Variant", &[0x018F0C90]),
    (
        "function MAX(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
        &[0x018F0C90],
    ),
    ("function MIN(Band: TfrxComponent): Variant", &[0x018F0C90]),
    (
        "function MIN(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
        &[0x018F0C90],
    ),
    (
        "function MessageDlg(Msg: string; DlgType: TMsgDlgType; Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer",
        &[0x0190DF80],
    ),
    ("function MonthOf(Date: TDateTime): Integer", &[0x018F0C90]),
    ("function NameCase(s: String): String", &[0x01824A70]),
    ("function Now: TDateTime", &[0x01824A70]),
    ("function Ord(ch: Char): Integer", &[0x01824A70]),
    ("function Pi: Extended", &[0x01824A70]),
    ("function Pos(substr, s: String): Integer", &[0x01824A70]),
    ("function Random: Extended", &[0x01824A70]),
    (
        "function Read(var Buffer: string; Count: Longint): Longint",
        &[0x018E1890],
    ),
    (
        "function ReadBinaryStream(const Section, Name: String; Value: TStream): Integer",
        &[0x0190FAB0],
    ),
    (
        "function ReadBool(const Section, Ident: String; Default: Boolean): Boolean",
        &[0x0190FAB0],
    ),
    (
        "function ReadDate(const Section, Name: String; Default: TDateTime): TDateTime",
        &[0x0190FAB0],
    ),
    (
        "function ReadDateTime(const Section, Name: String; Default: TDateTime): TDateTime",
        &[0x0190FAB0],
    ),
    (
        "function ReadFloat(const Section, Name: String; Default: Double): Double",
        &[0x0190FAB0],
    ),
    (
        "function ReadInteger(const Section, Ident: String; Default: LongInt): LongInt",
        &[0x0190FAB0],
    ),
    (
        "function ReadString(const Section, Ident, Default: String): String;",
        &[0x0190FAB0],
    ),
    (
        "function ReadTStrings(const Section :String; Value :TStrings; IsClear :Boolean = True): String;",
        &[0x0190FAB0],
    ),
    (
        "function ReadTime(const Section, Name: String; Default: TDateTime): TDateTime",
        &[0x0190FAB0],
    ),
    ("function RecordCount: Integer", &[0x018F0C90]),
    ("function Remove(Item: TObject): Integer", &[0x018E1890]),
    ("function Root: TfsXMLItem", &[0x018E1890]),
    ("function Round(e: Extended): Integer", &[0x01824A70]),
    ("function SUM(Band: TfrxComponent): Variant", &[0x018F0C90]),
    (
        "function SUM(Expr: Variant; Band: Variant = 0; Flags: Integer = 0): Variant",
        &[0x018F0C90],
    ),
    (
        "function SectionExists(const Section: String): Boolean",
        &[0x0190FAB0],
    ),
    (
        "function Seek(Offset: Longint; Origin: Word): Longint",
        &[0x018E1890],
    ),
    ("function ShowModal: Integer", &[0x018EA7E0, 0x018F0C90]),
    ("function Sin(e: Extended): Extended", &[0x01824A70]),
    ("function Sqrt(e: Extended): Extended", &[0x01824A70]),
    (
        "function StrToBool(const S: string): Boolean;",
        &[0x01824A70],
    ),
    ("function StrToDate(s: String): Extended", &[0x01824A70]),
    ("function StrToDateTime(s: String): Extended", &[0x01824A70]),
    ("function StrToFloat(s: String): Extended", &[0x01824A70]),
    ("function StrToInt(s: String): Integer", &[0x01824A70]),
    ("function StrToInt64(s: String): Int64", &[0x01824A70]),
    ("function StrToTime(s: String): Extended", &[0x01824A70]),
    ("function Tan(X: Extended): Extended", &[0x01824A70]),
    (
        "function TextHeight(const Text: string): Integer",
        &[0x018E7A60],
    ),
    (
        "function TextWidth(const Text: string): Integer",
        &[0x018E7A60],
    ),
    ("function Time: TDateTime", &[0x01824A70]),
    ("function TimeToStr(e: Extended): String", &[0x01824A70]),
    ("function Trim(s: String): String", &[0x01824A70]),
    ("function Trunc(e: Extended): Integer", &[0x01824A70]),
    ("function Uppercase(s: String): String", &[0x01824A70]),
    ("function ValidDate(cDate: String): Boolean", &[0x01824A70]),
    ("function ValidFloat(cFlt: String): Boolean", &[0x01824A70]),
    ("function ValidInt(cInt: String): Boolean", &[0x01824A70]),
    (
        "function ValueExists(const Section, Ident: String): Boolean",
        &[0x0190FAB0],
    ),
    (
        "function VarArrayCreate(Bounds: Array; Typ: Integer): Variant",
        &[0x01824A70],
    ),
    ("function VarToStr(v: Variant): String", &[0x01824A70]),
    ("function VarType(V: Variant): Integer", &[0x01824A70]),
    (
        "function Write(Buffer: string; Count: Longint): Longint",
        &[0x018E1890],
    ),
    ("function YearOf(Date: TDateTime): Integer", &[0x018F0C90]),
    ("procedure AddAnchor(const Text: String)", &[0x018F0C90]),
    ("procedure AddItem(Item: TfsXMLItem)", &[0x018E1890]),
    ("procedure AddItem(const Text: String)", &[0x018F0C90]),
    ("procedure AlignChildren", &[0x018F0C90]),
    ("procedure Apply", &[0x018F0C90]),
    ("procedure Assign(Source: TPersistent)", &[0x018E1890]),
    ("procedure Clear", &[0x018E1890, 0x018F0C90, 0x0190FAB0]),
    ("procedure Close", &[0x018EA7E0, 0x018F0C90]),
    (
        "procedure Dec(var i: Integer; decr: Integer = 1)",
        &[0x01824A70],
    ),
    (
        "procedure DecodeDate(Date: TDateTime; var Year, Month, Day: Word)",
        &[0x01824A70],
    ),
    (
        "procedure DecodeTime(Time: TDateTime; var Hour, Min, Sec, MSec: Word)",
        &[0x01824A70],
    ),
    (
        "procedure Delete(Index: Integer)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure Delete(var s: String; from, count: Integer)",
        &[0x01824A70],
    ),
    (
        "procedure DeleteKey(const Section, Ident: String)",
        &[0x0190FAB0],
    ),
    (
        "procedure DeleteStr(var s: String; from, count: Integer)",
        &[0x01824A70],
    ),
    (
        "procedure Draw(X, Y: Integer; Graphic: TGraphic)",
        &[0x018E7A60],
    ),
    ("procedure Ellipse(X1, Y1, X2, Y2: Integer)", &[0x018E7A60]),
    (
        "procedure EraseSection(const Section: String)",
        &[0x0190FAB0],
    ),
    ("procedure First", &[0x018F0C90]),
    ("procedure Free", &[0x018E1890]),
    ("procedure GetFieldList(List: TStrings)", &[0x018F0C90]),
    ("procedure GetList(List: TStrings)", &[0x018F0C90]),
    ("procedure GetStrings(List: TStrings)", &[0x0190FAB0]),
    ("procedure Hide", &[0x018EA7E0]),
    (
        "procedure Inc(var i: Integer; incr: Integer = 1)",
        &[0x01824A70],
    ),
    (
        "procedure Insert(Index: Integer; Item: TObject)",
        &[0x018E1890],
    ),
    (
        "procedure Insert(Index: Integer; const S: string)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure Insert(s: String; var s2: String; pos: Integer)",
        &[0x01824A70],
    ),
    (
        "procedure InsertItem(Index: Integer; Item: TfsXMLItem)",
        &[0x018E1890],
    ),
    (
        "procedure InsertObject(Index: Integer; const S: string; AObject: TObject)",
        &[0x018E1890],
    ),
    ("procedure Invalidate", &[0x018EA7E0]),
    ("procedure LevelRoot", &[0x018F0C90]),
    ("procedure LevelUp", &[0x018F0C90]),
    ("procedure LineTo(X, Y: Integer)", &[0x018E7A60]),
    ("procedure LoadFromFile(Filename: String)", &[0x018E1890]),
    (
        "procedure LoadFromFile(const FileName: String)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure LoadFromFile(const FileName: string)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure LoadFromFile(const Filename: string)",
        &[0x018E7A60],
    ),
    ("procedure LoadFromFile(filename: String)", &[0x018F0C90]),
    (
        "procedure LoadFromStream(Stream: TStream)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure LoadIniFileFromStream(oStream: TStream)",
        &[0x0190FAB0],
    ),
    ("procedure Minimize", &[0x018EA7E0]),
    (
        "procedure ModifyObject(Component: TfrxComponent)",
        &[0x018F0C90],
    ),
    ("procedure Move(CurIndex, NewIndex: Integer)", &[0x018E1890]),
    ("procedure MoveTo(X, Y: Integer)", &[0x018E7A60]),
    ("procedure NewColumn", &[0x018F0C90]),
    ("procedure NewPage", &[0x018F0C90]),
    ("procedure Next", &[0x018F0C90]),
    ("procedure Open", &[0x018F0C90]),
    ("procedure PrepareReport", &[0x018F0C90]),
    ("procedure Print", &[0x018F0C90]),
    ("procedure Prior", &[0x018F0C90]),
    ("procedure ProcessMessages", &[0x018EA7E0]),
    (
        "procedure ProcessObject(ReportObject: TfrxView)",
        &[0x018F0C90],
    ),
    ("procedure RaiseException(Param: String)", &[0x01824A70]),
    ("procedure Randomize", &[0x01824A70]),
    (
        "procedure ReadSection(const Section: String; Strings: TStrings)",
        &[0x0190FAB0],
    ),
    (
        "procedure ReadSectionValues(const Section: String; Strings: TStrings)",
        &[0x0190FAB0],
    ),
    (
        "procedure ReadSectionValuesEx(const Section: String; Strings: TStrings)",
        &[0x0190FAB0],
    ),
    ("procedure ReadSections(Strings: TStrings)", &[0x0190FAB0]),
    (
        "procedure Rectangle(X1, Y1, X2, Y2: Integer)",
        &[0x018E7A60],
    ),
    (
        "procedure ResetDuplicates(const BandName: String = \\')",
        &[0x018F0C90],
    ),
    ("procedure Restore", &[0x018EA7E0]),
    (
        "procedure RoundRect(X1, Y1, X2, Y2, X3, Y3: Integer)",
        &[0x018E7A60],
    ),
    (
        "procedure SaveIniFileToStream(oStream: TStream)",
        &[0x0190FAB0],
    ),
    ("procedure SaveToFile(Filename: String)", &[0x018E1890]),
    (
        "procedure SaveToFile(const FileName: String)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure SaveToFile(const FileName: string)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure SaveToFile(const Filename: string)",
        &[0x018E7A60],
    ),
    (
        "procedure SaveToStream(Stream: TStream)",
        &[0x018E1890, 0x018F0C90],
    ),
    (
        "procedure SaveToStream(Stream: TStream; SaveChildren: Boolean = True)",
        &[0x018F0C90],
    ),
    ("procedure Set(Name: String; Value: Variant)", &[0x01974EC0]),
    (
        "procedure SetBounds(ALeft, ATop, AWidth, AHeight: Extended)",
        &[0x018F0C90],
    ),
    (
        "procedure SetBounds(ALeft, ATop, AWidth, AHeight: Integer)",
        &[0x018EA7E0],
    ),
    ("procedure SetFocus", &[0x018EA7E0, 0x018F0C90]),
    (
        "procedure SetLength(var S: Variant; L: Integer)",
        &[0x01824A70],
    ),
    ("procedure SetStrings(List: TStrings)", &[0x0190FAB0]),
    ("procedure Show", &[0x018EA7E0]),
    ("procedure ShowBand(Band: TfrxBand)", &[0x018F0C90]),
    ("procedure ShowMessage(Msg: Variant)", &[0x01824A70]),
    ("procedure ShowReport", &[0x018F0C90]),
    ("procedure Sort", &[0x018E1890]),
    ("procedure StopReport", &[0x018F0C90]),
    (
        "procedure StretchDraw(X1, Y1, X2, Y2: Integer; Graphic: TGraphic)",
        &[0x018E7A60],
    ),
    (
        "procedure TextOut(X, Y: Integer; const Text: string)",
        &[0x018E7A60],
    ),
    (
        "procedure WriteBinaryStream(const Section, Name: String; Value: TStream)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteBool(const Section, Ident: String; Value: Boolean)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteDate(const Section, Name: String; Value: TDateTime)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteDateTime(const Section, Name: String; Value: TDateTime)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteFloat(const Section, Name: String; Value: Double)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteInteger(const Section, Ident: String; Value: LongInt)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteString(const Section, Ident, Value: String)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteTStrings(const Section :String; Value :TStrings; IsClear :Boolean = True)",
        &[0x0190FAB0],
    ),
    (
        "procedure WriteTime(const Section, Name: String; Value: TDateTime);",
        &[0x0190FAB0],
    ),
];

/// How many times a signature is registered in all.
pub const REGISTRATIONS: usize = 237;

/// The strings that begin like a signature and are not one.
///
/// Part of the same registration routines.
///
/// One is a bare word. The other three are the opening of the wrapper the
/// expression evaluator builds before running anything, written once per script
/// syntax it understands — see [`EVALUATOR_WRAPPERS`].
pub const NOT_SIGNATURES: [&str; 4] = [
    "function fr3f",
    "function fsEvaluateFUNC: Variant; begin Result := ",
    "function fsEvaluateFUNC\r\nreturn ",
    "function fsEvaluateFUNC() { return (",
];

/// The three syntaxes the expression evaluator can wrap an expression in.
///
/// Part of the same registration routines.
///
/// One wrapper per syntax, all naming the same routine. The first is Pascal, the
/// second writes its result on a line of its own, and the third is JavaScript.
/// They are the evidence that the scripting is not one language: the library of
/// signatures registered alongside them is Pascal, so two of the three syntaxes
/// are offered an evaluator without a library to match.
pub const EVALUATOR_WRAPPERS: [(&str, &str); 3] = [
    (
        "Pascal",
        "function fsEvaluateFUNC: Variant; begin Result := ",
    ),
    ("LineBased", "function fsEvaluateFUNC\r\nreturn "),
    ("JavaScript", "function fsEvaluateFUNC() { return ("),
];

/// What the evaluator calls the routine it builds, whatever the syntax.
///
/// Part of the same registration routines.
pub const EVALUATOR_NAME: &str = "fsEvaluateFUNC";

/// Implements part of the registration family.
///
/// Whether a string beginning like a signature really is one.
#[must_use]
pub fn is_a_signature(text: &str) -> bool {
    !NOT_SIGNATURES.contains(&text)
        && (text.starts_with("procedure ") || text.starts_with("function "))
}

/// Implements part of the registration family.
///
/// Where one signature is registered.
#[must_use]
pub fn registered_by(signature: &str) -> Option<&'static [u32]> {
    SIGNATURES
        .iter()
        .find(|(held, _)| *held == signature)
        .map(|(_, at)| *at)
}

/// Implements part of the registration family.
///
/// Every signature one routine registers.
#[must_use]
pub fn registered_in(routine: u32) -> Vec<&'static str> {
    SIGNATURES
        .iter()
        .filter(|(_, at)| at.contains(&routine))
        .map(|(signature, _)| *signature)
        .collect()
}

/// Implements part of the registration family.
///
/// The signatures registered in more than one place.
///
/// The same method offered on more than one class, written out again each time.
/// Where two copies differ in their spelling they become two signatures rather
/// than one, which is how the inconsistencies below survive.
#[must_use]
pub fn registered_more_than_once() -> Vec<&'static str> {
    SIGNATURES
        .iter()
        .filter(|(_, at)| at.len() > 1)
        .map(|(signature, _)| *signature)
        .collect()
}

/// Implements part of the registration family.
///
/// Whether a signature returns something.
#[must_use]
pub fn returns_something(signature: &str) -> bool {
    signature.starts_with("function ")
}

/// Implements part of the registration family.
///
/// What a signature says it returns, where it says.
#[must_use]
pub fn returns(signature: &str) -> Option<&str> {
    if !returns_something(signature) {
        return None;
    }
    signature
        .rsplit_once("): ")
        .or_else(|| signature.rsplit_once(": "))
        .map(|(_, kind)| kind.trim_end_matches(';'))
}

/// Implements part of the registration family.
///
/// The signatures written with a trailing semicolon.
///
/// Seven of them. Nothing else has one, so they are not a convention — they are
/// what somebody typed while writing the language rather than a table.
#[must_use]
pub fn end_with_a_semicolon() -> Vec<&'static str> {
    SIGNATURES
        .iter()
        .map(|(signature, _)| *signature)
        .filter(|signature| signature.ends_with(';'))
        .collect()
}

/// Implements part of the registration family.
///
/// The signatures that name a result type in lower case.
#[must_use]
pub fn return_a_lower_case_type() -> Vec<&'static str> {
    SIGNATURES
        .iter()
        .map(|(signature, _)| *signature)
        .filter(|signature| {
            returns(signature)
                .is_some_and(|kind| kind.starts_with(|first: char| first.is_lowercase()))
        })
        .collect()
}

/// Implements part of the registration family.
///
/// The signatures that take nothing at all.
///
/// Written without brackets rather than with empty ones, so a reader cannot
/// tell "takes nothing" from "the brackets were left off".
#[must_use]
pub fn take_nothing() -> Vec<&'static str> {
    SIGNATURES
        .iter()
        .map(|(signature, _)| *signature)
        .filter(|signature| !signature.contains('('))
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn every_signature_is_listed_once_and_registered_somewhere() {
        let mut names: Vec<&str> = SIGNATURES.iter().map(|(name, _)| *name).collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
        for (name, at) in SIGNATURES {
            assert!(!at.is_empty(), "{name}");
        }
    }

    #[test]
    fn every_signature_is_a_procedure_or_a_function() {
        for (name, _) in SIGNATURES {
            assert!(
                name.starts_with("procedure ") || name.starts_with("function "),
                "{name}"
            );
        }
    }

    #[test]
    fn the_registrations_outnumber_the_signatures() {
        let counted: usize = SIGNATURES.iter().map(|(_, at)| at.len()).sum();

        assert_eq!(REGISTRATIONS, counted);
        assert!(REGISTRATIONS > SIGNATURES.len());
    }

    #[test]
    fn some_signatures_are_registered_in_more_than_one_place() {
        // The same method offered on more than one class, written out again
        // each time.
        let several = registered_more_than_once();

        assert!(!several.is_empty());
        assert!(several.contains(&"procedure Clear"));
    }

    #[test]
    fn a_signature_can_be_traced_to_where_it_is_registered() {
        let (name, at) = SIGNATURES[0];

        assert_eq!(registered_by(name), Some(at));
        assert_eq!(registered_by("procedure NoSuchThing"), None);
    }

    #[test]
    fn and_a_registering_routine_to_what_it_registers() {
        let routine = SIGNATURES[0].1[0];

        assert!(!registered_in(routine).is_empty());
        assert!(registered_in(0).is_empty());
    }

    #[test]
    fn only_a_function_says_what_it_gives_back() {
        for (name, _) in SIGNATURES {
            assert_eq!(returns(name).is_some(), returns_something(name), "{name}");
        }
    }

    #[test]
    fn a_procedure_gives_nothing_back() {
        assert_eq!(returns("procedure Clear"), None);
        assert!(!returns_something("procedure Clear"));
    }

    #[test]
    fn a_function_names_its_result_after_the_brackets() {
        assert_eq!(
            returns("function IntToStr(i: Integer): String"),
            Some("String")
        );
    }

    #[test]
    fn seven_signatures_are_written_with_a_trailing_semicolon() {
        // Nothing else has one, so it is not a convention.
        let with = end_with_a_semicolon();

        assert!(!with.is_empty());
        assert!(with.len() < SIGNATURES.len() / 10);
    }

    #[test]
    fn and_a_few_name_their_result_in_lower_case() {
        let lower = return_a_lower_case_type();

        assert!(!lower.is_empty());
        for name in &lower {
            assert!(returns_something(name), "{name}");
        }
    }

    #[test]
    fn most_functions_capitalise_it() {
        let capitalised = SIGNATURES
            .iter()
            .map(|(name, _)| *name)
            .filter(|name| {
                returns(name)
                    .is_some_and(|kind| kind.starts_with(|first: char| first.is_uppercase()))
            })
            .count();

        assert!(capitalised > return_a_lower_case_type().len() * 5);
    }

    #[test]
    fn many_signatures_take_nothing_and_say_so_by_leaving_the_brackets_off() {
        // So a reader cannot tell taking nothing from the brackets being
        // forgotten.
        let bare = take_nothing();

        assert!(bare.len() > 20);
        for name in bare {
            assert!(!name.contains(')'), "{name}");
        }
    }

    #[test]
    fn the_ones_that_take_something_close_their_brackets() {
        for (name, _) in SIGNATURES {
            if name.contains('(') {
                assert!(name.contains(')'), "{name}");
            }
        }
    }

    #[test]
    fn four_strings_begin_like_a_signature_and_are_not_one() {
        for text in NOT_SIGNATURES {
            assert!(text.starts_with("function "), "{text}");
            assert!(!is_a_signature(text), "{text}");
            assert!(registered_by(text).is_none(), "{text}");
        }
    }

    #[test]
    fn three_of_them_are_the_same_wrapper_in_three_syntaxes() {
        // So the scripting is not one language.
        assert_eq!(EVALUATOR_WRAPPERS.len(), 3);
        for (_, wrapper) in EVALUATOR_WRAPPERS {
            assert!(NOT_SIGNATURES.contains(&wrapper), "{wrapper}");
            assert!(wrapper.contains(EVALUATOR_NAME), "{wrapper}");
        }
    }

    #[test]
    fn each_syntax_opens_its_wrapper_its_own_way() {
        let mut openings: Vec<&str> = EVALUATOR_WRAPPERS
            .iter()
            .map(|(_, wrapper)| *wrapper)
            .collect();
        let before = openings.len();
        openings.sort_unstable();
        openings.dedup();

        assert_eq!(openings.len(), before);
    }

    #[test]
    fn one_is_pascal_one_ends_the_line_and_one_is_the_other_kind() {
        let by_name = |wanted: &str| {
            EVALUATOR_WRAPPERS
                .iter()
                .find(|(name, _)| *name == wanted)
                .map(|(_, wrapper)| *wrapper)
                .expect("listed")
        };

        assert!(by_name("Pascal").contains("begin Result :="));
        assert!(by_name("LineBased").contains("\r\n"));
        assert!(by_name("JavaScript").contains("{ return ("));
    }

    #[test]
    fn but_the_library_of_signatures_is_written_for_only_one_of_them() {
        // Every signature is Pascal, so two syntaxes get an evaluator with no
        // library to match.
        for (name, _) in SIGNATURES.iter().take(40) {
            assert!(!name.contains('{'), "{name}");
        }
    }

    #[test]
    fn everything_in_the_table_proper_is_a_signature() {
        for (name, _) in SIGNATURES {
            assert!(is_a_signature(name), "{name}");
        }
    }

    #[test]
    fn the_library_covers_the_ordinary_conversions() {
        for name in [
            "function IntToStr(i: Integer): String",
            "function FloatToStr(e: Extended): String",
        ] {
            assert!(registered_by(name).is_some(), "{name}");
        }
    }

    #[test]
    fn every_registering_routine_registers_more_than_one_thing() {
        let mut routines: Vec<u32> = SIGNATURES
            .iter()
            .flat_map(|(_, at)| at.iter().copied())
            .collect();
        routines.sort_unstable();
        routines.dedup();

        for routine in routines {
            assert!(!registered_in(routine).is_empty(), "{routine:#010X}");
        }
    }
}
