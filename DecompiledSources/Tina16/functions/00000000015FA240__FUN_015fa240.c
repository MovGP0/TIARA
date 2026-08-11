/* Ghidra address: 015fa240 */
/* Ghidra symbol: FUN_015fa240 */


short FUN_015fa240(ushort param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if ((0x2f < param_1) && (param_1 < 0x3a)) {
    sVar1 = param_1 - 0x30;
  }
  if ((0x40 < param_1) && (param_1 < 0x47)) {
    sVar1 = param_1 - 0x37;
  }
  if ((0x60 < param_1) && (param_1 < 0x67)) {
    sVar1 = param_1 - 0x57;
  }
  return sVar1;
}

