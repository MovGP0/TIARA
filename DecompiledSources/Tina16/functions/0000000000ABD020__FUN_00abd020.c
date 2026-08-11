/* Ghidra address: 00abd020 */
/* Ghidra symbol: FUN_00abd020 */


int FUN_00abd020(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x6c) != 0) &&
      (param_2 < *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c))) &&
     (iVar2 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1, -1 < iVar2)) {
    do {
      lVar1 = FUN_00ab4030(param_1,iVar2);
      if (*(int *)(lVar1 + 8) <= param_2 - *(int *)(param_1 + 0x68)) {
        return ((*(int *)(lVar1 + 0xc) + param_2) - *(int *)(param_1 + 0x68)) - *(int *)(lVar1 + 8);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return -1;
}

