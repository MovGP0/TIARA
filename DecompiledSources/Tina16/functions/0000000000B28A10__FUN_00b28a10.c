/* Ghidra address: 00b28a10 */
/* Ghidra symbol: FUN_00b28a10 */


undefined8 FUN_00b28a10(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x20) == '\0') && (*(char *)(param_1 + 0x21) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

