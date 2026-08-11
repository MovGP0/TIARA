/* Ghidra address: 008e8b90 */
/* Ghidra symbol: FUN_008e8b90 */


void FUN_008e8b90(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
                 int *param_6,int *param_7)

{
  if (param_5 < param_3) {
    param_3 = param_5;
  }
  if (param_3 < 2) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    param_3 = param_3 - param_3 % 2;
    FUN_00409a70(param_2,param_4,(longlong)param_3);
    *param_7 = param_3 / 2;
    *param_6 = param_3;
  }
  return;
}

