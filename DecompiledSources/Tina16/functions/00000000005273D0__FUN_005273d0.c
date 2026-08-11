/* Ghidra address: 005273d0 */
/* Ghidra symbol: FUN_005273d0 */


void FUN_005273d0(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = *param_1 + (param_3 - *param_2);
  *param_2 = (dVar1 - *param_1) - (param_3 - *param_2);
  *param_1 = dVar1;
  return;
}

