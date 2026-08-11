/* Ghidra address: 01a5a610 */
/* Ghidra symbol: FUN_01a5a610 */


void FUN_01a5a610(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_01a5a4c0(&local_30);
  local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x18);
  local_60 = 0x11;
  FUN_00442f70(&local_40,L"tina_ai%s",&local_68,0);
  cVar2 = FUN_01b22620(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 8),local_40,&local_54,0);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"LLamaFile_StartServer");
    FUN_004134c0(uVar3);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f0) + 0x10);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,local_54);
  FUN_00450070(&local_70,local_48,&DAT_01a5a944,&DAT_01a5a954,1);
  FUN_00414b50(&local_48,local_70);
  FUN_00416ba0(&local_38,local_30,L"\\.lmstudio\\models\\");
  FUN_00416cd0(&local_40,4,&DAT_01a5a99c,local_38,local_48,&DAT_01a5a99c);
  FUN_00416cd0(&local_50,5,&DAT_01a5a99c,*(undefined8 *)PTR_DAT_020049a0,L"\\Vhdl\\MCU\\",
               *(undefined8 *)(param_1 + 0x870),&DAT_01a5a99c);
  local_a0 = local_50;
  local_98 = 0x11;
  local_90 = local_40;
  local_88 = 0x11;
  local_80 = FUN_01a5a510(param_1);
  local_78 = 0;
  FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x888),&local_a0,2);
  FUN_010563e0(local_20[0],*(undefined8 *)(param_1 + 0x2ba0),param_2);
  *param_3 = 1;
  FUN_00414480(&local_70);
  FUN_00414560(&local_50,7);
  return;
}

