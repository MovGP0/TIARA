/* Ghidra address: 00ae7600 */
/* Ghidra symbol: FUN_00ae7600 */


void FUN_00ae7600(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x70) + 0x3e);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  FUN_004169f0(param_1 + 0x38,iVar2 + 1);
  lVar3 = FUN_00414de0(param_1 + 0x38);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + -4);
  }
  *(undefined2 *)(lVar3 + -2 + (longlong)iVar2 * 2) = uVar1;
  FUN_00ae74e0(*(undefined8 *)(param_1 + 0x70));
  return;
}

