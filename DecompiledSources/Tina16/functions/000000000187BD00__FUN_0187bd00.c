/* Ghidra address: 0187bd00 */
/* Ghidra symbol: FUN_0187bd00 */


void FUN_0187bd00(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01879fc0(param_1,iVar4);
      uVar1 = *(undefined1 *)(lVar2 + 0x19);
      lVar2 = FUN_01879fc0(param_1,iVar4);
      *(undefined1 *)(lVar2 + 0x19) = 0;
      uVar3 = FUN_01879fc0(param_1,iVar4);
      FUN_01879810(uVar3);
      lVar2 = FUN_01879fc0(param_1,iVar4);
      *(undefined1 *)(lVar2 + 0x19) = uVar1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

