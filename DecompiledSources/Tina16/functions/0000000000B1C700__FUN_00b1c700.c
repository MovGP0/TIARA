/* Ghidra address: 00b1c700 */
/* Ghidra symbol: FUN_00b1c700 */


undefined8 FUN_00b1c700(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0x25) {
    if (param_2 - 1 == 0xffffffffffffffff) {
      FUN_00414bf0(param_1,"general");
      return param_1;
    }
    if (0xc < param_2 - 1) {
      if (8 < param_2 - 0xe) {
LAB_00b1c79a:
        FUN_004144d0(param_1);
        return param_1;
      }
LAB_00b1c778:
      FUN_00414bf0(param_1,&DAT_00b1c7e0);
      return param_1;
    }
  }
  else if (7 < param_2 - 0x25) {
    if (param_2 - 0x2d < 3) goto LAB_00b1c778;
    if (param_2 != 0x30) {
      if (param_2 == 0x31) {
        FUN_00414bf0(param_1,&DAT_00b1c7f4);
        return param_1;
      }
      goto LAB_00b1c79a;
    }
  }
  FUN_00414bf0(param_1,"double");
  return param_1;
}

