/* Ghidra address: 01884e20 */
/* Ghidra symbol: FUN_01884e20 */


void FUN_01884e20(longlong param_1)

{
  longlong lVar1;
  
  FUN_0196b7b0(param_1);
  lVar1 = FUN_0040c770((*(double *)(param_1 + 0x238) * *(double *)PTR_DAT_02002c30) /
                       *(double *)PTR_DAT_02005968);
  *(double *)(param_1 + 0x238) =
       ((double)lVar1 * *(double *)PTR_DAT_02005968) / *(double *)PTR_DAT_02002c30;
  FUN_0196baa0(param_1);
  return;
}

