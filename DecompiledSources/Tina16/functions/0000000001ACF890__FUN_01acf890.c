/* Ghidra address: 01acf890 */
/* Ghidra symbol: FUN_01acf890 */


void FUN_01acf890(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                        (*(longlong **)(param_1 + 0xe0),iVar3 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x90))(*(longlong **)(param_1 + 0xe0));
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar3 + -1);
      uVar2 = FUN_004113f0(uVar2,&DAT_01cdd500);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  if (0 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x90))(*(longlong **)(param_1 + 0xd8));
  }
  return;
}

