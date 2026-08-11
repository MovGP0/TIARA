/* Ghidra address: 00a92c00 */
/* Ghidra symbol: FUN_00a92c00 */


char FUN_00a92c00(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if ((cVar1 == '\x03') || (cVar1 == '\b')) {
    cVar1 = '\x01';
  }
  return cVar1;
}

