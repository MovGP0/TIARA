/* Ghidra address: 01773c50 */
/* Ghidra symbol: FUN_01773c50 */


undefined8 FUN_01773c50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x18) + 0x10) < 2) {
    FUN_017737a0(param_1,&local_20);
  }
  else {
    FUN_010b29c0(*(longlong *)(param_1 + 0x110),&local_20,1);
  }
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar2,local_20);
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30,param_3);
  uVar1 = FUN_0043fc00(local_30[0]);
  *param_4 = uVar1;
  FUN_00414ad0(param_2,local_20);
  FUN_00410f20(plVar2);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return param_2;
}

