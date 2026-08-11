/* Ghidra address: 01aa0a40 */
/* Ghidra symbol: FUN_01aa0a40 */


undefined2 FUN_01aa0a40(byte param_1)

{
  if (param_1 < 4) {
    if (param_1 == 3) {
      return 0x5a;
    }
    if (param_1 == 0) {
      return 0x30;
    }
    if (param_1 == 1) {
      return 0x31;
    }
    if (param_1 == 2) {
      return 0x58;
    }
  }
  else {
    if (param_1 == 4) {
      return 0x3f;
    }
    if (param_1 == 5) {
      return 0x5c;
    }
  }
  return 0x3f;
}

