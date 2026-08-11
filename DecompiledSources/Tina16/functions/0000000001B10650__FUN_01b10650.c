/* Ghidra address: 01b10650 */
/* Ghidra symbol: FUN_01b10650 */


void FUN_01b10650(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      if (param_2 != '\0') {
        iVar5 = 0;
        do {
          uVar3 = (**(code **)(*plVar2 + 8))(plVar2,iVar5);
          FUN_01b0fa30(plVar2,iVar5,uVar3);
          iVar5 = iVar5 + 1;
        } while (iVar5 != 2);
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

