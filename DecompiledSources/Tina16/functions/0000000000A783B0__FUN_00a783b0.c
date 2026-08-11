/* Ghidra address: 00a783b0 */
/* Ghidra symbol: FUN_00a783b0 */


void FUN_00a783b0(longlong param_1,double param_2)

{
  if (param_2 == *(double *)(param_1 + 0x4d0)) {
    *(double *)(param_1 + 0x4d0) = param_2;
  }
  return;
}

