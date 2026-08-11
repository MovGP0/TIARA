/* Ghidra address: 00a78340 */
/* Ghidra symbol: FUN_00a78340 */


void FUN_00a78340(longlong param_1,double param_2)

{
  int iVar1;
  
  if (param_2 != *(double *)(param_1 + 0x4c8)) {
    iVar1 = FUN_006e65a0(param_1);
    if (((param_2 < (double)iVar1) &&
        (*(double *)(param_1 + 0x4c0) <= param_2 && param_2 != *(double *)(param_1 + 0x4c0))) &&
       (iVar1 = FUN_006e6550(param_1), (double)iVar1 < param_2)) {
      *(double *)(param_1 + 0x4c8) = param_2;
    }
    FUN_00a78210(param_1);
  }
  return;
}

