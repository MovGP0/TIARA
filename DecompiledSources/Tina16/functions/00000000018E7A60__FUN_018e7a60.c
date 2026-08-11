/* Ghidra address: 018e7a60 */
/* Ghidra symbol: FUN_018e7a60 */


undefined8 FUN_018e7a60(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined1 local_90;
  code *local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_60 = auStack_b8;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_01851ab0(local_res8,0,param_3);
  local_68 = local_res8;
  local_70 = FUN_018ea360;
  FUN_005fbf70(&local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffec);
  (*pcVar2)(param_3,L"TFontStyles",L"fsBold, fsItalic, fsUnderline, fsStrikeout");
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TFontPitch",L"fpDefault, fpVariable, fpFixed");
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TPenStyle",
            L"psSolid, psDash, psDot, psDashDot, psDashDotDot, psClear, psInsideFrame");
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TPenMode",
            L"pmBlack, pmWhite, pmNop, pmNot, pmCopy, pmNotCopy, pmMergePenNot, pmMaskPenNot, pmMergeNotPen, pmMaskNotPen, pmMerge, pmNotMerge, pmMask, pmNotMask, pmXor, pmNotXor"
           );
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TBrushStyle",
            L"bsSolid, bsClear, bsHorizontal, bsVertical, bsFDiagonal, bsBDiagonal, bsCross, bsDiagCross"
           );
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_20 = (*pcVar2)(param_3,&PTR_FUN_005f2d40,L"TPersistent");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a3c0(local_20,L"constructor Create",&local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_28 = (*pcVar2)(param_3,&PTR_FUN_005f3290,L"TPersistent");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a3c0(local_28,L"constructor Create",&local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_30 = (*pcVar2)(param_3,&PTR_FUN_005f35d8,L"TPersistent");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a3c0(local_30,L"constructor Create",&local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_38 = (*pcVar2)(param_3,&PTR_FUN_005f54e0,L"TPersistent");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a3c0(local_38,L"constructor Create",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure Draw(X, Y: Integer; Graphic: TGraphic)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure Ellipse(X1, Y1, X2, Y2: Integer)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure LineTo(X, Y: Integer)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure MoveTo(X, Y: Integer)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure Rectangle(X1, Y1, X2, Y2: Integer)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure RoundRect(X1, Y1, X2, Y2, X3, Y3: Integer)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure StretchDraw(X1, Y1, X2, Y2: Integer; Graphic: TGraphic)",
               &local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"function TextHeight(const Text: string): Integer",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"procedure TextOut(X, Y: Integer; const Text: string)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_38,L"function TextWidth(const Text: string): Integer",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  local_98 = &local_70;
  local_90 = 0;
  FUN_0184ab90(local_38,L"Pixels",L"Integer, Integer",L"TColor");
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_40 = (*pcVar2)(param_3,&PTR_FUN_005f6910,L"TPersistent");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a3c0(local_40,L"constructor Create",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_40,L"procedure LoadFromFile(const Filename: string)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_40,L"procedure SaveToFile(const Filename: string)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018ea0c0;
  local_78 = local_res8;
  local_80 = FUN_018ea250;
  local_98 = &local_80;
  FUN_0184a620(local_40,L"Height",L"Integer",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018ea0c0;
  local_78 = local_res8;
  local_80 = FUN_018ea250;
  local_98 = &local_80;
  FUN_0184a620(local_40,L"Width",L"Integer",&local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_48 = (*pcVar2)(param_3,&DAT_005f7500,L"TPersistent");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_48,L"procedure LoadFromFile(const Filename: string)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a560(local_48,L"procedure SaveToFile(const Filename: string)",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018ea0c0;
  local_80 = (code *)0x0;
  local_78 = 0;
  local_98 = &local_80;
  FUN_0184a620(local_48,L"Height",L"Integer",&local_70);
  local_68 = local_res8;
  local_70 = FUN_018ea0c0;
  local_80 = (code *)0x0;
  local_78 = 0;
  local_98 = &local_80;
  FUN_0184a620(local_48,L"Width",L"Integer",&local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_005f86c8,L"TGraphic");
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_50 = (*pcVar2)(param_3,&PTR_FUN_005f7f40,L"TCanvas");
  local_68 = local_res8;
  local_70 = FUN_018e8e00;
  FUN_0184a3c0(local_50,L"constructor Create(AMetafile: TMetafile; ReferenceDevice: Integer)",
               &local_70);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_58 = (*pcVar2)(param_3,&PTR_FUN_005f92e8,L"TGraphic");
  local_68 = local_res8;
  local_70 = FUN_018ea0c0;
  local_80 = (code *)0x0;
  local_78 = 0;
  local_98 = &local_80;
  FUN_0184a620(local_58,L"Canvas",L"TCanvas",&local_70);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

