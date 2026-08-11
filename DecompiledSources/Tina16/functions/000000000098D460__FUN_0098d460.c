/* Ghidra address: 0098d460 */
/* Ghidra symbol: FUN_0098d460 */


void FUN_0098d460(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      cVar3 = (**(code **)(*plVar2 + 0x168))(plVar2);
      if (cVar3 == '\v') {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if (*(uint *)(lVar1 + 0x10) <= uVar4) {
          FUN_00594f90();
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8));
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00598010(*(longlong *)(param_1 + 0x48) + 8);
  return;
}

