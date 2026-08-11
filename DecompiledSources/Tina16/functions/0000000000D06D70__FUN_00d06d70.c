/* Ghidra address: 00d06d70 */
/* Ghidra symbol: FUN_00d06d70 */


void FUN_00d06d70(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_2c;
  longlong local_28 [3];
  
  local_40 = auStack_68;
  local_28[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
  FUN_00d07930(*(undefined8 *)(param_1 + 8),local_28);
  for (local_2c = 0; (local_28[0] != 0 && ((0 < param_2 || (local_2c < param_2))));
      local_2c = local_2c + 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28[0]);
    FUN_00d07930(*(undefined8 *)(param_1 + 8),local_28);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18));
  FUN_00414480(local_28);
  return;
}

