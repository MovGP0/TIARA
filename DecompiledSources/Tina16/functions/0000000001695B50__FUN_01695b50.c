/* Ghidra address: 01695b50 */
/* Ghidra symbol: FUN_01695b50 */


void FUN_01695b50(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 1;
  bVar1 = false;
  FUN_00415020(param_3,&LAB_01695be0,param_4);
  do {
    if (*(int *)(*(longlong *)(param_1 + 0x310) + -4 + (longlong)iVar2 * 4) == param_2) {
      bVar1 = true;
      FUN_00415020(param_3,*(longlong *)(param_1 + 0x308) + -9 + (longlong)iVar2 * 9,param_4);
    }
    iVar2 = iVar2 + 1;
  } while ((!bVar1) && (iVar2 <= *(int *)(param_1 + 800)));
  return;
}

