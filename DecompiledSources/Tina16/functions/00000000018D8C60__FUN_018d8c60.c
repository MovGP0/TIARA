/* Ghidra address: 018d8c60 */
/* Ghidra symbol: FUN_018d8c60 */


int FUN_018d8c60(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_2 + param_3 + -1;
  if (param_2 <= iVar2) {
    iVar2 = (iVar2 - param_2) + 1;
    do {
      iVar1 = iVar1 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x20) +
                              (longlong)param_2 * 4);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

