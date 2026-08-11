/* Ghidra address: 01695ab0 */
/* Ghidra symbol: FUN_01695ab0 */


void FUN_01695ab0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = 1;
  bVar1 = false;
  FUN_00415020(param_3,&LAB_01695b40,param_4);
  do {
    if (*(int *)(*(longlong *)(param_1 + 0x300) + -4 + (longlong)iVar2 * 4) == param_2) {
      bVar1 = true;
      FUN_00415020(param_3,*(longlong *)(param_1 + 0x2f8) + -9 + (longlong)iVar2 * 9,param_4);
    }
    iVar2 = iVar2 + 1;
  } while ((!bVar1) && (iVar2 <= *(int *)(param_1 + 0x31c)));
  return;
}

