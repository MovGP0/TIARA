/* Ghidra address: 015c0c60 */
/* Ghidra symbol: FUN_015c0c60 */


undefined2 FUN_015c0c60(int param_1)

{
  if (param_1 < 3) {
    if (param_1 - 1U != 0xffffffff) {
      if (1 < param_1 - 1U) {
        return 0;
      }
      return 0x178;
    }
  }
  else {
    if (param_1 - 3U < 2) {
      return 0x5e78;
    }
    if (param_1 - 5U < 2) {
      return 0x9c78;
    }
    if (2 < param_1 - 7U) {
      return 0;
    }
  }
  return 0xda78;
}

