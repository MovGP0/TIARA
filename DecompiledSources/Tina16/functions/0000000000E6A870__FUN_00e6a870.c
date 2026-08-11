/* Ghidra address: 00e6a870 */
/* Ghidra symbol: FUN_00e6a870 */


void FUN_00e6a870(double param_1,double param_2,double param_3,double param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2 / param_3 - param_4) + 1.0;
  dVar1 = (double)FUN_0040c760(dVar2 * dVar2 + param_4 * 4.0);
  dVar1 = (double)FUN_0040c2f0((dVar2 + dVar1) * 0.5);
  *param_5 = param_1 * dVar1;
  return;
}

