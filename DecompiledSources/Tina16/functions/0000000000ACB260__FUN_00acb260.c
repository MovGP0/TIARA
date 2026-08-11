/* Ghidra address: 00acb260 */
/* Ghidra symbol: FUN_00acb260 */


void FUN_00acb260(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x158);
  uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x4a0) + 0x28))(*(longlong **)(lVar1 + 0x4a0));
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x4a0) + 0x28))();
  iVar4 = iVar4 + -1;
  if (0x31 < iVar4) {
    iVar4 = 0x32;
  }
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    do {
      uVar2 = FUN_0068bca0(lVar1,iVar5);
      *(undefined1 *)(param_1 + 0x164 + (longlong)iVar5) = uVar2;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

