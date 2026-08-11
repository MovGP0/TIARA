/* Ghidra address: 01427ad0 */
/* Ghidra symbol: FUN_01427ad0 */


void FUN_01427ad0(double param_1,double param_2,double param_3,double *param_4,double *param_5,
                 double *param_6)

{
  double dVar1;
  
  *param_4 = param_1 / param_2;
  *param_5 = param_2 / param_1;
  dVar1 = (double)FUN_0040c760(*param_5 * 10.0 + 1.0);
  *param_6 = (param_3 + 1.0) / 2.0 + (param_3 - 1.0) / (dVar1 * 2.0);
  return;
}

