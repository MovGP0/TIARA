/* Ghidra address: 016d65a0 */
/* Ghidra symbol: FUN_016d65a0 */


int FUN_016d65a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = 0xac44;
  }
  return iVar1;
}

