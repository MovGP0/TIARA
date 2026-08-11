/* Ghidra address: 0056b5e0 */
/* Ghidra symbol: FUN_0056b5e0 */


void FUN_0056b5e0(undefined8 param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  if ((param_4 < 0) ||
     ((((param_2 < param_4 && (0 < param_5)) || (param_2 < param_4 + param_5 + -1)) ||
      ((param_5 < 0 || (param_4 + param_5 < 0)))))) {
    FUN_00594f90();
  }
  if ((param_2 != -1) && (1 < param_5)) {
    FUN_005730b0(param_1,param_2,param_3,param_4,param_4 + param_5 + -1);
  }
  return;
}

