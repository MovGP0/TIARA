/* Ghidra address: 00a32fa0 */
/* Ghidra symbol: FUN_00a32fa0 */


ulonglong FUN_00a32fa0(int param_1,byte param_2,uint param_3)

{
  if (param_2 < 4) {
    if ((param_2 == 3) || (param_2 == 0)) {
      return (longlong)(int)(param_1 * (param_3 & 0xff) + 7) / 8 & 0xffffffff;
    }
    if (param_2 == 2) {
      return (longlong)(int)(param_1 * (param_3 & 0xff) * 3) / 8 & 0xffffffff;
    }
  }
  else {
    if (param_2 == 4) {
      return (longlong)(int)(param_1 * (param_3 & 0xff) * 2) / 8 & 0xffffffff;
    }
    if (param_2 == 6) {
      return (longlong)(int)(param_1 * (param_3 & 0xff) * 4) / 8 & 0xffffffff;
    }
  }
  return 0;
}

