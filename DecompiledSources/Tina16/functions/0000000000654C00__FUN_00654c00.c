/* Ghidra address: 00654c00 */
/* Ghidra symbol: FUN_00654c00 */


int FUN_00654c00(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x370) + 0x10);
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x378) + 0x10);
  }
  return iVar1;
}

