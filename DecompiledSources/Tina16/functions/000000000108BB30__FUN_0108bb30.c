/* Ghidra address: 0108bb30 */
/* Ghidra symbol: FUN_0108bb30 */


int FUN_0108bb30(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xad8) == 4) {
    iVar1 = *(int *)(param_1 + 0x4c88) * 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c88);
  }
  return iVar1;
}

