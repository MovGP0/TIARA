/* Ghidra address: 00408470 */
/* Ghidra symbol: FUN_00408470 */


longlong FUN_00408470(longlong param_1)

{
  param_1 = param_1 + (ulonglong)(*(uint *)(param_1 + -8) & 0xfffffff0);
  if ((*(uint *)(param_1 + -8) & 0xfffffff0) == 0) {
    param_1 = 0;
  }
  return param_1;
}

