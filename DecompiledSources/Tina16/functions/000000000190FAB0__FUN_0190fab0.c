/* Ghidra address: 0190fab0 */
/* Ghidra symbol: FUN_0190fab0 */


undefined8 FUN_0190fab0(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_98;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_01851ab0(local_res8,0,param_3);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_20 = (*pcVar2)(param_3,&PTR_FUN_005d2fd0,L"TObject");
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a3c0(local_20,L"constructor Create(const FileName: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadInteger(const Section, Ident: String; Default: LongInt): LongInt",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteInteger(const Section, Ident: String; Value: LongInt)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadBool(const Section, Ident: String; Default: Boolean): Boolean",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteBool(const Section, Ident: String; Value: Boolean)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadDate(const Section, Name: String; Default: TDateTime): TDateTime",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteDate(const Section, Name: String; Value: TDateTime)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadDateTime(const Section, Name: String; Default: TDateTime): TDateTime",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteDateTime(const Section, Name: String; Value: TDateTime)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"function ReadFloat(const Section, Name: String; Default: Double): Double",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteFloat(const Section, Name: String; Value: Double)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadTime(const Section, Name: String; Default: TDateTime): TDateTime",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteTime(const Section, Name: String; Value: TDateTime);",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadBinaryStream(const Section, Name: String; Value: TStream): Integer",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"procedure WriteBinaryStream(const Section, Name: String; Value: TStream)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"function SectionExists(const Section: String): Boolean",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,L"function ValueExists(const Section, Ident: String): Boolean",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"procedure WriteTStrings(const Section :String; Value :TStrings; IsClear :Boolean = True)"
               ,&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_20,
               L"function ReadTStrings(const Section :String; Value :TStrings; IsClear :Boolean = True): String;"
               ,&local_50);
  local_48 = local_res8;
  local_50 = FUN_01914cd0;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = &local_60;
  FUN_0184a620(local_20,L"FileName",L"String",&local_50);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_28 = (*pcVar2)(param_3,&PTR_FUN_005d4e78,L"TCustomIniFile");
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a3c0(local_28,L"constructor Create(const FileName: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure WriteString(const Section, Ident, Value: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"function ReadString(const Section, Ident, Default: String): String;",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure ReadSectionValuesEx(const Section: String; Strings: TStrings)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure DeleteKey(const Section, Ident: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure ReadSection(const Section: String; Strings: TStrings)",&local_50
              );
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure ReadSections(Strings: TStrings)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure ReadSectionValues(const Section: String; Strings: TStrings)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure EraseSection(const Section: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure Clear",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure GetStrings(List: TStrings)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure SetStrings(List: TStrings)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure SaveIniFileToStream(oStream: TStream)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_28,L"procedure LoadIniFileFromStream(oStream: TStream)",&local_50);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_30 = (*pcVar2)(param_3,&PTR_FUN_005d5a90,L"TCustomIniFile");
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure WriteString(const Section, Ident, Value: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"function ReadString(const Section, Ident, Default: String): String;",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure ReadSectionValuesEx(const Section: String; Strings: TStrings)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure DeleteKey(const Section, Ident: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure ReadSection(const Section: String; Strings: TStrings)",&local_50
              );
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure ReadSections(Strings: TStrings)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure ReadSectionValues(const Section: String; Strings: TStrings)",
               &local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure EraseSection(const Section: String)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure SaveIniFileToStream(oStream: TStream)",&local_50);
  local_48 = local_res8;
  local_50 = FUN_01911550;
  FUN_0184a560(local_30,L"procedure LoadIniFileFromStream(oStream: TStream)",&local_50);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

