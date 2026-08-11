/* Ghidra address: 00f2eb50 */
/* Ghidra symbol: FUN_00f2eb50 */


int FUN_00f2eb50(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
    }
    iVar1 = iVar1 * 6 + 2;
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}

