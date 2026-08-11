/* Ghidra address: 00687f70 */
/* Ghidra symbol: FUN_00687f70 */


int FUN_00687f70(int param_1)

{
  if (param_1 == -0x1000000) {
    param_1 = 0x20000000;
  }
  else if (param_1 == -1) {
    param_1 = 0x1fffffff;
  }
  return param_1;
}

