/* Ghidra address: 004ba100 */
/* Ghidra symbol: FUN_004ba100 */


int FUN_004ba100(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (((param_1[3] < 0) || (param_3 < 0)) || (lVar1 = param_1[3] + (longlong)param_3, lVar1 < 1)) {
    param_3 = 0;
  }
  else {
    if (param_1[2] < lVar1) {
      if (param_1[4] < lVar1) {
        (**(code **)(*param_1 + 0x60))(param_1,lVar1);
      }
      param_1[2] = lVar1;
    }
    FUN_00409a70(param_2,param_1[1] + param_1[3],(longlong)param_3);
    param_1[3] = lVar1;
  }
  return param_3;
}

