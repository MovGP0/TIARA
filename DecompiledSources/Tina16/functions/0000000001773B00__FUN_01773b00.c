/* Ghidra address: 01773b00 */
/* Ghidra symbol: FUN_01773b00 */


void FUN_01773b00(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_30 [2];
  undefined8 *local_20;
  
  local_30[0] = 0;
  local_20 = (undefined8 *)0x0;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x18) + 0x10) == 1) {
    FUN_017737a0(param_1,&local_20);
  }
  else {
    FUN_010b29c0(*(longlong *)(param_1 + 0x110),&local_20,1);
  }
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x18) + 0x10) == 1) {
    FUN_010b2d80(*(longlong *)(param_1 + 0x110),local_20,L"flags");
  }
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar1,local_20);
  FUN_0043f750(local_30,param_3);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,local_30[0]);
  FUN_004b37d0(plVar1,&local_20);
  FUN_010b2950(*(undefined8 *)(param_1 + 0x110),1,local_20);
  FUN_00410f20(plVar1);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

