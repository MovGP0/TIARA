/* Ghidra address: 01d42070 */
/* Ghidra symbol: FUN_01d42070 */


undefined8 FUN_01d42070(int param_1)

{
  char cVar1;
  
  if (((param_1 != 0x9f) && (param_1 != 0xaf)) && (cVar1 = FUN_01d41fb0(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

