/* Ghidra address: 004ae3c0 */
/* Ghidra symbol: thunk_FUN_004ae3c6 */


longlong thunk_FUN_004ae3c6(longlong param_1,longlong param_2)

{
  for (; (0 < param_2 && (*(char *)(param_1 + param_2) != '\n')); param_2 = param_2 + -1) {
  }
  if (*(char *)(param_1 + param_2) == '\n') {
    param_2 = param_2 + 1;
  }
  return param_2;
}

