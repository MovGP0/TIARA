/* Ghidra address: 008ff170 */
/* Ghidra symbol: FUN_008ff170 */


undefined8 FUN_008ff170(int param_1)

{
  if (param_1 < 0x37f) {
    if (param_1 < 0xc0) {
      if ((((param_1 != 0x3a) && (0x19 < param_1 - 0x41U)) && (param_1 != 0x5f)) &&
         (0x19 < param_1 - 0x61U)) {
        return 0;
      }
    }
    else if (((0x16 < param_1 - 0xc0U) && (0x1e < param_1 - 0xd8U)) &&
            ((0x207 < param_1 - 0xf8U && (0xd < param_1 - 0x370U)))) {
      return 0;
    }
  }
  else if (param_1 < 0x3001) {
    if (((0x1c80 < param_1 - 0x37fU) && (1 < param_1 - 0x200cU)) &&
       ((0x11f < param_1 - 0x2070U && (0x3ef < param_1 - 0x2c00U)))) {
      return 0;
    }
  }
  else if ((((0xa7fe < param_1 - 0x3001U) && (0x4cf < param_1 - 0xf900U)) &&
           (0x20d < param_1 - 0xfdf0U)) && (0xdffff < param_1 - 0x10000U)) {
    return 0;
  }
  return 1;
}

