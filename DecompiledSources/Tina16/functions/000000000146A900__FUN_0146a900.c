/* Ghidra address: 0146a900 */
/* Ghidra symbol: FUN_0146a900 */


void FUN_0146a900(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x6c0) + 0xa9) != '\0') {
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x6c0) + 0x9c);
    iVar2 = FUN_00b905e0(0,*(int *)(*(longlong *)(param_1 + 0x858) + 0x90) +
                           *(int *)(*(longlong *)(param_1 + 0x858) + 0x98));
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x98);
  uVar3 = FUN_0064d120(param_1);
  uVar4 = FUN_00b905e0(uVar3,uVar4);
  FUN_007fdf10(param_1,uVar4);
  uVar4 = FUN_0064d0b0(param_1);
  uVar4 = FUN_00b905e0(uVar4,iVar2 + iVar1 + 10);
  FUN_007fded0(param_1,uVar4);
  return;
}

