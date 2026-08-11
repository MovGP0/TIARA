/* Ghidra address: 011373a0 */
/* Ghidra symbol: FUN_011373a0 */


void FUN_011373a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x7f9) == '\0') {
    cVar1 = FUN_010e1c50(param_1,param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_010e1d20(param_1,param_2);
      if (cVar1 != '\0') {
        FUN_0113cec0(param_1);
      }
    }
  }
  if (*(char *)(param_1 + 0x7f9) == '\x01') {
    cVar1 = FUN_010e1d20(param_1,param_2);
    if ((cVar1 != '\0') && (PTR_DAT_02004010[0x7c6] != '\0')) {
      FUN_0113cec0(param_1);
    }
  }
  return;
}

