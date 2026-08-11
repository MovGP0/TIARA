/* Ghidra address: 016ee8d0 */
/* Ghidra symbol: FUN_016ee8d0 */


void FUN_016ee8d0(undefined8 param_1,double *param_2,undefined4 param_3,undefined4 param_4,
                 double param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  
  if (param_6 == 0) {
    iVar1 = FUN_01b05600(param_1,param_3);
    iVar2 = FUN_01b05600(param_1,param_4);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        param_2[iVar2] = *param_2 - param_5;
      }
    }
    else {
      param_2[iVar1] = param_2[iVar2] + param_5;
    }
  }
  else {
    iVar1 = FUN_01b05600(param_6,param_3);
    iVar2 = FUN_01b05600(param_6,param_4);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        param_2[iVar2] = *param_2 - param_5;
      }
    }
    else {
      param_2[iVar1] = param_2[iVar2] + param_5;
    }
  }
  return;
}

