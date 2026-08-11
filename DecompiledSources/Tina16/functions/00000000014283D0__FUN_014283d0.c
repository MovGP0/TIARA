/* Ghidra address: 014283d0 */
/* Ghidra symbol: FUN_014283d0 */


void FUN_014283d0(double param_1,double param_2,double param_3,double param_4,double *param_5,
                 double *param_6,double *param_7,double *param_8,int param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_01428310(0x28 - param_9);
  dVar2 = (double)FUN_01428380(param_2);
  dVar3 = (double)FUN_01428380(param_3);
  if (dVar3 <= dVar2) {
    *param_5 = param_2;
    *param_6 = param_3;
    *param_8 = param_4;
    *param_7 = (DAT_0210c550 / dVar1) * (*param_8 - *param_5) + *param_5;
  }
  else {
    *param_5 = param_1;
    *param_7 = param_2;
    *param_8 = param_3;
    *param_6 = (DAT_0210c558 / dVar1) * (*param_8 - *param_5) + *param_5;
  }
  return;
}

