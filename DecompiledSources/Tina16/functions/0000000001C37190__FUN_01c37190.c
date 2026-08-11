/* Ghidra address: 01c37190 */
/* Ghidra symbol: FUN_01c37190 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c37190(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  _DAT_01fe6538 = (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) / 96.0;
  uVar2 = FUN_01602fb0();
  *(undefined1 *)(param_1 + 0xbfc) = uVar2;
  (**(code **)(**(longlong **)(param_1 + 0x890) + 0x278))(*(longlong **)(param_1 + 0x890));
  uVar9 = 0;
  do {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x890) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(PTR_PTR_02001780 + (uVar9 & 0xff) * 0x20));
    uVar7 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar7;
  } while (uVar7 != 0x10);
  (**(code **)(**(longlong **)(param_1 + 0x890) + 0x268))(*(longlong **)(param_1 + 0x890),0);
  plVar5 = (longlong *)FUN_01c22c60(&PTR_FUN_01c21238,1,*(undefined8 *)(param_1 + 0x6f8));
  *(longlong **)(param_1 + 0x900) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,*(undefined8 *)(param_1 + 0x6f8));
  FUN_0064c650(*(undefined8 *)(param_1 + 0x900),5);
  lVar1 = *(longlong *)(param_1 + 0x900);
  *(longlong *)(lVar1 + 0x598) = param_1;
  *(code **)(lVar1 + 0x590) = FUN_01c3f7f0;
  FUN_0064dfb0(lVar1,0);
  FUN_006eae90(*(undefined8 *)(param_1 + 0x738),1);
  (**(code **)(**(longlong **)(param_1 + 0x708) + 0x278))(*(longlong **)(param_1 + 0x708));
  iVar3 = FUN_006d7630();
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar6 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6b0),iVar8);
      FUN_006d68c0(uVar6,0);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x908) = 0;
  FUN_00414480(param_1 + 0x910);
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(undefined4 *)(param_1 + 0x928) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined1 *)(param_1 + 0x938) = 1;
  FUN_00414480(param_1 + 0x940);
  FUN_00414480(param_1 + 0x948);
  FUN_00414ad0(param_1 + 0x958,*(undefined8 *)PTR_DAT_020049a0);
  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x960) = uVar6;
  FUN_004af610(uVar6,*(undefined8 *)PTR_DAT_02004440,0,0);
  FUN_00c40440(*(undefined8 *)PTR_DAT_02004440,
               *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x4f0));
  *(undefined4 *)(param_1 + 0x970) = 0xffffffff;
  FUN_00414480(param_1 + 0x968);
  *(undefined8 *)(param_1 + 0x978) = 0;
  FUN_01c268a0(*(undefined8 *)(param_1 + 0x900),0x3ff0000000000000);
  uVar6 = FUN_00498310(0,0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x568) = uVar6;
  FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6c0));
  FUN_01c3bee0(param_1,param_1);
  FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6c0));
  *(undefined1 *)(param_1 + 0xbfa) = 0;
  *(undefined1 *)(param_1 + 0xbfb) = 0;
  *(undefined1 *)(param_1 + 0x951) = 0;
  *(undefined1 *)(param_1 + 0x952) = 0;
  uVar6 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  *(undefined8 *)(param_1 + 0xbf0) = uVar6;
  FUN_0177d560(uVar6,*(undefined8 *)(param_1 + 0x958));
  *(undefined4 *)(param_1 + 0xbc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbcc) = 0;
  *(undefined1 *)(param_1 + 0xbf8) = 0;
  *(undefined1 *)(param_1 + 0xbf9) = 0;
  plVar5 = *(longlong **)(param_1 + 0xbf0);
  (**(code **)(*plVar5 + 0x50))(plVar5,L"OpenMacroContentDlg");
  FUN_00414ad0(plVar5 + 0x20,&DAT_01c37a90);
  FUN_00414ad0(plVar5 + 0x1c,
               L"Schematics (*.TSC;*.SCH)|*.TSC;*.SCH|PSpice subcircuit file (*.CIR;*.LIB;*.MOD;*.SPI;*.TXT)|*.CIR;*.LIB;*.MOD;*.SPI;*.TXT|VHDL file (*.VHD)|*.VHD"
              );
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 3;
  FUN_00416ad0(plVar5 + 0x1c,L"|Verilog file (*.V)|*.V");
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
  FUN_00416ad0(plVar5 + 0x1c,L"|Verilog-A file (*.VA)|*.VA");
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
  FUN_00416ad0(plVar5 + 0x1c,L"|Verilog-AMS file (*.VAMS)|*.VAMS");
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
  FUN_00416ad0(plVar5 + 0x1c,L"|SystemC executable (*.DLL)|*.DLL");
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
  FUN_00416ad0(plVar5 + 0x1c,L"|SystemVerilog file (*.SV)|*.SV");
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
  FUN_00416ad0(plVar5 + 0x1c,L"|VHDL-AMS file (*.AMS)|*.AMS");
  *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
  *(undefined4 *)(param_1 + 0xbc4) = *(undefined4 *)(param_1 + 0xbcc);
  if (*(char *)(param_1 + 0xbfc) != '\0') {
    FUN_00416ad0(plVar5 + 0x1c,L"|Tensorflow model file (*.TFLITE)|*.TFLITE");
    *(int *)(param_1 + 0xbcc) = *(int *)(param_1 + 0xbcc) + 1;
    *(undefined4 *)(param_1 + 0xbc8) = *(undefined4 *)(param_1 + 0xbcc);
  }
  *(undefined4 *)(plVar5 + 0x1b) = 0x80214;
  FUN_00c78ad0(plVar5,L"Open File");
  FUN_00416cd0(&local_40,3,L"Private catalog folder|",*(undefined8 *)PTR_DAT_02004438,L"\\MacroLib")
  ;
  local_38 = local_40;
  FUN_00416cd0(&local_48,3,L"Shared catalog folder|",*(undefined8 *)PTR_DAT_02001340,L"\\MacroLib");
  local_30 = local_48;
  FUN_00416cd0(&local_50,3,L"Main Tina folder|",*(undefined8 *)(param_1 + 0x958),L"\\MacroLib");
  local_28 = local_50;
  FUN_00416cd0(&local_58,3,L"Tina examples|",*(undefined8 *)(param_1 + 0x958),L"\\EXAMPLES\\SPICE");
  local_20 = local_58;
  (**(code **)(*plVar5 + 0x130))(plVar5,&local_38,3);
  *(undefined4 *)(plVar5 + 0x1d) = 1;
  FUN_00416ba0(&local_60,*(undefined8 *)(param_1 + 0x958),L"\\MacroLib");
  FUN_0177d560(*(undefined8 *)(param_1 + 0xbf0),local_60);
  uVar6 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  *(undefined8 *)(param_1 + 0xbe8) = uVar6;
  plVar5 = *(longlong **)(param_1 + 0xbe8);
  (**(code **)(*plVar5 + 0x50))(plVar5,L"SaveTSMDlg");
  FUN_0177dd40(plVar5,&DAT_01c37f54);
  FUN_00414ad0(plVar5 + 0x1c,L"Schematics Macro (*.TSM)|*.TSM");
  *(undefined4 *)(plVar5 + 0x1b) = 0x80116;
  FUN_00c78ad0(plVar5,L"Save Macro");
  FUN_00416cd0(&local_78,3,L"User Macros|",*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
  local_70 = local_78;
  FUN_00416cd0(&local_80,3,L"Tina Macros|",*(undefined8 *)PTR_DAT_020049a0,L"\\Macrolib");
  local_68 = local_80;
  (**(code **)(*plVar5 + 0x130))(plVar5,&local_70,1);
  FUN_0177d310(plVar5,L"Encrypt macro",0);
  FUN_00416ba0(&local_88,*(undefined8 *)PTR_DAT_02005010,L"\\Macrolib");
  FUN_0177d560(*(undefined8 *)(param_1 + 0xbe8),local_88);
  FUN_00416cd0(&local_90,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01c38074,L"TINA.INI");
  plVar5 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_90);
  uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,L"Schematic Editor",L"EnableMacroEmbedding",0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8c8),uVar4);
  FUN_00410f20(plVar5);
  FUN_0064cf60(param_1,0x469);
  uVar6 = FUN_0154bad0(&DAT_01546d78,1);
  *(undefined8 *)(param_1 + 3000) = uVar6;
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_60,5);
  return;
}

