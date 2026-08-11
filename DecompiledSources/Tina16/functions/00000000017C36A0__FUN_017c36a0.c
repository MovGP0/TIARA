/* Ghidra address: 017c36a0 */
/* Ghidra symbol: FUN_017c36a0 */


void FUN_017c36a0(longlong param_1)

{
  int iVar1;
  
  FUN_01cf0ef0(param_1);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (-1 < iVar1) {
    if (0 < iVar1) {
      FUN_017c2cc0(param_1,iVar1 / 2 + -1,*(undefined4 *)(param_1 + 0x2c0));
    }
    FUN_017c2cc0(param_1,(longlong)*(int *)(param_1 + 0x1c) / 2 & 0xffffffff,
                 *(undefined4 *)(param_1 + 0x2c4));
    iVar1 = FUN_017c2b70(param_1);
    if (*(int *)(param_1 + 0x1c) < iVar1 * 2 + -2) {
      FUN_017c2cc0(param_1,*(int *)(param_1 + 0x1c) / 2 + 1,*(undefined4 *)(param_1 + 0x2c8));
    }
    FUN_017c30d0(param_1);
  }
  return;
}

