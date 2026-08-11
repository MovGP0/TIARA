/* Ghidra address: 00a92c20 */
/* Ghidra symbol: FUN_00a92c20 */


char FUN_00a92c20(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == '\x03') {
    cVar1 = '\x02';
  }
  else if (cVar1 == '\b') {
    cVar1 = '\a';
  }
  return cVar1;
}

