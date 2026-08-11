/* Ghidra address: 008ff3a0 */
/* Ghidra symbol: FUN_008ff3a0 */


undefined8 FUN_008ff3a0(ulonglong param_1)

{
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x370) {
    if (param_1 < 0x61) {
      if (((param_1 != 0x3a) && (0x19 < param_1 - 0x41)) && (param_1 - 0x41 != 0x1e)) {
        return 0;
      }
    }
    else if (((0x19 < param_1 - 0x61) && (0x16 < param_1 - 0xc0)) &&
            ((0x1e < param_1 - 0xd8 && (0x207 < param_1 - 0xf8)))) {
      return 0;
    }
  }
  else if (param_1 < 0x2c00) {
    if (((0xd < param_1 - 0x370) && (0x1c80 < param_1 - 0x37f)) &&
       ((1 < param_1 - 0x200c && (0x11f < param_1 - 0x2070)))) {
      return 0;
    }
  }
  else if ((((0x3ef < param_1 - 0x2c00) && (0xaffe < param_1 - 0x3001)) &&
           (0x4cf < param_1 - 0xf900)) && (0x20d < param_1 - 0xfdf0)) {
    return 0;
  }
  return 1;
}

