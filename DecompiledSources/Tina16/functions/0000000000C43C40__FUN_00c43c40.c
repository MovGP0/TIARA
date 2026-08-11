/* Ghidra address: 00c43c40 */
/* Ghidra symbol: FUN_00c43c40 */


double FUN_00c43c40(double param_1,double param_2)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_00c42630(param_1);
  dVar2 = (double)FUN_0040c850(param_1);
  dVar2 = (double)FUN_0040af10(dVar2 / param_2);
  return param_1 - (double)iVar1 * dVar2 * param_2;
}

