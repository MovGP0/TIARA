/* Ghidra address: 01610d00 */
/* Ghidra symbol: FUN_01610d00 */


undefined8 FUN_01610d00(longlong param_1)

{
  undefined8 uVar1;
  
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x560) == '\0')); param_1 = FUN_017ff620(param_1)) {
  }
  if ((param_1 == 0) || (*(char *)(param_1 + 0x560) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

