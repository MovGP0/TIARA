/* Ghidra address: 017d73c0 */
/* Ghidra symbol: FUN_017d73c0 */


void FUN_017d73c0(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    FUN_017d7590(param_1,*(int *)(param_1 + 0x10) + 0x32);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 4) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

