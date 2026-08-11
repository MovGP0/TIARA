/* Ghidra address: 004adec0 */
/* Ghidra symbol: FUN_004adec0 */


void FUN_004adec0(void)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  lVar2 = FUN_0041f930();
  lVar2 = *(longlong *)(lVar2 + 0x238);
  iVar4 = *(int *)(lVar2 + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (*(uint *)(lVar2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8);
      (**(code **)(*plVar1 + 0x20))(plVar1);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

