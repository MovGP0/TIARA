/* Ghidra address: 0190df80 */
/* Ghidra symbol: FUN_0190df80 */


undefined8 FUN_0190df80(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined8 local_res8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  code *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_78;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01851ab0(local_res8,0,param_3);
  pcVar2 = (code *)FUN_00411550(param_3,0xffec);
  (*pcVar2)(param_3,L"TOpenOptions",
            L"ofReadOnly, ofOverwritePrompt, ofHideReadOnly,ofNoChangeDir, ofShowHelp, ofNoValidate, ofAllowMultiSelect,ofExtensionDifferent, ofPathMustExist, ofFileMustExist, ofCreatePrompt,ofShareAware, ofNoReadOnlyReturn, ofNoTestFileCreate, ofNoNetworkButton,ofNoLongNames, ofOldStyleDialog, ofNoDereferenceLinks, ofEnableIncludeNotify,ofEnableSizing"
           );
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TFileEditStyle",L"fsEdit, fsComboBox");
  pcVar2 = (code *)FUN_00411550(param_3,0xffec);
  (*pcVar2)(param_3,L"TColorDialogOptions",
            L"cdFullOpen, cdPreventFullOpen, cdShowHelp,cdSolidColor, cdAnyColor");
  pcVar2 = (code *)FUN_00411550(param_3,0xffec);
  (*pcVar2)(param_3,L"TFontDialogOptions",
            L"fdAnsiOnly, fdTrueTypeOnly, fdEffects,fdFixedPitchOnly, fdForceFontExist, fdNoFaceSel, fdNoOEMFonts,fdNoSimulations, fdNoSizeSel, fdNoStyleSel,  fdNoVectorFonts,fdShowHelp, fdWysiwyg, fdLimitSize, fdScalableOnly, fdApplyButton"
           );
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TFontDialogDevice",L"fdScreen, fdPrinter, fdBoth");
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TPrintRange",L"prAllPages, prSelection, prPageNums");
  pcVar2 = (code *)FUN_00411550(param_3,0xffec);
  (*pcVar2)(param_3,L"TPrintDialogOptions",
            L"poPrintToFile, poPageNums, poSelection,poWarning, poHelp, poDisablePrintToFile");
  pcVar2 = (code *)FUN_00411550(param_3,0xffed);
  (*pcVar2)(param_3,L"TMsgDlgType",L"mtWarning, mtError, mtInformation, mtConfirmation, mtCustom");
  pcVar2 = (code *)FUN_00411550(param_3,0xffec);
  (*pcVar2)(param_3,L"TMsgDlgButtons",
            L"mbYes, mbNo, mbOK, mbCancel, mbAbort, mbRetry, mbIgnore, mbAll, mbNoToAll, mbYesToAll, mbHelp"
           );
  FUN_00414b50(local_20,L"TCommonDialog");
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  local_28 = (*pcVar2)(param_3,&PTR_FUN_00719158,L"TComponent");
  local_38 = local_res8;
  local_40 = FUN_0190f070;
  FUN_0184a560(local_28,L"function Execute: Boolean",&local_40);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_007198a0,local_20[0]);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_0071a1f0,local_20[0]);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_0071a4d0,local_20[0]);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_0071aaf8,local_20[0]);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_0071b250,local_20[0]);
  pcVar2 = (code *)FUN_00411550(param_3,0xffef);
  (*pcVar2)(param_3,&PTR_FUN_0071b018,local_20[0]);
  local_38 = local_res8;
  local_40 = FUN_0190f070;
  pcVar2 = (code *)FUN_00411550(param_3,0xffe9);
  local_58 = 0;
  (*pcVar2)(param_3,
            L"function MessageDlg(Msg: string; DlgType: TMsgDlgType; Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer"
            ,&local_40,L"ctOther");
  local_38 = local_res8;
  local_40 = FUN_0190f070;
  pcVar2 = (code *)FUN_00411550(param_3,0xffe9);
  local_58 = 0;
  (*pcVar2)(param_3,L"function InputBox(ACaption, APrompt, ADefault: string): string",&local_40,
            L"ctOther");
  local_38 = local_res8;
  local_40 = FUN_0190f070;
  pcVar2 = (code *)FUN_00411550(param_3,0xffe9);
  local_58 = 0;
  (*pcVar2)(param_3,L"function InputQuery(ACaption, APrompt: string; var Value: string): Boolean",
            &local_40,L"ctOther");
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

