/* Ghidra address: 017c82f0 */
/* Ghidra symbol: FUN_017c82f0 */


void FUN_017c82f0(double *param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_0040c850(*param_1);
  if (1e+30 < dVar2) {
    iVar1 = FUN_00c42630(*param_1);
    *param_1 = (double)iVar1 * 1e+30;
  }
  dVar2 = (double)FUN_0040c850(*param_2);
  if (1e+30 < dVar2) {
    iVar1 = FUN_00c42630(*param_2);
    *param_2 = (double)iVar1 * 1e+30;
  }
  dVar2 = (double)FUN_0040c850(*param_1);
  if (dVar2 < 1e-30) {
    *param_1 = 0.0;
  }
  dVar2 = (double)FUN_0040c850(*param_2);
  if (dVar2 < 1e-30) {
    *param_2 = 0.0;
  }
  return;
}

