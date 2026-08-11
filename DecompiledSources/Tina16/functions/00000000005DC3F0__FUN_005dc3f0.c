/* Ghidra address: 005dc3f0 */
/* Ghidra symbol: FUN_005dc3f0 */


void FUN_005dc3f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_004b3d70(plVar1,&local_28,param_2);
  FUN_00416780(&local_30,*(undefined2 *)(*(longlong *)(param_1 + 8) + 0x30));
  FUN_00416cd0(local_20,3,local_28,local_30,param_3);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8),param_2,0);
  FUN_00414560(&local_30,3);
  return;
}

