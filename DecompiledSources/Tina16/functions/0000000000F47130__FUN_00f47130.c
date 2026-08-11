/* Ghidra address: 00f47130 */
/* Ghidra symbol: FUN_00f47130 */


void FUN_00f47130(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = param_3;
    if (param_5 < param_3) {
      iVar1 = param_5;
      param_5 = param_3;
      param_4 = param_2;
    }
    while (param_3 = iVar1, param_3 != param_5) {
      FUN_00f471e0(param_1,param_2,param_3,1);
      iVar1 = param_3 + 8;
    }
  }
  else {
    iVar1 = param_2;
    if (param_4 < param_2) {
      iVar1 = param_4;
      param_5 = param_3;
      param_4 = param_2;
    }
    while (param_2 = iVar1, param_2 != param_4) {
      FUN_00f471e0(param_1,param_2,param_3,1);
      iVar1 = param_2 + 8;
    }
  }
  FUN_00f471e0(param_1,param_2,param_3,7);
  FUN_00f471e0(param_1,param_4,param_5,7);
  return;
}

