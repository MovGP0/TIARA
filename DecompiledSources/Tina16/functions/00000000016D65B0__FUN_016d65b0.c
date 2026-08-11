/* Ghidra address: 016d65b0 */
/* Ghidra symbol: FUN_016d65b0 */


double FUN_016d65b0(longlong param_1,double param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_0040c840((param_2 * (double)*(int *)(param_1 + 0x10)) / (double)param_3 + 0.2);
  return (double)((lVar1 + 1) * (longlong)param_3) / (double)*(int *)(param_1 + 0x10) - param_2;
}

