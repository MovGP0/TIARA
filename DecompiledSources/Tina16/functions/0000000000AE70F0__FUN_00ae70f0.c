/* Ghidra address: 00ae70f0 */
/* Ghidra symbol: FUN_00ae70f0 */


void FUN_00ae70f0(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x70) + 0x20);
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
  FUN_00ad1170(*(undefined8 *)(param_1 + 0x70));
  return;
}

