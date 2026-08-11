/* Ghidra address: 00f11cb0 */
/* Ghidra symbol: FUN_00f11cb0 */


int FUN_00f11cb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48) * 8 + 0x16;
  if (*(char *)(param_1 + 0x70) != '\0') {
    iVar1 = iVar1 + *(int *)(param_1 + 0x48) * 0x10;
  }
  return iVar1 + 8;
}

