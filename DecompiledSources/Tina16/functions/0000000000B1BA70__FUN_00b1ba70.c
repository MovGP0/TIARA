/* Ghidra address: 00b1ba70 */
/* Ghidra symbol: FUN_00b1ba70 */


undefined1 FUN_00b1ba70(ulonglong param_1)

{
  param_1 = param_1 & 0xff;
  if (param_1 < 10) {
    if (param_1 == 9) {
      return 1;
    }
    if (param_1 - 1 < 4) {
      return 1;
    }
    if (1 < param_1 - 5) {
      if (param_1 == 7) {
        return 1;
      }
      if (param_1 != 8) {
        return 1;
      }
    }
  }
  else if (param_1 != 10) {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) {
        return 2;
      }
      if (param_1 != 0xd) {
        return 1;
      }
    }
    return 1;
  }
  return 2;
}

