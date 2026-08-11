/* Ghidra address: 0043e600 */
/* Ghidra symbol: FUN_0043e600 */


undefined8 * FUN_0043e600(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  uVar1 = FUN_00416740(param_2);
  FUN_00414740(param_1,uVar1,iVar2);
  if (0 < iVar2) {
    uVar1 = FUN_00416740(*param_1);
    thunk_FUN_03e5c312(uVar1,iVar2);
  }
  return param_1;
}

