/* Ghidra address: 00a2c500 */
/* Ghidra symbol: FUN_00a2c500 */


void FUN_00a2c500(char param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  int iVar1;
  
  if (param_1 == '\0') {
    *param_6 = *param_5;
    if ((param_2 < *param_5 + param_4) && (*param_5 < param_3)) {
      *param_6 = *param_6 + 1;
    }
  }
  else {
    iVar1 = param_2 - *param_5;
    if (iVar1 < param_4) {
      if (iVar1 < 0) {
        *param_5 = param_2 - (param_4 - -iVar1 % param_4);
      }
    }
    else {
      *param_5 = param_2 - iVar1 % param_4;
    }
    *param_6 = param_3;
  }
  return;
}

