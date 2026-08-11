/* Ghidra address: 01a59250 */
/* Ghidra symbol: FUN_01a59250 */


void FUN_01a59250(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_019cdfd0(*(undefined8 *)(param_1 + 0x2978));
  *(undefined1 *)(param_1 + 0x2b48) = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00f2d1d0(*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x50),&local_30);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
  FUN_00416cd0(local_40,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a59378,L"autotest.json");
  (**(code **)(*plVar1 + 0x100))(plVar1,local_40[0]);
  FUN_00410f20(plVar1);
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return;
}

