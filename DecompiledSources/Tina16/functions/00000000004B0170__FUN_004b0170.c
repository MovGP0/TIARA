/* Ghidra address: 004b0170 */
/* Ghidra symbol: FUN_004b0170 */


longlong FUN_004b0170(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  local_20 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_28 = *(longlong *)(local_20 + 8);
  local_30 = local_28;
  if (local_28 != 0) {
    local_30 = *(longlong *)(local_28 + -8);
  }
  if (*(int *)(local_20 + 0x10) == local_30) {
    local_34 = *(int *)(local_20 + 0x10) + 1;
    FUN_005950e0(local_20 + 8,local_34);
  }
  local_10 = *(longlong *)(param_1 + 0x18);
  local_18 = param_1;
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return local_18;
}

