/* Ghidra address: 01ce05c0 */
/* Ghidra symbol: FUN_01ce05c0 */


void FUN_01ce05c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar4 + -1);
      uVar2 = FUN_004113f0(uVar2,&DAT_01ccbf00);
      FUN_00410f20(uVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x90))(*(longlong **)(param_1 + 0x70));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar4 + -1);
      lVar3 = FUN_004113f0(uVar2,&DAT_01ccbf00);
      if (*(longlong *)(lVar3 + 0x118) != 0) {
        FUN_00410f20(*(longlong *)(lVar3 + 0x118));
      }
      FUN_00410f20(lVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))(*(longlong **)(param_1 + 0x78));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar4 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      FUN_00410f20(uVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(*(longlong **)(param_1 + 0x88));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                        (*(longlong **)(param_1 + 0x88),iVar4 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01cd9128);
      FUN_00410f20(uVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(*(longlong **)(param_1 + 0x88));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))(*(longlong **)(param_1 + 0x88));
  }
  return;
}

