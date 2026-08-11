/* Ghidra address: 00a28850 */
/* Ghidra symbol: FUN_00a28850 */


undefined8 FUN_00a28850(ulonglong param_1)

{
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x30) {
    if ((param_1 != 0x2b) && (1 < param_1 - 0x2d)) {
      return 0;
    }
  }
  else if (((9 < param_1 - 0x30) && (0x19 < param_1 - 0x41)) && (0x19 < param_1 - 0x61)) {
    return 0;
  }
  return 1;
}

