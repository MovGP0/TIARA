/* Ghidra address: 00845e60 */
/* Ghidra symbol: FUN_00845e60 */


void FUN_00845e60(undefined8 param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (param_5 < *param_2) {
    *param_2 = param_5;
  }
  else if (*param_2 < param_3) {
    *param_2 = param_3;
  }
  if (param_6 < param_2[1]) {
    param_2[1] = param_6;
  }
  else if (param_2[1] < param_4) {
    param_2[1] = param_4;
  }
  return;
}

