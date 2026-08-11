/* Ghidra address: 00d835d0 */
/* Ghidra symbol: FUN_00d835d0 */


undefined8 FUN_00d835d0(byte param_1)

{
  if (param_1 < 6) {
    if (param_1 == 5) {
      return 0xe;
    }
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 0xc;
      }
      if (param_1 == 0) {
        return 0x11;
      }
      if (param_1 == 1) {
        return 0xb;
      }
    }
    else {
      if (param_1 == 3) {
        return 0xd;
      }
      if (param_1 == 4) {
        return 0xd;
      }
    }
  }
  else {
    if (param_1 == 6) {
      return 0xe;
    }
    if (param_1 == 7) {
      return 0xf;
    }
    if (param_1 == 8) {
      return 0xf;
    }
    if (param_1 == 9) {
      return 0x10;
    }
  }
  return 0;
}

