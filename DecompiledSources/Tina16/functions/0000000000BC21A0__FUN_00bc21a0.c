/* Ghidra address: 00bc21a0 */
/* Ghidra symbol: FUN_00bc21a0 */


undefined8 FUN_00bc21a0(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffff;
  if (param_2 < 0x7b) {
    if (((0x2f < param_2) && (6 < param_2 - 0x3a)) &&
       ((3 < param_2 - 0x5b && (param_2 - 0x5b != 5)))) {
      return 0;
    }
  }
  else if ((((3 < param_2 - 0x7b) && (param_2 != 0xa7)) && (param_2 != 0xb0)) && (param_2 != 0xb4))
  {
    return 0;
  }
  return 1;
}

