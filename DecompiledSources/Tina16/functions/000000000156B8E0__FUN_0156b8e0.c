/* Ghidra address: 0156b8e0 */
/* Ghidra symbol: FUN_0156b8e0 */


void FUN_0156b8e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),iVar5);
      plVar1 = *(longlong **)(lVar4 + 0x820);
      iVar2 = FUN_00e0e000(*(undefined8 *)(lVar4 + 0x828),1);
      if ((iVar2 == 5) || (iVar2 == 6)) {
        iVar2 = (**(code **)(*plVar1 + 0x1c8))();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar3 = (**(code **)(*plVar1 + 0x210))(plVar1,iVar6);
            FUN_0156b640(param_1,plVar1,iVar6,uVar3);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

