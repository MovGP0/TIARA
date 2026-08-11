/* Ghidra address: 0176cf30 */
/* Ghidra symbol: FUN_0176cf30 */


void FUN_0176cf30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x120) + 0x10);
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x120),iVar3);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1a8) != 0)) {
        *(undefined1 *)(*(longlong *)(lVar1 + 0x1a8) + 0x111) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((((*(longlong *)(param_1 + 0x128) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x1a8), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x120) != 0)) &&
     ((0 < *(int *)(*(longlong *)(lVar1 + 0x120) + 0x10) &&
      (iVar2 = FUN_004aeba0(*(undefined8 *)(lVar1 + 0x120),*(undefined8 *)(param_1 + 0x10)),
      -1 < iVar2)))) {
    FUN_004ae870(*(undefined8 *)(lVar1 + 0x120),iVar2);
  }
  return;
}

