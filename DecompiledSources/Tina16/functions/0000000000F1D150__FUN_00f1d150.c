/* Ghidra address: 00f1d150 */
/* Ghidra symbol: FUN_00f1d150 */


void FUN_00f1d150(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar6 = 1;
  if (0 < iVar2) {
    do {
      iVar7 = iVar6 + -1;
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      FUN_005fc860(*(undefined8 *)(lVar4 + 0x98),param_2);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      iVar3 = FUN_005fce00(*(undefined8 *)(lVar5 + 0x98));
      FUN_005fce30(*(undefined8 *)(lVar4 + 0x98),iVar3 + param_3);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      FUN_005fc860(*(undefined8 *)(lVar4 + 0xa0),param_2);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      iVar3 = FUN_005fce00(*(undefined8 *)(lVar5 + 0xa0));
      FUN_005fce30(*(undefined8 *)(lVar4 + 0xa0),iVar3 + param_3);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar6 = 1;
  if (0 < iVar2) {
    do {
      iVar7 = iVar6 + -1;
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      FUN_005fc860(*(undefined8 *)(lVar4 + 0x98),param_2);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      iVar3 = FUN_005fce00(*(undefined8 *)(lVar5 + 0x98));
      FUN_005fce30(*(undefined8 *)(lVar4 + 0x98),iVar3 + param_3);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      FUN_005fc860(*(undefined8 *)(lVar4 + 0xa0),param_2);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      lVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar7);
      iVar3 = FUN_005fce00(*(undefined8 *)(lVar5 + 0xa0));
      FUN_005fce30(*(undefined8 *)(lVar4 + 0xa0),iVar3 + param_3);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

