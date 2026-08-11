/* Ghidra address: 0185a7d0 */
/* Ghidra symbol: FUN_0185a7d0 */


undefined8 FUN_0185a7d0(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xff;
  if (param_2 < 4) {
    param_2 = param_2 - 1;
    if (param_2 != 0xffffffffffffffff) {
      if (param_2 < 2) {
        return 0;
      }
      if (param_2 != 2) {
        return 2;
      }
      return 3;
    }
  }
  else if (2 < param_2 - 4) {
    if (param_2 == 7) {
      return 6;
    }
    if (param_2 != 8) {
      return 2;
    }
  }
  return 2;
}

