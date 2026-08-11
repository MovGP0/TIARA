/* Ghidra address: 01884b40 */
/* Ghidra symbol: FUN_01884b40 */


void FUN_01884b40(longlong param_1)

{
  longlong lVar1;
  
  FUN_0196bf40(param_1);
  *(double *)(param_1 + 0x1a8) = *(double *)PTR_DAT_02005968 / *(double *)PTR_DAT_02002c30;
  *(double *)(param_1 + 0x1c8) = *(double *)PTR_DAT_02005968 / *(double *)PTR_DAT_02002c30;
  *(double *)(param_1 + 0x1e0) = (double)*(int *)PTR_DAT_020052f0 / *(double *)PTR_DAT_02002c30;
  *(double *)(param_1 + 0x178) = (double)*(int *)PTR_DAT_020052f0 / *(double *)PTR_DAT_02002c30;
  lVar1 = FUN_0040c840((*(double *)(param_1 + 0x238) * *(double *)PTR_DAT_02002c30) /
                       *(double *)PTR_DAT_02005968);
  *(double *)(param_1 + 0x238) =
       ((double)lVar1 * *(double *)PTR_DAT_02005968) / *(double *)PTR_DAT_02002c30;
  lVar1 = FUN_0040c840((*(double *)(param_1 + 0x228) * *(double *)PTR_DAT_02002c30) /
                       (double)*(int *)PTR_DAT_020052f0);
  *(double *)(param_1 + 0x228) =
       (double)(lVar1 * *(int *)PTR_DAT_020052f0) / *(double *)PTR_DAT_02002c30;
  FUN_0196baa0(param_1);
  return;
}

