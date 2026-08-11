/* Ghidra address: 00715100 */
/* Ghidra symbol: FUN_00715100 */


void FUN_00715100(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)
                (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8) + 8);
      (**(code **)(*plVar2 + 0x50))(plVar2);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

