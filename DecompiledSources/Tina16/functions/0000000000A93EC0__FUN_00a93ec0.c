/* Ghidra address: 00a93ec0 */
/* Ghidra symbol: FUN_00a93ec0 */


void FUN_00a93ec0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x2c) = 0;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 600);
  iVar3 = FUN_004aeba0(lVar1,param_1);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar5 = *(int *)(lVar1 + 0x10) + -1;
    if (iVar3 <= iVar5) {
      iVar5 = (iVar5 - iVar3) + 1;
      do {
        lVar4 = FUN_00a94970(lVar1,iVar3);
        if (*(int *)(*(longlong *)(param_1 + 8) + 0x18) != *(int *)(*(longlong *)(lVar4 + 8) + 0x18)
           ) break;
        lVar4 = FUN_00a94970(lVar1,iVar3);
        *(undefined1 *)(lVar4 + 0x2c) = 0;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0xc0);
  (**(code **)(*plVar2 + 0x180))(plVar2);
  return;
}

