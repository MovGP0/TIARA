/* Ghidra address: 00b15310 */
/* Ghidra symbol: FUN_00b15310 */


undefined8 * FUN_00b15310(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_00416660(param_1,iVar1 / 2);
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (0 < iVar1) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + -4);
    }
    uVar2 = FUN_00415ab0(param_2);
    uVar3 = FUN_00415f70(*param_1);
    FUN_00409a70(uVar2,uVar3,(longlong)iVar1);
  }
  return param_1;
}

