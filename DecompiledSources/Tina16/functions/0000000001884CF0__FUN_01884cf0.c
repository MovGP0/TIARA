/* Ghidra address: 01884cf0 */
/* Ghidra symbol: FUN_01884cf0 */


void FUN_01884cf0(longlong param_1)

{
  longlong lVar1;
  
  FUN_0196b770(param_1);
  lVar1 = FUN_0040c770((*(double *)(param_1 + 0x228) * *(double *)PTR_DAT_02002c30) /
                       (double)*(int *)PTR_DAT_020052f0);
  *(double *)(param_1 + 0x228) =
       (double)(lVar1 * *(int *)PTR_DAT_020052f0) / *(double *)PTR_DAT_02002c30;
  FUN_0196baa0(param_1);
  return;
}

