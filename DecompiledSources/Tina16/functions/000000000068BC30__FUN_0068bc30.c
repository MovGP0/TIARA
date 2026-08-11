/* Ghidra address: 0068bc30 */
/* Ghidra symbol: FUN_0068bc30 */


void FUN_0068bc30(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x4c4) != param_2) && (0 < param_2)) {
    *(int *)(param_1 + 0x4c4) = param_2;
    FUN_00655b90();
  }
  return;
}

