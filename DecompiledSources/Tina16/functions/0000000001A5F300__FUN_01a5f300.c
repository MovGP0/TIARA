/* Ghidra address: 01a5f300 */
/* Ghidra symbol: FUN_01a5f300 */


char FUN_01a5f300(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x11) == '\0') || (*(char *)(param_1 + 0x12) == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x58))
                          (*(longlong **)(param_1 + 0xa8)), cVar1 != '\0')) {
      return '\x01';
    }
    cVar1 = '\0';
  }
  return cVar1;
}

