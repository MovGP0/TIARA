/* Ghidra address: 00b1ba50 */
/* Ghidra symbol: FUN_00b1ba50 */


char FUN_00b1ba50(ushort param_1)

{
  char cVar1;
  
  if ((param_1 < 8) || (0x41 < param_1)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = (char)param_1 + -7;
  }
  return cVar1;
}

