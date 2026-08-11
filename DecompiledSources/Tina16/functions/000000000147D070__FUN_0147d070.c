/* Ghidra address: 0147d070 */
/* Ghidra symbol: FUN_0147d070 */


int FUN_0147d070(int param_1,char param_2)

{
  if (param_2 == '\0') {
    param_1 = param_1 / 8 << 3;
  }
  else if (param_1 % 8 != 0) {
    param_1 = (param_1 / 8 + 1) * 8;
  }
  return param_1;
}

