/* Ghidra address: 01ad16a0 */
/* Ghidra symbol: FUN_01ad16a0 */


void FUN_01ad16a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
      lVar4 = FUN_004113f0(uVar3,&DAT_01cdd500);
      uVar2 = FUN_00b905e0(2,*(int *)(lVar4 + 0x98) + -1);
      *(undefined4 *)(lVar4 + 0x98) = uVar2;
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01acfc60(param_1);
  FUN_01aceb90(param_1,1);
  return;
}

