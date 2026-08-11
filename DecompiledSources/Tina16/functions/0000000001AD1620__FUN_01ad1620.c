/* Ghidra address: 01ad1620 */
/* Ghidra symbol: FUN_01ad1620 */


void FUN_01ad1620(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
      lVar3 = FUN_004113f0(uVar2,&DAT_01cdd500);
      *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01acfc60(param_1);
  FUN_01aceb90(param_1,1);
  return;
}

