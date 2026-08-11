/* Ghidra address: 01236f90 */
/* Ghidra symbol: FUN_01236f90 */


double * FUN_01236f90(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_2[1];
  dVar2 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = dVar1 - dVar2;
  return param_1;
}

