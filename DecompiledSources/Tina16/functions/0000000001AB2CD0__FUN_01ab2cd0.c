/* Ghidra address: 01ab2cd0 */
/* Ghidra symbol: FUN_01ab2cd0 */


void FUN_01ab2cd0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_01d2c5e0(param_1);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))(*(longlong **)(param_1 + 0xb0));
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
                        (*(longlong **)(param_1 + 0xb0),iVar3 + -1);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01d2a288);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
  return;
}

