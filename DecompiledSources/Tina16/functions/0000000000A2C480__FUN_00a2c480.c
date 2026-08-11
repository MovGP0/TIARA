/* Ghidra address: 00a2c480 */
/* Ghidra symbol: FUN_00a2c480 */


ulonglong FUN_00a2c480(byte param_1,uint param_2,uint param_3)

{
  if (param_1 < 4) {
    if ((param_1 == 3) || (param_1 == 0)) {
      return 0;
    }
    if (param_1 == 1) {
      return (longlong)(int)param_3 / 2 & 0xffffffff;
    }
    if (param_1 != 2) {
      return 0;
    }
  }
  else if (param_1 != 4) {
    if (param_1 == 5) {
      return (longlong)(int)(param_3 * param_2) / 100 & 0xffffffff;
    }
    if (param_1 != 6) {
      return 0;
    }
    return (ulonglong)param_2;
  }
  return (ulonglong)param_3;
}

