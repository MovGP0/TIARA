/* Ghidra address: 01d5e320 */
/* Ghidra symbol: FUN_01d5e320 */


undefined8
FUN_01d5e320(double param_1,double param_2,double param_3,double *param_4,double *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_2 == param_3) {
    uVar1 = 1;
  }
  else if (param_1 == param_2) {
    *param_4 = 1.0;
    *param_5 = 0.0;
    uVar1 = 0;
  }
  else if (param_1 == param_3) {
    *param_4 = 0.0;
    *param_5 = 1.0;
    uVar1 = 0;
  }
  else {
    dVar2 = (param_1 - param_2) / (param_3 - param_2);
    *param_5 = dVar2;
    *param_4 = 1.0 - dVar2;
    uVar1 = 0;
  }
  return uVar1;
}

