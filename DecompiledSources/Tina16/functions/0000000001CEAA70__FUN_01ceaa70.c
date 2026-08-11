/* Ghidra address: 01ceaa70 */
/* Ghidra symbol: FUN_01ceaa70 */


void FUN_01ceaa70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar2 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_2 + 0x78));
  if (*(char *)(param_1 + 0xb1) != '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))(*(longlong **)(param_1 + 0x88),0);
    plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01cd9128);
    (**(code **)(*plVar4 + 0x70))(plVar4,param_2);
  }
  *(undefined1 *)(param_1 + 0xb1) = 0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
  plVar4 = (longlong *)FUN_004113f0(uVar3,&DAT_01ccbf00);
  (**(code **)(*plVar4 + 0x70))(plVar4,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar5);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&DAT_01ccbf00);
      (**(code **)(*plVar4 + 0x70))(plVar4,param_2);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar5 + -1);
      FUN_01ab63a0(uVar3,param_2);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_2 + 0x78) + 0x10))(*(longlong **)(param_2 + 0x78),plVar2);
  FUN_00410f20(plVar2);
  return;
}

