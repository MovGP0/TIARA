/* Ghidra address: 00416dc0 */
/* Ghidra symbol: FUN_00416dc0 */


undefined8 FUN_00416dc0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (param_3 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 + -1;
    if (iVar2 < param_3 + -1) {
      iVar1 = iVar2;
    }
  }
  if (param_4 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 - iVar1;
    if (param_4 < iVar2 - iVar1) {
      iVar3 = param_4;
    }
  }
  FUN_00414740(param_1,param_2 + (longlong)iVar1 * 2,iVar3);
  return param_1;
}

