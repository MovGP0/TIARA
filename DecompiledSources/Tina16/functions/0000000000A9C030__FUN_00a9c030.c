/* Ghidra address: 00a9c030 */
/* Ghidra symbol: FUN_00a9c030 */


void FUN_00a9c030(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x9c);
    iVar2 = *(int *)(lVar3 + 0xa0);
    if (iVar1 < iVar2) {
      iVar6 = *(int *)(param_1 + 0x10);
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          plVar4 = (longlong *)FUN_00ac3910(param_1,iVar5);
          if (iVar1 < (int)plVar4[0xd] + *(int *)((longlong)plVar4 + 0x6c)) {
            if (iVar2 <= (int)plVar4[0xd]) {
              return;
            }
            (**(code **)(*plVar4 + 0xb0))(plVar4);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}

