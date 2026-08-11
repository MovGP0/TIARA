/* Ghidra address: 013c1460 */
/* Ghidra symbol: FUN_013c1460 */


undefined8 FUN_013c1460(byte param_1)

{
  if (param_1 < 7) {
    if (param_1 == 6) {
      return 1;
    }
    if (param_1 < 4) {
      if (param_1 == 3) {
        return 0;
      }
      if (param_1 == 0) {
        return 2;
      }
      if (param_1 == 1) {
        return 1;
      }
      if (param_1 == 2) {
        return 2;
      }
    }
    else {
      if (param_1 == 4) {
        return 1;
      }
      if (param_1 == 5) {
        return 1;
      }
    }
  }
  else if (param_1 < 10) {
    if (param_1 == 9) {
      return 2;
    }
    if (param_1 == 7) {
      return 3;
    }
    if (param_1 == 8) {
      return 1;
    }
  }
  else {
    if (param_1 == 10) {
      return 2;
    }
    if (param_1 == 0xb) {
      return 2;
    }
  }
  return 2;
}

