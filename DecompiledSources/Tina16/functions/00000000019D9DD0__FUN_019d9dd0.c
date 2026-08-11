/* Ghidra address: 019d9dd0 */
/* Ghidra symbol: FUN_019d9dd0 */


void FUN_019d9dd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
  (**(code **)(*plVar1 + 0x38))(plVar1,local_30);
  FUN_00414ad0(param_1 + 0x7f0,local_30[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  FUN_00414ad0(param_1 + 0x7f8,local_38);
  FUN_013b7dc0(*(undefined8 *)(param_1 + 0x7f0),*(undefined8 *)(param_1 + 0x7f8),local_20[0]);
  FUN_019d9a50(param_1);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

