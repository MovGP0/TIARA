/* Ghidra address: 017a0070 */
/* Ghidra symbol: FUN_017a0070 */


void FUN_017a0070(longlong param_1)

{
  longlong *plVar1;
  int local_40 [2];
  undefined1 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,L" %d of %d devices");
  local_40[0] = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                          (*(longlong **)(param_1 + 0x758));
  local_40[0] = local_40[0] + 1;
  local_38 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
  local_30 = (**(code **)(*plVar1 + 0x28))(plVar1);
  local_28 = 0;
  FUN_00442f70(local_20,local_10,local_40,1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0xa68),local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

