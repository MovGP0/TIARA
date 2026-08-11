/* Ghidra address: 00e16270 */
/* Ghidra symbol: FUN_00e16270 */


undefined8 FUN_00e16270(byte param_1)

{
  if (param_1 < 5) {
    if (param_1 == 4) {
      return 0xc1e0000000000000;
    }
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == 1) {
      return 0xc060000000000000;
    }
    if (param_1 == 2) {
      return 0xc0e0000000000000;
    }
    if (param_1 == 3) {
      return 0xc1e0000000000000;
    }
  }
  else {
    if (param_1 == 5) {
      return 0xc1e0000000000000;
    }
    if (param_1 == 6) {
      return 0x39b4484bfeebc2a0;
    }
    if (param_1 == 7) {
      return 0x39b4484bfeebc2a0;
    }
  }
  return 0x39b4484bfeebc2a0;
}

