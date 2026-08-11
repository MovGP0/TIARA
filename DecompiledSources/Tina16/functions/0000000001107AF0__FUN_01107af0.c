/* Ghidra address: 01107af0 */
/* Ghidra symbol: FUN_01107af0 */


void FUN_01107af0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 <= *(int *)(param_1 + 0x40)) {
    iVar4 = (*(int *)(param_1 + 0x40) - iVar3) + 1;
    do {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x30))
                        (*(longlong **)(param_1 + 0x50),iVar3);
      lVar2 = FUN_004113f0(uVar1,&PTR_FUN_01106728);
      *(undefined8 *)(lVar2 + 0x140) = 0;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

