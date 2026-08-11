/* Ghidra address: 00be71e0 */
/* Ghidra symbol: FUN_00be71e0 */


int FUN_00be71e0(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 + -1) * 4);
    }
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 + param_3 + -1) * 4);
    iVar4 = iVar3 - iVar4;
    iVar2 = FUN_00be7fe0(param_1);
    if (iVar3 < iVar2) {
      FUN_00be7460(param_1,iVar3,-iVar4);
    }
    FUN_00be7410(param_1,param_2 + param_3,-param_3);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - param_3;
    iVar3 = *(int *)(param_1 + 0x30) + -1;
    if (param_2 <= iVar3) {
      iVar3 = (iVar3 - param_2) + 1;
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 4);
        *piVar1 = *piVar1 - iVar4;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return iVar4;
}

