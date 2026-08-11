/* Ghidra address: 01566780 */
/* Ghidra symbol: FUN_01566780 */


void FUN_01566780(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar5);
      if ((*(char *)(lVar4 + 8) != '\0') &&
         (plVar1 = *(longlong **)(lVar4 + 0x18), plVar1 != (longlong *)0x0)) {
        iVar3 = (**(code **)(*plVar1 + 0x1c8))();
        iVar6 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar1 + 0x208))(plVar1,iVar6,0xffffffff,0);
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

