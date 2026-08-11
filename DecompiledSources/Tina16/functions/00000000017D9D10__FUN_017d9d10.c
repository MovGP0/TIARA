/* Ghidra address: 017d9d10 */
/* Ghidra symbol: FUN_017d9d10 */


void FUN_017d9d10(longlong param_1,char param_2)

{
  int *piVar1;
  
  *(char *)(param_1 + 0x92) = param_2;
  if (param_2 != '\0') {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x12d4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

