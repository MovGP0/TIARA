/* Ghidra address: 00e07e00 */
/* Ghidra symbol: FUN_00e07e00 */


void FUN_00e07e00(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_00e07960(param_1);
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  FUN_004169f0(param_1 + 0x20,iVar3 + 1);
  lVar2 = FUN_00414de0();
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  *(undefined2 *)(lVar2 + -2 + (longlong)iVar3 * 2) = *(undefined2 *)(param_1 + 0x2c);
  return;
}

