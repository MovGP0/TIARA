/* Ghidra address: 00a782d0 */
/* Ghidra symbol: FUN_00a782d0 */


void FUN_00a782d0(longlong param_1,double param_2)

{
  int iVar1;
  
  if (param_2 != *(double *)(param_1 + 0x4c0)) {
    iVar1 = FUN_006e6550(param_1);
    if ((((double)iVar1 < param_2) && (param_2 < *(double *)(param_1 + 0x4c8))) &&
       (iVar1 = FUN_006e65a0(param_1), param_2 < (double)iVar1)) {
      *(double *)(param_1 + 0x4c0) = param_2;
    }
    FUN_00a78210(param_1);
  }
  return;
}

