/* Ghidra address: 01a68fa0 */
/* Ghidra symbol: FUN_01a68fa0 */


void FUN_01a68fa0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = FUN_007fc180(&PTR_FUN_012e9a18,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_012e9e60(local_28,L"Working... please wait");
  FUN_008059a0(local_28);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00f2d1d0(*(undefined8 *)(param_1 + 0x768),&local_30);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x78))(local_20,local_30);
  local_58 = L"curve_prop.json";
  FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a69254);
  (**(code **)(*local_20 + 0x100))(local_20,local_48);
  FUN_01a68760(param_1);
  cVar1 = FUN_01a68bd0(param_1,&local_38);
  if (cVar1 == '\0') {
    FUN_0072d440(local_38,1,4,0);
  }
  else {
    FUN_01a69610(param_1);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x770));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x768));
  *(undefined8 *)(param_1 + 0x768) = 0;
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414480(&local_48);
  FUN_00414560(&local_38,2);
  return;
}

