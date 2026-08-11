/* Ghidra address: 01bfe120 */
/* Ghidra symbol: FUN_01bfe120 */


void FUN_01bfe120(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0xb0) != param_2) {
    *(char *)(param_1 + 0xb0) = param_2;
    if (param_2 != '\0') {
      lVar2 = FUN_01bfd960();
      iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_01bfd960(param_1);
          lVar2 = FUN_004b2070(uVar3,iVar4);
          if ((*(char *)(lVar2 + 0xb0) != '\0') && (lVar2 != param_1)) {
            FUN_01bfe120(lVar2,0);
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x180))(plVar1);
    }
  }
  return;
}

