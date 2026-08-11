/* Ghidra address: 00f8e620 */
/* Ghidra symbol: FUN_00f8e620 */


void FUN_00f8e620(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3473) != '\0') {
    cVar1 = FUN_00f8e610(param_1);
    if (cVar1 != '\0') {
      FUN_00f8e540(param_1);
    }
  }
  return;
}

