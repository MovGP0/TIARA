/* Ghidra address: 00e7bf10 */
/* Ghidra symbol: FUN_00e7bf10 */


double FUN_00e7bf10(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_0040c850(param_1);
  if ((param_2 * param_3) / param_4 <= dVar2) {
    iVar1 = FUN_00c42630(param_1);
    param_1 = param_2 * param_3 * (double)iVar1;
    *param_5 = 0.0;
  }
  else {
    param_1 = param_4 * param_1;
    *param_5 = param_4;
  }
  return param_1;
}

