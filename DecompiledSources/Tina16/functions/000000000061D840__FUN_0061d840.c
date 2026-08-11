/* Ghidra address: 0061d840 */
/* Ghidra symbol: FUN_0061d840 */


undefined8 * FUN_0061d840(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  uVar1 = FUN_00415ab0(param_2);
  FUN_004147f0(param_1,uVar1,iVar2,0);
  if (0 < iVar2) {
    thunk_FUN_04153e20(*param_1,iVar2);
  }
  return param_1;
}

