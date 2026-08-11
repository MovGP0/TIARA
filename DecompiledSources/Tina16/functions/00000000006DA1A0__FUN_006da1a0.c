/* Ghidra address: 006da1a0 */
/* Ghidra symbol: FUN_006da1a0 */


void FUN_006da1a0(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0x24)) {
    param_2 = *(int *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x28) < param_2) {
    param_2 = *(int *)(param_1 + 0x28);
  }
  if ((*(int *)(param_1 + 0x20) != param_2) &&
     (*(int *)(param_1 + 0x20) = param_2, *(longlong *)(param_1 + 8) != 0)) {
    iVar1 = FUN_004b1870(param_1);
    FUN_004b1830(param_1,iVar1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x10) +
                                 -1);
  }
  return;
}

