/* Ghidra address: 01a9a470 */
/* Ghidra symbol: FUN_01a9a470 */


int FUN_01a9a470(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0x128) == '\0') {
    if ((param_2 < 0) || (0x1a < param_2)) {
      if ((0x19 < param_2) && (param_2 < 0x2e)) {
        param_2 = DAT_021108e0;
      }
    }
    else {
      param_2 = (&DAT_02110878)[param_2];
    }
  }
  else if (param_2 == 0) {
    param_2 = 0xffffff;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

