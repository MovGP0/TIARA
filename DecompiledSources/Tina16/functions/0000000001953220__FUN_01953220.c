/* Ghidra address: 01953220 */
/* Ghidra symbol: FUN_01953220 */


char FUN_01953220(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01921f40);
  if ((cVar1 == '\0') || (*(char *)(param_2 + 0x1a0) == '\a')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    if ((cVar1 == '\0') || (*(char *)(param_2 + 0xc5) == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  return cVar1;
}

