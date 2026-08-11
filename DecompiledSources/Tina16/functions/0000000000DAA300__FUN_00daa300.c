/* Ghidra address: 00daa300 */
/* Ghidra symbol: FUN_00daa300 */


void FUN_00daa300(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  
  param_2 = param_2 + param_4;
  dVar1 = ((param_6 - param_5) / 4.0) * (1.0 / param_4);
  dVar2 = param_6 - dVar1 * 2.0 * param_2;
  *param_7 = dVar1 * param_1 * param_1 + dVar2 * param_1 +
             (((param_3 + param_6 * param_4) - dVar1 * param_2 * param_2) - dVar2 * param_2);
  *param_8 = dVar1 * 2.0 * param_1 + dVar2;
  return;
}

