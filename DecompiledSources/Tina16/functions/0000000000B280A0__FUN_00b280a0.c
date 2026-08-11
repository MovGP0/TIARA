/* Ghidra address: 00b280a0 */
/* Ghidra symbol: FUN_00b280a0 */


undefined8 FUN_00b280a0(byte param_1)

{
  if (param_1 < 9) {
    if (param_1 == 8) {
      return 7;
    }
    if (param_1 < 5) {
      if (param_1 == 4) {
        return 3;
      }
      if (param_1 == 1) {
        return 0;
      }
      if (param_1 == 2) {
        return 1;
      }
      if (param_1 == 3) {
        return 2;
      }
    }
    else {
      if (param_1 == 5) {
        return 4;
      }
      if (param_1 == 6) {
        return 5;
      }
      if (param_1 == 7) {
        return 6;
      }
    }
  }
  else if (param_1 < 0xd) {
    if (param_1 == 0xc) {
      return 0xb;
    }
    if (param_1 == 9) {
      return 8;
    }
    if (param_1 == 10) {
      return 9;
    }
    if (param_1 == 0xb) {
      return 10;
    }
  }
  else {
    if (param_1 == 0xd) {
      return 0xc;
    }
    if (param_1 == 0xe) {
      return 0xd;
    }
  }
  return 0xff;
}

