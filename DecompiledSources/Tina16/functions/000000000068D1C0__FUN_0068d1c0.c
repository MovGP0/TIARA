/* Ghidra address: 0068d1c0 */
/* Ghidra symbol: FUN_0068d1c0 */


void FUN_0068d1c0(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_60 = auStack_88;
  local_38[0] = 0x201;
  thunk_FUN_03cc0d62(local_40);
  uVar1 = FUN_0064d3a0(param_1,local_40);
  local_48._0_2_ = (undefined2)uVar1;
  local_48._4_2_ = (undefined2)((ulonglong)uVar1 >> 0x20);
  local_4c = CONCAT22(local_48._4_2_,(undefined2)local_48);
  local_28 = local_4c;
  local_30 = 0;
  local_20 = 0;
  local_48 = uVar1;
  (**(code **)(*param_1 + -0x38))(param_1,local_38);
  local_38[0] = 0x202;
  *(undefined1 *)((longlong)param_1 + 0x499) = 1;
  (**(code **)(*param_1 + -0x38))(param_1,local_38);
  *(undefined1 *)((longlong)param_1 + 0x499) = 0;
  return;
}

