/* Ghidra address: 01379150 */
/* Ghidra symbol: FUN_01379150 */


void FUN_01379150(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x70);
  iVar2 = (**(code **)(*plVar1 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar6);
      iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),uVar4);
      if (iVar3 == -1) {
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar6);
        FUN_00410f20(uVar4);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar6);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011051a8);
      if (*(longlong *)(lVar5 + 0xd8) != 0) {
        FUN_004095f0(*(longlong *)(lVar5 + 0xd8));
      }
      *(undefined8 *)(lVar5 + 0xd8) = 0;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x88));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x118));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
  FUN_010dbcf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

