/* Ghidra address: 01798270 */
/* Ghidra symbol: FUN_01798270 */


void FUN_01798270(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar2 = FUN_0068bee0(*(undefined8 *)(param_1 + 0x758));
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  (**(code **)(**(longlong **)(param_1 + 0x758) + 0x278))(*(longlong **)(param_1 + 0x758));
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x758) + 0x4a0));
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
                (*(longlong **)(param_1 + 0xd18),local_40,iVar6);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                        (*(longlong **)(param_1 + 0xd18),iVar6);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_40[0],uVar5);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar4 = FUN_017919e0(uVar2,iVar4 + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
  iVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar6 = FUN_017919e0(uVar3,iVar6 + -1);
  if (iVar6 != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),iVar6);
  }
  if (iVar4 != -1) {
    FUN_0068c170(*(undefined8 *)(param_1 + 0x758),iVar4);
  }
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x758) + 0x4a0));
  FUN_00414480(local_40);
  return;
}

