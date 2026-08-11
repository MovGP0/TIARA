/* Ghidra address: 00b84a40 */
/* Ghidra symbol: FUN_00b84a40 */


uint FUN_00b84a40(uint param_1)

{
  if ((param_1 & 1) == 0) {
    param_1 = param_1 >> 1;
  }
  else {
    param_1 = param_1 >> 1 ^ 0xb4;
  }
  return param_1;
}

