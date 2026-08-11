/* Ghidra address: 00b84a60 */
/* Ghidra symbol: FUN_00b84a60 */


uint FUN_00b84a60(uint param_1)

{
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) == 0) {
      param_1 = param_1 >> 2;
    }
    else {
      param_1 = param_1 >> 2 ^ 0x5a;
    }
  }
  else if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 2 ^ 0xb4;
  }
  else {
    param_1 = param_1 >> 2 ^ 0xee;
  }
  return param_1;
}

