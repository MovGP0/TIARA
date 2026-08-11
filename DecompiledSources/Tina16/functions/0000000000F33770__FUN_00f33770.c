/* Ghidra address: 00f33770 */
/* Ghidra symbol: FUN_00f33770 */


int FUN_00f33770(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 1;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8);
      iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      iVar4 = iVar4 + iVar3 + 1;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar4 == 1) {
    iVar4 = 2;
  }
  return iVar4;
}

