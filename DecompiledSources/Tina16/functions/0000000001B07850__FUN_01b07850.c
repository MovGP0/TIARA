/* Ghidra address: 01b07850 */
/* Ghidra symbol: FUN_01b07850 */


void FUN_01b07850(longlong param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_00409a70(param_2,param_3,(longlong)(*(int *)(param_1 + 0x308) * 8));
  }
  return;
}

