/* Ghidra address: 01cefe30 */
/* Ghidra symbol: FUN_01cefe30 */


int FUN_01cefe30(byte param_1,int param_2)

{
  param_2 = (uint)param_1 + param_2;
  if (param_2 < 0) {
    param_2 = 3;
  }
  if (3 < param_2) {
    param_2 = 0;
  }
  return param_2;
}

