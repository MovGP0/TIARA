/* Ghidra address: 0064dcd0 */
/* Ghidra symbol: FUN_0064dcd0 */


int FUN_0064dcd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x9c);
  }
  return iVar1;
}

