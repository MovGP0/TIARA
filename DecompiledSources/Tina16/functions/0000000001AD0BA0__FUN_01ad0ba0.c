/* Ghidra address: 01ad0ba0 */
/* Ghidra symbol: FUN_01ad0ba0 */


void FUN_01ad0ba0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                        (*(longlong **)(param_1 + 0xe0),iVar4 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined8 *)(param_1 + 0x80));
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&DAT_01cdd500);
      (**(code **)(*plVar3 + 0x170))(plVar3,*(undefined8 *)(param_1 + 0x80));
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

