/* Ghidra address: 00743c00 */
/* Ghidra symbol: FUN_00743c00 */


undefined8 FUN_00743c00(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x499) == '\0') && (cVar1 = FUN_0065d1c0(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

