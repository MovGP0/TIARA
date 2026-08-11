/* Ghidra address: 01b4a8e0 */
/* Ghidra symbol: FUN_01b4a8e0 */


void FUN_01b4a8e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),iVar2);
      *(undefined1 *)(lVar1 + 0x18) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

