/* Ghidra address: 015612f0 */
/* Ghidra symbol: FUN_015612f0 */


longlong * FUN_015612f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x158) + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x158),iVar5);
      plVar1 = *(longlong **)(lVar4 + 0x40);
      iVar2 = (**(code **)(*plVar1 + 0x1c8))();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,iVar6);
          if (param_2 == iVar3) {
            return plVar1;
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return (longlong *)0x0;
}

