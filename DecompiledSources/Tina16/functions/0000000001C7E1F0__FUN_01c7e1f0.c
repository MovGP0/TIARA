/* Ghidra address: 01c7e1f0 */
/* Ghidra symbol: FUN_01c7e1f0 */


void FUN_01c7e1f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_01c7d9d0(param_1);
  iVar1 = *(int *)(param_1 + 0x17f8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x10))) {
    FUN_004ae870(*(undefined8 *)(lVar2 + 0x18),iVar1);
    FUN_004aee80(*(undefined8 *)(lVar2 + 0x18));
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x10) + -1;
    if (iVar1 < *(int *)(param_1 + 0x17f8)) {
      *(int *)(param_1 + 0x17f8) = iVar1;
    }
    FUN_01c7e2a0(param_1);
  }
  return;
}

