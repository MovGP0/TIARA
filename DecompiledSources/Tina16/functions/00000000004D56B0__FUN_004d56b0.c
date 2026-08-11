/* Ghidra address: 004d56b0 */
/* Ghidra symbol: FUN_004d56b0 */


void FUN_004d56b0(void)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  longlong local_28;
  uint local_1c;
  
  local_40 = auStack_68;
  local_28 = FUN_004e9e60(DAT_02011628);
  iVar1 = *(int *)(local_28 + 0x10);
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(uint *)(local_28 + 0x10) <= local_1c) {
        FUN_00594f90();
      }
      local_38 = *(undefined8 *)(*(longlong *)(local_28 + 8) + (longlong)(int)local_1c * 8);
      FUN_00410f20(local_38);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00412130(*(undefined8 *)(DAT_02011628 + 0x10));
  FUN_00410f20(DAT_02011628);
  return;
}

