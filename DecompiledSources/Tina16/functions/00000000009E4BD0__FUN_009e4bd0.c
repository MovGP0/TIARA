/* Ghidra address: 009e4bd0 */
/* Ghidra symbol: FUN_009e4bd0 */


int FUN_009e4bd0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_004b6da0(param_1);
  if ((iVar1 < 0) || (param_3 < 1)) {
    param_3 = 0;
  }
  else {
    iVar2 = (**(code **)*param_1)(param_1);
    if (iVar2 < iVar1 + param_3) {
      uVar3 = FUN_0044d710(&PTR_FUN_00471608,1,PTR_PTR_020053d0);
      FUN_004134c0(uVar3);
    }
    FUN_00409a70(param_2,param_1[1] + (longlong)iVar1,(longlong)param_3);
    FUN_004b6dc0(param_1,(longlong)iVar1);
  }
  return param_3;
}

