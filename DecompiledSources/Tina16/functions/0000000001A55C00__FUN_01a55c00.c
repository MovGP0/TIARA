/* Ghidra address: 01a55c00 */
/* Ghidra symbol: FUN_01a55c00 */


undefined8 FUN_01a55c00(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_28 = 0;
  local_70 = 0;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(param_2);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = FUN_00f309b0(&LAB_00f23b78,1);
  FUN_01a55aa0(auStack_b8,L"Clock generators");
  FUN_01a55aa0(auStack_b8,L"Oscillators");
  FUN_00f2d1d0(local_38,&local_70);
  (**(code **)(*local_40 + 0x78))(local_40,local_70);
  local_98 = L"a1.json";
  FUN_00416cd0(&local_88,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a55e8c);
  (**(code **)(*local_40 + 0x100))(local_40,local_88);
  FUN_00414ad0(param_2,local_70);
  FUN_00410f20(local_20);
  FUN_00410f20(local_40);
  FUN_00410f20(local_38);
  FUN_00414480(&local_88);
  FUN_00414560(&local_70,6);
  FUN_00414560(&local_30,2);
  return param_2;
}

