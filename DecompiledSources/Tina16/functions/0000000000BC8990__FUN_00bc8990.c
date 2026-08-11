/* Ghidra address: 00bc8990 */
/* Ghidra symbol: FUN_00bc8990 */


longlong FUN_00bc8990(longlong param_1,longlong param_2)

{
  if (param_2 == param_1 + 0x15c) {
    param_2 = 0;
  }
  else if (*(int *)(param_2 + 2) == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + (longlong)*(int *)(param_2 + 2) * 2;
  }
  return param_2;
}

