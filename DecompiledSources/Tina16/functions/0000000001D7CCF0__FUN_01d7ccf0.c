/* Ghidra address: 01d7ccf0 */
/* Ghidra symbol: FUN_01d7ccf0 */


void FUN_01d7ccf0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  uVar2 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(uVar2,0xffffffff80000001);
  FUN_00416ba0(local_20,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(uVar2,local_20[0],1);
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_28);
    FUN_005eb630(uVar2,L"SettingsDir",local_28);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_30);
    FUN_005eb630(uVar2,L"CatalogDir",local_30);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_38);
    FUN_005eb630(uVar2,L"TempDir",local_38);
  }
  cVar1 = FUN_005ea880(uVar2,L"\\SOFTWARE\\DesignSoft\\TINALab II\\Directory",1);
  if (cVar1 != '\0') {
    FUN_005eb630(uVar2,L"TinaDir",*(undefined8 *)PTR_DAT_020049a0);
  }
  FUN_005ea630(uVar2);
  FUN_00410f20(uVar2);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_40);
  FUN_00b96df0(local_40);
  local_98 = L"fpeditor.ini";
  local_90 = L"layers.ini";
  local_88 = L"meas.ini";
  local_80 = L"3D Viewer.ini";
  local_78 = L"pcb.ini";
  local_70 = L"shapeDefs.ini";
  local_68 = L"TINA.INI";
  local_60 = L"tsuper.ini";
  local_58 = L"fpga_pinout.txt";
  local_50 = L"Edison5.ini";
  local_48 = L"VHDL\\vhdl_95_global.ini";
  FUN_01d7ca00(auStack_118,&local_98,10,0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_a0);
  FUN_00416ad0(&local_a0,L"\\User Examples");
  FUN_00b96df0(local_a0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_a8);
  FUN_00416ad0(&local_a8,L"\\Macrolib");
  FUN_00b96df0(local_a8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_b0);
  FUN_00416ad0(&local_b0,L"\\Buttons");
  FUN_00b96df0(local_b0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_b8);
  FUN_00416ad0(&local_b8,L"\\Spicelib");
  FUN_00b96df0(local_b8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_c0);
  FUN_00416ad0(&local_c0,L"\\Templates");
  FUN_00b96df0(local_c0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_c8);
  FUN_00416ad0(&local_c8,*(undefined8 *)PTR_DAT_02004c08);
  FUN_00b96df0(local_c8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_d0);
  FUN_00416ad0(&local_d0,L"\\VHDL\\MCU\\Include");
  FUN_00b96df0(local_d0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_e0);
  local_f8 = L"VHDL\\Packages";
  FUN_00416cd0(&local_d8,3,local_e0,&DAT_01d7d56c);
  FUN_00b96df0(local_d8);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_e8);
  FUN_00b96df0(local_e8);
  FUN_00414560(&local_e8,10);
  FUN_00414560(&local_40,4);
  FUN_00414480(local_20);
  return;
}

