/* Ghidra address: 00e81700 */
/* Ghidra symbol: FUN_00e81700 */


undefined8 FUN_00e81700(ulonglong param_1)

{
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x7b) {
    if (((0x2f < param_1) && (6 < param_1 - 0x3a)) &&
       ((3 < param_1 - 0x5b && (param_1 - 0x5b != 5)))) {
      return 0;
    }
  }
  else if ((((3 < param_1 - 0x7b) && (param_1 != 0xa7)) && (param_1 != 0xb0)) && (param_1 != 0xb4))
  {
    return 0;
  }
  return 1;
}

