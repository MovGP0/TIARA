/* Ghidra address: 01c69770 */
/* Ghidra symbol: FUN_01c69770 */


void FUN_01c69770(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2f8 [32];
  wchar_t *local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  code *local_200;
  undefined8 local_1f8;
  code *local_1f0;
  undefined8 local_1e8;
  code *local_1e0;
  code *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_81;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_29;
  
  local_120 = auStack_2f8;
  local_2b0 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_238 = 0;
  local_240 = 0;
  local_230 = 0;
  local_228 = 0;
  local_218 = 0;
  local_220 = 0;
  local_210 = 0;
  local_200 = (code *)0x0;
  local_208 = 0;
  local_1f0 = (code *)0x0;
  local_1f8 = 0;
  local_1e0 = (code *)0x0;
  local_1e8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_128 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_00c52d30();
  *(undefined1 *)((longlong)param_1 + 0x1829) = 0;
  uVar6 = FUN_00f836e0(&PTR_FUN_00f82198,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02003c70 = uVar6;
  uVar6 = FUN_007ffbe0(DAT_035667b8);
  *(undefined8 *)PTR_DAT_02001598 = uVar6;
  lVar7 = FUN_01a64090(&PTR_FUN_01a5d408,1,param_1);
  param_1[0x4a2] = lVar7;
  lVar7 = *(longlong *)PTR_DAT_02004030;
  *(longlong **)(lVar7 + 0x238) = param_1;
  *(code **)(lVar7 + 0x230) = FUN_01ca3ec0;
  lVar7 = *(longlong *)PTR_DAT_02004030;
  *(longlong **)(lVar7 + 0x2a8) = param_1;
  *(code **)(lVar7 + 0x2a0) = FUN_01ca3fb0;
  lVar7 = FUN_017105e0(0);
  param_1[0x4a4] = lVar7;
  FUN_007e2f80(param_1[0x237],0);
  FUN_007e2f80(param_1[0x25e],0);
  FUN_007e2f80(param_1[0x25d],1);
  FUN_007e2f80(param_1[0x25e],1);
  cVar2 = FUN_01b1fd70();
  if (cVar2 != '\0') {
    FUN_007e2f80(param_1[0x25d],0);
    FUN_007e2f80(param_1[0x25e],0);
  }
  *(undefined8 *)PTR_DAT_020044c0 = 0;
  param_1[0x4e7] = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  local_2d8 = L"TINA.INI";
  FUN_00416cd0(&local_128,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01c6b99c);
  lVar7 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_128);
  param_1[0x497] = lVar7;
  uVar4 = FUN_00f06890(L"EnableStatistics",0);
  FUN_007e2f80(param_1[0x263],uVar4);
  lVar7 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  param_1[0x31e] = lVar7;
  local_90 = (longlong *)param_1[0x31e];
  (**(code **)(*local_90 + 0x50))(local_90,L"OpenTSCDlg");
  FUN_00414ad0(local_90 + 0x20,&DAT_01c6ba20);
  FUN_00414ad0(local_90 + 0x1c,
               L"Schematics & Macro (*.TSC;*.SCH;*.TSM)|*.TSC;*.SCH;*.TSM|Macro (*.TSM)|*.TSM|PSpice circuit file (*.CIR;*.LIB)|*.CIR;*.LIB"
              );
  FUN_00c78ad0(local_90,L"Open Schematic");
  *(undefined4 *)(local_90 + 0x1b) = 0x80254;
  local_2d8 = L"\\User Examples";
  FUN_00416cd0(&local_160,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010);
  local_158 = local_160;
  local_2d8 = L"\\Examples\\Infineon";
  FUN_00416cd0(&local_168,3,L"Infineon Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_150 = local_168;
  local_2d8 = L"\\Examples\\Texas Instruments";
  FUN_00416cd0(&local_170,3,L"TI Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_148 = local_170;
  local_2d8 = L"\\Examples";
  FUN_00416cd0(&local_178,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_140 = local_178;
  local_2d8 = L"\\Macrolib";
  FUN_00416cd0(&local_180,3,L"User Macros|",*(undefined8 *)PTR_DAT_02005010);
  local_138 = local_180;
  local_2d8 = L"\\Macrolib";
  FUN_00416cd0(&local_188,3,L"Tina Macros|",*(undefined8 *)PTR_DAT_020049a0);
  local_130 = local_188;
  (**(code **)(*local_90 + 0x130))(local_90,&local_158,5);
  FUN_0177d6b0(local_90,1);
  local_90[0x29] = (longlong)param_1;
  local_90[0x28] = (longlong)FUN_01ca2b00;
  lVar7 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  param_1[0x321] = lVar7;
  local_98 = (longlong *)param_1[0x321];
  (**(code **)(*local_98 + 0x50))(local_98,L"SaveTSCDlg");
  FUN_0177dd40(local_98,&DAT_01c6ba20);
  FUN_00414ad0(local_98 + 0x1c,
               L"Schematics|*.TSC|Tina V7 Schematics|*.TSC|Tina V9 Schematics|*.TSC|Tina V10 Schematics|*.TSC|Tina V11 Schematics|*.TSC|Tina V12&V14 Schematics|*.TSC"
              );
  *(undefined4 *)(local_98 + 0x1b) = 0x80116;
  *(undefined1 *)(local_98 + 0x2e) = 0;
  FUN_00c78ad0(local_98,L"Save Schematic");
  local_2d8 = L"\\User Examples";
  FUN_00416cd0(&local_1b0,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010);
  local_1a8 = local_1b0;
  local_2d8 = L"\\Examples\\Infineon";
  FUN_00416cd0(&local_1b8,3,L"Infineon Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_1a0 = local_1b8;
  local_2d8 = L"\\Examples\\Texas Instruments";
  FUN_00416cd0(&local_1c0,3,L"TI Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_198 = local_1c0;
  local_2d8 = L"\\Examples";
  FUN_00416cd0(&local_1c8,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_190 = local_1c8;
  (**(code **)(*local_98 + 0x130))(local_98,&local_1a8,3);
  FUN_0177d310(local_98,L"Embed every macro in circuit",0);
  lVar7 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  param_1[799] = lVar7;
  local_a0 = (longlong *)param_1[799];
  (**(code **)(*local_a0 + 0x50))(local_a0,L"OpenTSMDlg");
  FUN_00414ad0(local_a0 + 0x20,&DAT_01c6bf48);
  FUN_00414ad0(local_a0 + 0x1c,L"Macro (*.TSM)|*.TSM");
  FUN_00c78ad0(local_a0,L"Insert Macro");
  *(undefined4 *)(local_a0 + 0x1b) = 0x80214;
  local_2d8 = L"\\Macrolib";
  FUN_00416cd0(&local_1e0,3,L"User Macros|",*(undefined8 *)PTR_DAT_02005010);
  local_1d8 = local_1e0;
  local_2d8 = L"\\Macrolib";
  FUN_00416cd0(&local_1e8,3,L"Tina Macros|",*(undefined8 *)PTR_DAT_020049a0);
  local_1d0 = (longlong *)local_1e8;
  (**(code **)(*local_a0 + 0x130))(local_a0,&local_1d8,1);
  FUN_0177d310(local_a0,L"Embed macro in circuit",1);
  uVar3 = (**(code **)(*(longlong *)param_1[0x497] + 0x30))
                    ((longlong *)param_1[0x497],L"Schematic Editor",L"EnableMacroEmbedding",0);
  *(undefined1 *)((longlong)local_a0 + 0x411) = uVar3;
  lVar7 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  param_1[0x322] = lVar7;
  local_a8 = (longlong *)param_1[0x322];
  (**(code **)(*local_a8 + 0x50))(local_a8,L"SaveTSMDlg");
  FUN_0177dd40(local_a8,&DAT_01c6bf48);
  FUN_00414ad0(local_a8 + 0x1c,
               L"Macro (*.TSM)|*.TSM|Tina V7 Macro (*.TSM)|*.TSM|Tina V9 Macro (*.TSM)|*.TSM|Tina V10 Macro (*.TSM)|*.TSM|Tina V11 Macro (*.TSM)|*.TSM|Tina V12&V14 Macro (*.TSM)|*.TSM"
              );
  FUN_00c78ad0(local_a8,L"Save Macro");
  *(undefined4 *)(local_a8 + 0x1b) = 0x80116;
  local_2d8 = L"\\Macrolib";
  FUN_00416cd0(&local_1f0,3,L"User Macros|",*(undefined8 *)PTR_DAT_02005010);
  local_1d8 = local_1f0;
  local_2d8 = L"\\Macrolib";
  FUN_00416cd0(&local_1f8,3,L"Tina Macros|",*(undefined8 *)PTR_DAT_020049a0);
  local_1d0 = (longlong *)local_1f8;
  (**(code **)(*local_a8 + 0x130))(local_a8,&local_1d8,1);
  lVar7 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  param_1[800] = lVar7;
  local_b0 = (longlong *)param_1[800];
  (**(code **)(*local_b0 + 0x50))(local_b0,L"ImportBanDlg");
  FUN_00414ad0(local_b0 + 0x20,&DAT_01c6c22c);
  FUN_00414ad0(local_b0 + 0x1c,L"Back-annotation (*.BAN)|*.BAN");
  FUN_00c78ad0(local_b0,L"Import file");
  *(undefined4 *)(local_b0 + 0x1b) = 0x80214;
  local_2d8 = L"\\User Examples";
  FUN_00416cd0(&local_200,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010);
  local_1d8 = local_200;
  local_2d8 = L"\\Examples";
  FUN_00416cd0(&local_208,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0);
  local_1d0 = (longlong *)local_208;
  (**(code **)(*local_b0 + 0x130))(local_b0,&local_1d8,1);
  lVar7 = FUN_00c617e0(&PTR_FUN_00c61048,1,param_1);
  param_1[0x323] = lVar7;
  local_b8 = (longlong *)param_1[0x323];
  (**(code **)(*local_b8 + 0x50))(local_b8,L"ImportWMFDlg");
  FUN_00414ad0(local_b8 + 0x1c,
               L"All Picture Files (*.EMF;*.WMF;*.BMP;*.JPG;*.JPEG;*.JPE;*.JFIF;*.GIF;*.PNG)|*.EMF;*.WMF;*.BMP;*.JPG;*.JPEG;*.JPE;*.JFIF;*.GIF;*.PNG|Windows Metafile (*.EMF;*.WMF)|*.EMF;*.WMF|Bitmap File (*.BMP)|*.BMP|JPEG File (*.JPG;*.JPEG;*.JPE;*.JFIF)|*.JPG;*.JPEG;*.JPE;*.JFIF|GIF File (*.GIF)|*.GIF|PNG File (*.PNG)|*.PNG"
              );
  *(undefined4 *)(local_b8 + 0x1b) = 0x80214;
  FUN_00414ad0(local_b8 + 0x1f,L"Import file");
  FUN_01d42920(L"TSchematicEditor.FormCreate.0",0);
  FUN_01c8ef50(param_1);
  FUN_00409e20();
  plVar8 = (longlong *)FUN_006d6380(param_1[0x26a]);
  (**(code **)(*plVar8 + 0x90))(plVar8);
  *(undefined1 *)(param_1 + 0x312) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1891) = 0;
  FUN_007e2f80(param_1[0x1b7],0);
  FUN_007e2f80(param_1[0x1bb],0);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_0064dbe0(param_1[0x26a],0);
    FUN_0064dbe0(param_1[0x29e],0);
  }
  FUN_01c8d1f0(param_1);
  local_29 = 0;
  FUN_016fc360(&local_210);
  FUN_01d42920(L"TSchematicEditor.FormCreate.1",0);
  param_1[0x4f1] = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ee] = 0;
  lVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  param_1[0x4ef] = lVar7;
  lVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  param_1[0x4f0] = lVar7;
  param_1[0x4f2] = 0;
  param_1[0x367] = 0;
  dVar1 = (double)FUN_01ca52b0(param_1);
  *(float *)((longlong)param_1 + 0x1924) = (float)dVar1;
  FUN_00414b50(&local_50,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  FUN_01c77470(param_1,0);
  FUN_01c90a60(param_1,param_1[0xec]);
  FUN_01d42920(L"TSchematicEditor.FormCreate.2",0);
  param_1[0x36b] = 0;
  if (DAT_01fe777c == '\0') {
    FUN_01c691d0(param_1,0x21);
  }
  FUN_01c73f70(param_1,param_2);
  FUN_00416ba0(&local_228,*(undefined8 *)PTR_DAT_020049a0,L"\\default.prm");
  cVar2 = FUN_00440a20(local_228,1);
  if ((cVar2 != '\0') && (DAT_01fe777c == '\0')) {
    FUN_00416ba0(&local_230,*(undefined8 *)PTR_DAT_020049a0,L"\\default.prm");
    local_2d8 = (wchar_t *)0x0;
    FUN_014aeb50(local_230,0,PTR_DAT_02004010 + 200,PTR_DAT_02004010 + 600);
    puVar9 = (undefined8 *)(PTR_DAT_02004010 + 200);
    puVar10 = (undefined8 *)(PTR_DAT_02001120 + 200);
    for (lVar7 = 0x32; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if (local_50 != 0) {
    FUN_00441a10(&local_240,local_50);
    FUN_0043e130(&local_238,local_240);
    iVar5 = FUN_00416db0(local_238,L".BAN");
    if (iVar5 == 0) {
      FUN_01bb4cc0(local_50,0,1);
    }
    else {
      FUN_00416ba0(&local_248,&DAT_01c6c6dc,local_50);
      local_2d8 = (wchar_t *)0x0;
      local_2d0 = 0;
      local_2c8 = 1;
      FUN_01c681b0(param_1,local_248,0,0);
    }
  }
  dVar1 = (double)FUN_01ca52b0(param_1);
  *(float *)((longlong)param_1 + 0x1924) = (float)dVar1;
  plVar8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x36f] = (longlong)plVar8;
  (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1[0x170] + 0x4f0));
  FUN_01c83de0(param_1,0);
  FUN_01d42920(L"TSchematicEditor.FormCreate.3",0);
  local_2d8 = *(wchar_t **)(*(longlong *)PTR_DAT_02004030 + 0xc0);
  FUN_00416cd0(*(longlong *)PTR_DAT_02004030 + 0xc0,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c6b99c)
  ;
  FUN_01c67f20(param_1);
  FUN_01d42920(L"TSchematicEditor.FormCreate.4",0);
  *(undefined1 *)((longlong)param_1 + 0x182a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x182b) = 0;
  FUN_0064dbe0(param_1[0x143],0);
  FUN_007e2f80(param_1[0x22c],*PTR_DAT_02004350);
  FUN_007e2f80(param_1[0x22d],*PTR_DAT_020011e0);
  lVar7 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  param_1[0x36d] = lVar7;
  FUN_0060a8f0(lVar7,PTR_IMAGE_DOS_HEADER_0200c280,L"bmYes");
  lVar7 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  param_1[0x36e] = lVar7;
  FUN_0060a8f0(lVar7,PTR_IMAGE_DOS_HEADER_0200c280,L"bmTouched");
  *(uint *)(param_1[0x142] + 0xa0) = *(uint *)(param_1[0x142] + 0xa0) & 0xfffffffd;
  (**(code **)(*(longlong *)param_1[0x269] + 0x148))((longlong *)param_1[0x269],0);
  (**(code **)(*(longlong *)param_1[0x26a] + 0x148))((longlong *)param_1[0x26a],0);
  iVar5 = FUN_01b231e0();
  if ((iVar5 == 1) &&
     ((6 < *(int *)PTR_DAT_02001bd8 ||
      ((*(int *)PTR_DAT_02001bd8 == 6 && (1 < *(int *)PTR_DAT_02003a08)))))) {
    (**(code **)(*param_1 + 0x148))(param_1,3);
  }
  FUN_0065afd0(param_1,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0082a6c0(param_1[0x2a1],DAT_01fe7778 == '\0');
  lVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  param_1[0x4a0] = lVar7;
  FUN_007e2da0(param_1[0xe7],0);
  FUN_007e2da0(param_1[0xe8],0);
  FUN_007e2da0(param_1[0x1f8],0);
  FUN_007e2da0(param_1[0xe9],0);
  FUN_007e2da0(param_1[0xea],0);
  FUN_007e2da0(param_1[0xec],0);
  FUN_007e2da0(param_1[0x19d],0);
  FUN_007e2da0(param_1[0xed],0);
  (**(code **)(*(longlong *)param_1[0x17e] + 0x128))((longlong *)param_1[0x17e],0);
  FUN_007e2da0(param_1[0x157],0);
  FUN_007e2da0(param_1[0x2ec],0);
  (**(code **)(*(longlong *)param_1[0x2f3] + 0x128))((longlong *)param_1[0x2f3],0);
  cVar2 = FUN_01b1ee00();
  if (cVar2 == '\0') {
    local_2d8 = L"pcb.exe";
    FUN_00416cd0(&local_250,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c6b99c);
    uVar6 = FUN_00440a20(local_250,1);
    if ((char)uVar6 == '\0') goto LAB_01c6aca2;
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  else {
LAB_01c6aca2:
    uVar4 = 0;
  }
  (**(code **)(*(longlong *)param_1[0x235] + 0x128))((longlong *)param_1[0x235],uVar4);
  uVar4 = (**(code **)(*(longlong *)param_1[0x235] + 0xf0))((longlong *)param_1[0x235]);
  FUN_007e2da0(param_1[0x239],uVar4);
  local_48 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
  local_40 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
  FUN_007e2c60(local_48,L"Auto Test...");
  (**(code **)(*local_48 + 0x50))(local_48,L"mnAutoTest");
  local_48[0x23] = (longlong)param_1;
  local_48[0x22] = (longlong)FUN_01ca1750;
  FUN_01b1ff60(&local_258);
  local_2d8 = L"/";
  local_2d0 = local_258;
  FUN_00416cd0(&local_58,4,L"AutoTestEnabled/",*(undefined8 *)PTR_DAT_020043d0);
  FUN_00414480(&local_60);
  iVar5 = FUN_0043e210(local_58,local_60);
  FUN_007e2f80(local_48,iVar5 == 0);
  uVar4 = (**(code **)(*(longlong *)param_1[0x497] + 0x20))
                    ((longlong *)param_1[0x497],L"Schematic Editor",L"GridPtSize",1);
  *(undefined4 *)PTR_DAT_02003250 = uVar4;
  local_81 = FUN_01602f00();
  FUN_007e2da0(param_1[0x2ed],local_81);
  FUN_007e2f80(param_1[0x2ed],local_81);
  FUN_007e2c60(local_40,L"Model Test");
  (**(code **)(*local_40 + 0x50))(local_40,L"mnDModelTest");
  local_40[0x23] = (longlong)param_1;
  local_40[0x22] = (longlong)FUN_01ca17a0;
  FUN_01b1ff60(&local_260);
  local_2d8 = L"/";
  local_2d0 = local_260;
  FUN_00416cd0(&local_58,4,L"ModelTestEnabled/",*(undefined8 *)PTR_DAT_020043d0);
  FUN_00414480(&local_60);
  cVar2 = FUN_01b23010();
  if (cVar2 != '\0') {
    uVar6 = (**(code **)(*(longlong *)param_1[0x497] + 0x30))
                      ((longlong *)param_1[0x497],L"Analysis Setup",L"EnableModelTest",0);
    if ((char)uVar6 != '\0') {
      uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      goto LAB_01c6af4a;
    }
  }
  uVar4 = 0;
LAB_01c6af4a:
  FUN_007e2f80(local_40,uVar4);
  lVar7 = param_1[0x153];
  uVar4 = FUN_007e34a0(lVar7,param_1[0x1b1]);
  FUN_007e31e0(lVar7,uVar4,local_48);
  FUN_007e50d0(param_1[0x153],local_48);
  if (*(char *)((longlong)local_40 + 0x86) == '\0') {
    FUN_007e50b0(param_1[0x153],local_48);
  }
  lVar7 = param_1[0x153];
  uVar4 = FUN_007e34a0(lVar7,param_1[0x1b1]);
  FUN_007e31e0(lVar7,uVar4,local_40);
  if (*(char *)((longlong)local_48 + 0x86) == '\0') {
    FUN_007e50d0(param_1[0x153],local_40);
  }
  FUN_007e50b0(param_1[0x153],local_40);
  FUN_007e2f80(param_1[0x228],*(undefined1 *)((longlong)local_48 + 0x86));
  FUN_01c64910(param_1);
  FUN_007e2f80(param_1[0x169],0);
  if (*(longlong *)PTR_DAT_02002c40 != 0) {
    uVar6 = FUN_00c85d10(*(undefined8 *)PTR_DAT_02002c40,*PTR_DAT_02002480);
    FUN_01b36cb0(param_1[0xe0],uVar6);
  }
  FUN_01c849f0(param_1);
  FUN_01c91f20(param_1);
  FUN_01b770b0(param_1,*(undefined8 *)PTR_DAT_02005010);
  FUN_00416dc0(param_1[0x31e] + 0x100,L".TSC",2,3);
  local_c0 = param_1[0x31e];
  FUN_0177d560(local_c0,*(undefined8 *)PTR_DAT_02004278);
  FUN_00416dc0(&local_268,L".TSC",2,3);
  FUN_0177dd40(param_1[0x321],local_268);
  FUN_00416ba0(&local_270,*(undefined8 *)PTR_DAT_02005010,L"\\User Examples\\");
  FUN_0177d560(param_1[0x321],local_270);
  FUN_00414ad0(param_1[0x15a] + 0x100,&DAT_01c6c9a0);
  local_c8 = param_1[0x15a];
  FUN_00724420(local_c8,*(undefined8 *)PTR_DAT_020049a0);
  FUN_00414480(param_1[0x13c] + 0x100);
  local_d0 = param_1[0x13c];
  FUN_00724420(local_d0,*(undefined8 *)PTR_DAT_02004278);
  FUN_00414480(param_1[0x323] + 0x100);
  local_d8 = param_1[0x323];
  FUN_01b22c50(&local_278,0x27);
  FUN_00724420(local_d8,local_278);
  FUN_00414480(param_1[0x168] + 0x100);
  local_e0 = param_1[0x168];
  FUN_00416ba0(&local_280,*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  FUN_00724420(local_e0,local_280);
  FUN_00414480(param_1[0x253] + 0x100);
  local_e8 = param_1[0x253];
  FUN_01b22c50(&local_288,0x27);
  FUN_00724420(local_e8,local_288);
  FUN_00414ad0(param_1[799] + 0x100,&DAT_01c6c9b4);
  local_f0 = param_1[799];
  FUN_00416ba0(&local_290,*(undefined8 *)PTR_DAT_020049a0,L"\\Macrolib");
  FUN_0177d560(local_f0,local_290);
  FUN_0177dd40(param_1[0x322],&DAT_01c6c9b4);
  local_f8 = param_1[0x322];
  FUN_00416ba0(&local_298,*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
  FUN_0177d560(local_f8,local_298);
  FUN_00414ad0(param_1[0x1fd] + 0x100,&DAT_01c6c9c8);
  local_100 = param_1[0x1fd];
  FUN_00724420(local_100,*(undefined8 *)PTR_DAT_020049a0);
  FUN_00414ad0(param_1[800] + 0x100,&DAT_01c6c9dc);
  local_108 = param_1[800];
  FUN_0177d560(local_108,*(undefined8 *)PTR_DAT_02004278);
  FUN_00414ad0(param_1[0x24b] + 0x100,&DAT_01c6c9f0);
  local_110 = param_1[0x24b];
  FUN_00724420(local_110,*(undefined8 *)PTR_DAT_02004278);
  *PTR_DAT_02003020 = *PTR_DAT_020052b8 == '\0';
  FUN_00801e40(param_1,param_1[0x142]);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_00800700(param_1,0);
  }
  FUN_01d42920(L"TSchematicEditor.FormCreate.5",0);
  if (*PTR_DAT_020052b8 == '\0') {
    FUN_007e2f80(param_1[0xf1],1);
    FUN_007e2f80(param_1[0xf2],1);
    FUN_007e2f80(param_1[0xf3],1);
  }
  else {
    FUN_007e2f80(param_1[0xf1],0);
    FUN_007e2f80(param_1[0xf2],0);
    FUN_007e2f80(param_1[0xf3],0);
  }
  cVar2 = FUN_01b23030();
  if (cVar2 != '\0') {
    FUN_007e2da0(param_1[0x252],0);
    FUN_007e2da0(param_1[0x2d1],0);
    (**(code **)(*(longlong *)param_1[0x2d9] + 0x128))((longlong *)param_1[0x2d9],0);
    FUN_007e2da0(param_1[0x246],0);
    FUN_007e2da0(param_1[0x2dd],0);
    FUN_007e2da0(param_1[0x2e0],0);
    FUN_007e2da0(param_1[0x2e1],0);
    FUN_007e2da0(param_1[0x2e7],0);
    FUN_007e2da0(param_1[0x2e3],0);
  }
  param_1[0x49e] = param_1[0xe3];
  *PTR_DAT_02005770 = 0;
  FUN_015f9c70(&local_2a8);
  local_2d8 = (wchar_t *)local_2a8;
  FUN_00416cd0(&local_2a0,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c6b99c);
  uVar3 = FUN_00440a20(local_2a0,1);
  *PTR_DAT_02003d98 = uVar3;
  FUN_01d42920(L"TSchematicEditor.FormCreate.6",0);
  param_1[0x31b] = 0;
  param_1[0x31c] = 0;
  *(undefined1 *)(param_1 + 0x31d) = 0;
  *(undefined8 *)PTR_DAT_02003610 = 0;
  uVar6 = FUN_0065b870(param_1);
  thunk_FUN_03ea7391(uVar6,0xffffffff);
  uVar6 = FUN_014c0b50();
  local_1d8 = FUN_01ca09b0;
  local_1d0 = param_1;
  FUN_014c17d0(uVar6,&local_1d8);
  if (0 < *(int *)PTR_DAT_02002718) {
    local_1d8 = FUN_01ca0510;
    local_1d0 = param_1;
    FUN_00f833f0(&local_1d8,*(undefined4 *)PTR_DAT_02002718);
  }
  uVar4 = FUN_0160bfe0();
  FUN_007e2f80(param_1[0x2d3],uVar4);
  *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
  local_2d8 = L"\\SetRealDPI.exe\"";
  FUN_00416cd0(&local_2b0,3,&DAT_01c6ca94,*(undefined8 *)PTR_DAT_020049a0);
  FUN_01d44af0(local_2b0,0,0);
  FUN_00414560(&local_2b0,0x1b);
  FUN_00414560(&local_1c8,4);
  FUN_00414560(&local_188,6);
  FUN_00414480(&local_128);
  FUN_00414560(&local_60,3);
  return;
}

