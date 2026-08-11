/* Ghidra address: 00c44550 */
/* Ghidra symbol: FUN_00c44550 */


void FUN_00c44550(double *param_1,double param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = param_1[1];
  *param_3 = param_2 * *param_1;
  param_3[1] = param_2 * dVar1;
  return;
}

