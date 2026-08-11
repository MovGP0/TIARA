/* Ghidra address: 00848bf0 */
/* Ghidra symbol: FUN_00848bf0 */


void FUN_00848bf0(longlong *param_1,undefined8 *param_2)

{
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  FUN_008482c0(param_1,local_48);
  *(undefined4 *)(param_1 + 0x93) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0x49c) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0x95) = (undefined4)local_30;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = local_30._4_4_;
  (**(code **)(*param_1 + 0x288))(param_1,local_48);
  return;
}

