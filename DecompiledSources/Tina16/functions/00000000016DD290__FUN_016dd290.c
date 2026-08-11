/* Ghidra address: 016dd290 */
/* Ghidra symbol: FUN_016dd290 */


double FUN_016dd290(double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5,
                   int param_6,undefined1 param_7,double *param_8,double *param_9,double *param_10,
                   double *param_11)

{
  undefined4 uVar1;
  double dVar2;
  
  *param_11 = *param_9 + param_2;
  if (*param_10 == 0.0) {
    uVar1 = FUN_0040c840(*param_8);
    dVar2 = (double)FUN_017c58f0(param_3,param_4,0,param_5,uVar1,param_7,0);
    *param_10 = dVar2;
  }
  dVar2 = *param_10;
  if (((double)param_6 / dVar2 + *param_11 <= param_1) || (param_1 < *param_11)) {
    if (*param_8 <= (double)param_5 && (double)param_5 != *param_8) {
      *param_11 = (double)param_6 / dVar2 + *param_11;
      *param_9 = *param_9 + (double)param_6 / dVar2;
      *param_8 = *param_8 + 1.0;
    }
    uVar1 = FUN_0040c840(*param_8);
    dVar2 = (double)FUN_017c58f0(param_3,param_4,0,param_5,uVar1,param_7,0);
    *param_10 = dVar2;
    dVar2 = *param_10;
  }
  return dVar2;
}

