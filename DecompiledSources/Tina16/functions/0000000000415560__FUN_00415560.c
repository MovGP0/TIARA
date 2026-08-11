/* Ghidra address: 00415560 */
/* Ghidra symbol: FUN_00415560 */


void FUN_00415560(undefined1 *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((param_2 == 0) || (*(int *)(param_2 + -4) == 0)) {
    *param_1 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + -4);
    if (param_3 < *(int *)(param_2 + -4)) {
      iVar2 = param_3;
    }
    *param_1 = (char)iVar2;
    uVar1 = FUN_00415ab0(param_2);
    FUN_00409a70(uVar1,param_1 + 1,(longlong)iVar2);
  }
  return;
}

