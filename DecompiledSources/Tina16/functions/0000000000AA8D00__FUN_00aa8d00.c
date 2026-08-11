/* Ghidra address: 00aa8d00 */
/* Ghidra symbol: FUN_00aa8d00 */


void FUN_00aa8d00(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00aa8dd0(param_1,iVar4);
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                        (*(longlong **)(param_1 + 0x28),*(undefined4 *)(lVar3 + 0x14),0);
      *(undefined4 *)(lVar3 + 8) = uVar1;
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                        (*(longlong **)(param_1 + 0x28),*(undefined4 *)(lVar3 + 0x18));
      *(int *)(lVar3 + 0xc) = iVar2;
      if (*(int *)(lVar3 + 8) == iVar2) {
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

