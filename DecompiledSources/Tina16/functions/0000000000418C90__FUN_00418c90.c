/* Ghidra address: 00418c90 */
/* Ghidra symbol: FUN_00418c90 */


longlong FUN_00418c90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
  }
  return lVar1 + -1;
}

