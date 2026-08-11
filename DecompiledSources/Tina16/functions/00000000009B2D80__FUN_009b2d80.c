/* Ghidra address: 009b2d80 */
/* Ghidra symbol: FUN_009b2d80 */


void FUN_009b2d80(undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  if ((param_4 < 0) ||
     ((((param_2 < param_4 && (0 < param_5)) || (param_2 < param_4 + param_5 + -1)) ||
      ((param_5 < 0 || (param_4 + param_5 < 0)))))) {
    FUN_00594f90();
  }
  if ((param_2 != -1) && (1 < param_5)) {
    FUN_009b62a0(param_1,param_2,param_3,param_4,param_4 + param_5 + -1);
  }
  return;
}

