/* Ghidra address: 016300f0 */
/* Ghidra symbol: FUN_016300f0 */


int FUN_016300f0(undefined8 param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 1;
  }
  else if (param_2 == 0) {
    param_2 = 1;
  }
  else if (param_2 == 1) {
    param_2 = 0;
  }
  return param_2;
}

