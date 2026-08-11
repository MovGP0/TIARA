/* Ghidra address: 008ff290 */
/* Ghidra symbol: FUN_008ff290 */


undefined8 FUN_008ff290(int param_1)

{
  if (param_1 < 0x41) {
    if ((1 < param_1 - 0x2dU) && (9 < param_1 - 0x30U)) {
      return 0;
    }
  }
  else if (((0x19 < param_1 - 0x41U) && (param_1 != 0x5f)) && (0x19 < param_1 - 0x61U)) {
    return 0;
  }
  return 1;
}

