/* Ghidra address: 004b0370 */
/* Ghidra symbol: FUN_004b0370 */


undefined4 FUN_004b0370(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined4 local_14;
  longlong local_10;
  
  local_40 = auStack_68;
  local_20 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_28 = *(longlong *)(local_20 + 8);
  local_30 = local_28;
  if (local_28 != 0) {
    local_30 = *(longlong *)(local_28 + -8);
  }
  local_14 = (undefined4)local_30;
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return local_14;
}

