/* Ghidra address: 0149af30 */
/* Ghidra symbol: FUN_0149af30 */


void FUN_0149af30(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((param_4 == 0) && (param_3 == *(int *)(param_1 + 0x924))) {
    uVar1 = (longlong)(*(int *)(param_1 + 0x920) + 1) % 3;
    iVar2 = (int)uVar1;
    *(int *)(param_1 + 0x920) = iVar2;
    if (iVar2 != 0) {
      FUN_0149b050(param_1,param_3,uVar1 & 0xffffffff);
    }
  }
  return;
}

