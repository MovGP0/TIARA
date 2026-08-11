/* Ghidra address: 00b3b1e0 */
/* Ghidra symbol: FUN_00b3b1e0 */


undefined8 FUN_00b3b1e0(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xff;
  if (param_2 < 7) {
    if (param_2 == 6) {
      FUN_00414bf0(param_1,"double");
      return param_1;
    }
    if (1 < param_2 - 1) {
      if (param_2 == 3) goto LAB_00b3b25c;
      if (param_2 == 4) {
LAB_00b3b26d:
        FUN_00414bf0(param_1,"dotted");
        return param_1;
      }
      if (param_2 != 5) {
LAB_00b3b28f:
        FUN_00414bf0(param_1,&LAB_00b3b304);
        return param_1;
      }
    }
  }
  else if (param_2 != 7) {
    if (2 < param_2 - 8) {
      if (param_2 - 0xb < 2) goto LAB_00b3b26d;
      if (param_2 - 0xb != 2) goto LAB_00b3b28f;
    }
LAB_00b3b25c:
    FUN_00414bf0(param_1,"dashed");
    return param_1;
  }
  FUN_00414bf0(param_1,"solid");
  return param_1;
}

