/* Ghidra address: 018d44d0 */
/* Ghidra symbol: FUN_018d44d0 */


undefined8 * FUN_018d44d0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x208);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,param_3);
  FUN_00416ba0(param_2,&DAT_018d4608,local_20[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,param_3);
  if (local_28 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,param_3);
    FUN_00416cd0(param_2,3,*param_2,&DAT_018d4618,local_30);
  }
  FUN_00416ad0(param_2,&LAB_018d4628);
  FUN_00414560(&local_30,3);
  return param_2;
}

