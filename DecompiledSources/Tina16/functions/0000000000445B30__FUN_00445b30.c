/* Ghidra address: 00445b30 */
/* Ghidra symbol: FUN_00445b30 */


char FUN_00445b30(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x57 + (longlong)*(int *)(param_1 + 0x50));
  if (cVar1 == '\0') {
    cVar1 = '0';
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  return cVar1;
}

