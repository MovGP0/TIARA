/* Ghidra address: 0064dcf0 */
/* Ghidra symbol: FUN_0064dcf0 */


int FUN_0064dcf0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x114);
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x98);
  }
  return iVar1;
}

