/* Ghidra address: 01465300 */
/* Ghidra symbol: FUN_01465300 */


void FUN_01465300(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0xa0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0x4d8));
  uVar5 = FUN_007ffaf0(param_1);
  iVar2 = FUN_008077f0(uVar5);
  uVar3 = FUN_0040c770((double)iVar2 * 0.75);
  uVar5 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x760));
  iVar2 = FUN_01d1b660(*(undefined8 *)(param_1 + 0x860),uVar5);
  uVar3 = FUN_00b905f0(uVar3,iVar2 + 8);
  uVar3 = FUN_00b905e0(0xe1,uVar3);
  FUN_007fded0(param_1,uVar3);
  uVar5 = FUN_007ffaf0(param_1);
  iVar2 = FUN_008077b0(uVar5);
  uVar3 = FUN_0040c770((double)iVar2 * 0.75);
  uVar5 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x760));
  iVar2 = FUN_01d1bfb0(*(undefined8 *)(param_1 + 0x860),uVar5);
  uVar3 = FUN_00b905f0(uVar3,iVar2 + 0x32);
  FUN_007fdf10(param_1,uVar3);
  uVar5 = FUN_007ffaf0(param_1);
  iVar2 = FUN_008077f0(uVar5);
  lVar6 = FUN_0040c770((double)iVar2 * 0.75);
  uVar5 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x760));
  iVar2 = FUN_01d1b660(*(undefined8 *)(param_1 + 0x860),uVar5);
  if (lVar6 < iVar2 + 8) {
    iVar2 = FUN_0064d120(param_1);
    FUN_007fdf10(param_1,iVar2 + 0xf);
  }
  uVar3 = FUN_007fd7d0(param_1);
  uVar5 = FUN_007ffaf0(param_1);
  iVar2 = FUN_00807790(uVar5);
  uVar5 = FUN_007ffaf0(param_1);
  iVar4 = FUN_008077f0(uVar5);
  uVar3 = FUN_00b905f0(uVar3,(iVar2 + iVar4) - *(int *)(param_1 + 0x98));
  FUN_00806af0(param_1,uVar3);
  uVar3 = FUN_007fd800(param_1);
  uVar5 = FUN_007ffaf0(param_1);
  iVar2 = FUN_008077d0(uVar5);
  uVar5 = FUN_007ffaf0(param_1);
  iVar4 = FUN_008077b0(uVar5);
  uVar3 = FUN_00b905f0(uVar3,((iVar2 + iVar4) - *(int *)(param_1 + 0x9c)) + -0x1e);
  uVar3 = FUN_00b905e0(0,uVar3);
  FUN_00806b40(param_1,uVar3);
  FUN_008059a0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x180))(*(longlong **)(param_1 + 0x758));
  return;
}

