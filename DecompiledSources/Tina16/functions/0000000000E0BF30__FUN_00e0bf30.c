/* Ghidra address: 00e0bf30 */
/* Ghidra symbol: FUN_00e0bf30 */


void FUN_00e0bf30(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  uVar4 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02001470,uVar2);
  *(undefined8 *)(param_1 + 0x728) = uVar4;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x10) + 0x10) + -1;
  if (iVar3 < iVar6) {
    iVar6 = iVar3;
  }
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x278))(*(longlong **)(param_1 + 0x6f0));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x278))(*(longlong **)(param_1 + 0x6e8));
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x10) + 0x10);
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x10),iVar7);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar5 + 8));
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x728) + 0x10),iVar6);
  *(longlong *)(param_1 + 0x730) = lVar5;
  iVar3 = *(int *)(*(longlong *)(lVar5 + 0x18) + 0x10);
  iVar7 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x18),iVar7);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar5 + 8));
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))(*(longlong **)(param_1 + 0x6e0),uVar2);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),iVar6);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),0);
  return;
}

