/* Ghidra address: 0122a020 */
/* Ghidra symbol: FUN_0122a020 */


double FUN_0122a020(int param_1)

{
  double dVar1;
  
  dVar1 = ((double)param_1 * (*(double *)(PTR_DAT_020040b8 + 0xc0) - 0.0)) /
          (double)(*(int *)(*(longlong *)(DAT_021076a0 + 0x738) + 0x9c) - *(int *)PTR_DAT_02001228)
          + 0.0;
  if (-0.01 < dVar1) {
    dVar1 = -0.01;
  }
  return dVar1;
}

