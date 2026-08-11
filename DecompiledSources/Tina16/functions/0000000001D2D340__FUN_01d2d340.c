/* Ghidra address: 01d2d340 */
/* Ghidra symbol: FUN_01d2d340 */


void FUN_01d2d340(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(*(longlong **)(param_1 + 0x48));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x30))
                        (*(longlong **)(param_1 + 0x48),iVar3 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))(*(longlong **)(param_1 + 0x48));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x90))(*(longlong **)(param_1 + 0x48));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(*(longlong **)(param_1 + 0x50));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))
                        (*(longlong **)(param_1 + 0x50),iVar3 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(*(longlong **)(param_1 + 0x50));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x90))(*(longlong **)(param_1 + 0x50));
  }
  return;
}

