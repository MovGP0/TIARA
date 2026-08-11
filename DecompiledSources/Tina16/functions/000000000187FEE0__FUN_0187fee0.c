/* Ghidra address: 0187fee0 */
/* Ghidra symbol: FUN_0187fee0 */


void FUN_0187fee0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((plVar1 != (longlong *)0x0) && (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x10))) {
    (**(code **)(*plVar1 + 0x3d0))(plVar1);
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar1 = *(longlong **)(param_1 + 8);
      if ((plVar1 != (longlong *)0x0) &&
         (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1 == iVar5)) {
        (**(code **)(*plVar1 + 0x3d8))(plVar1);
      }
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar5);
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar5);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar5);
        FUN_0058af20(uVar3,uVar4,param_2);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

