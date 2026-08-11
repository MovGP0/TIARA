/* Ghidra address: 008ed5f0 */
/* Ghidra symbol: FUN_008ed5f0 */


undefined2 FUN_008ed5f0(undefined8 param_1,byte param_2)

{
  if (param_2 < 0x5c) {
    if (param_2 == 0x5b) {
      return 0xa5;
    }
    if (param_2 == 0x4a) {
      return 0xa3;
    }
    if (param_2 == 0x4f) {
      return 0x7c;
    }
    if (param_2 == 0x5a) {
      return 0x21;
    }
  }
  else {
    if (param_2 == 0x5f) {
      return 0xac;
    }
    if (param_2 == 0xa1) {
      return 0x203e;
    }
    if (param_2 == 0xe0) {
      return 0x24;
    }
  }
  return *(undefined2 *)(&DAT_01e28eec + (ulonglong)param_2 * 2);
}

