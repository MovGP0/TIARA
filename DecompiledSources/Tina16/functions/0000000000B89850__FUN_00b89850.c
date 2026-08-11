/* Ghidra address: 00b89850 */
/* Ghidra symbol: FUN_00b89850 */


void FUN_00b89850(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(int *)(param_1 + 0x4a4) + -1) / 2;
  iVar3 = 0;
  if (uVar4 < 0x80000000) {
    iVar5 = uVar4 + 1;
    do {
      uVar1 = FUN_00848220(param_1,iVar3);
      uVar2 = FUN_00848220(param_1,(*(int *)(param_1 + 0x4a4) - iVar3) + -1);
      FUN_00848460(param_1,iVar3,uVar2);
      FUN_00848460(param_1,(*(int *)(param_1 + 0x4a4) - iVar3) + -1,uVar1);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

