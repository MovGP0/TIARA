/* Ghidra address: 01145f80 */
/* Ghidra symbol: FUN_01145f80 */


longlong FUN_01145f80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  }
  if (*(int *)(param_1 + 0x10) == lVar1) {
    FUN_005950e0(param_1 + 8,*(int *)(param_1 + 0x10) + 1);
  }
  return param_1;
}

