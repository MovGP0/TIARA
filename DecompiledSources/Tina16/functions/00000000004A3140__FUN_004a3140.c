/* Ghidra address: 004a3140 */
/* Ghidra symbol: FUN_004a3140 */


undefined8 FUN_004a3140(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  uint local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_20 = FUN_004e9e60(DAT_02011628);
  local_14 = *(int *)(local_20 + 0x10) - 1;
  if (-1 < (int)local_14) {
    do {
      if (*(uint *)(local_20 + 0x10) <= local_14) {
        FUN_00594f90();
      }
      local_28 = *(longlong *)(*(longlong *)(local_20 + 8) + (longlong)(int)local_14 * 8);
      if (param_1 == *(longlong *)(local_28 + 8)) {
        local_10 = *(undefined8 *)(local_28 + 0x10);
        FUN_004a31f0(0,local_30);
        return local_10;
      }
      local_14 = local_14 - 1;
    } while (local_14 != 0xffffffff);
  }
  FUN_00412130(*(undefined8 *)(DAT_02011628 + 0x10));
  return local_10;
}

