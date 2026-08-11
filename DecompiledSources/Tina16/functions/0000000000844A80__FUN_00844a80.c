/* Ghidra address: 00844a80 */
/* Ghidra symbol: FUN_00844a80 */


void FUN_00844a80(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == param_3) {
    *param_2 = param_4;
  }
  else {
    iVar1 = param_3;
    iVar2 = param_4;
    if (param_4 < param_3) {
      iVar1 = param_4;
      iVar2 = param_3;
    }
    if ((iVar1 <= *param_2) && (*param_2 <= iVar2)) {
      if (param_4 < param_3) {
        *param_2 = *param_2 + 1;
      }
      else {
        *param_2 = *param_2 + -1;
      }
    }
  }
  return;
}

