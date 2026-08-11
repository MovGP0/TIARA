/* Ghidra address: 004be4e0 */
/* Ghidra symbol: FUN_004be4e0 */


void FUN_004be4e0(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  longlong local_18;
  uint local_c;
  
  local_30 = auStack_58;
  local_18 = FUN_004f2c60(DAT_02011648);
  local_c = *(int *)(local_18 + 0x10) - 1;
  if (-1 < (int)local_c) {
    do {
      if (*(uint *)(local_18 + 0x10) <= local_c) {
        FUN_00594f90();
      }
      local_20 = *(longlong *)(*(longlong *)(local_18 + 8) + (longlong)(int)local_c * 8);
      if ((*(longlong *)(local_20 + 8) == *(longlong *)(param_1 + 8)) &&
         (*(longlong *)(local_20 + 0x18) == *(longlong *)(param_1 + 0x18))) {
        FUN_00410f20(local_20);
        FUN_00599670(local_18 + 8,local_c,5);
      }
      local_c = local_c - 1;
    } while (local_c != 0xffffffff);
  }
  FUN_00412130(*(undefined8 *)(DAT_02011648 + 0x10));
  return;
}

