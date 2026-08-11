/* Ghidra address: 01c6cee0 */
/* Ghidra symbol: FUN_01c6cee0 */


void FUN_01c6cee0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 7000) != 0) && (param_2 != 0)) {
    FUN_01c6cf20(param_1);
  }
  *(longlong *)(param_1 + 7000) = param_2;
  return;
}

