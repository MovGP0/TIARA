/* Ghidra address: 00e6a900 */
/* Ghidra symbol: FUN_00e6a900 */


void FUN_00e6a900(double param_1,int param_2,double *param_3,undefined8 *param_4,double *param_5,
                 undefined8 *param_6)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_0040c840(param_1);
  if (iVar1 % 2 == 0) {
    if (param_2 == 1) {
      *param_4 = 0x4000000000000000;
      dVar2 = (double)FUN_00b90620(param_1 / 2.0 - 1.0,0);
      *param_3 = dVar2 * 2.0;
      *param_6 = 0;
      *param_5 = param_1;
    }
    else {
      *param_4 = 0;
      *param_3 = param_1;
      *param_6 = 0x4000000000000000;
      dVar2 = (double)FUN_00b90620(param_1 / 2.0 - 1.0,0);
      *param_5 = dVar2 * 2.0;
    }
  }
  else {
    *param_6 = 0x3ff0000000000000;
    *param_4 = *param_6;
    dVar2 = (double)FUN_00b90620((param_1 - 1.0) / 2.0,0);
    *param_5 = dVar2 * 2.0;
    *param_3 = *param_5;
  }
  return;
}

