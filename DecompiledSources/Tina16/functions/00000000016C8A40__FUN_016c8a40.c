/* Ghidra address: 016c8a40 */
/* Ghidra symbol: FUN_016c8a40 */


void FUN_016c8a40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  
  lVar1 = *(longlong *)(param_1 + 0xa10);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_01d347d0(lVar1,iVar3);
      FUN_016c8970(auStack_48,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

