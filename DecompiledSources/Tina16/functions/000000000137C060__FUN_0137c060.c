/* Ghidra address: 0137c060 */
/* Ghidra symbol: FUN_0137c060 */


void FUN_0137c060(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x118);
    iVar2 = (**(code **)(*plVar1 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
        FUN_00410f20(uVar3);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

