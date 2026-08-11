/* Ghidra address: 008d0800 */
/* Ghidra symbol: FUN_008d0800 */


undefined8 FUN_008d0800(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 3) {
    if (param_3 == 2) {
      FUN_00414ad0(param_2,&DAT_008d08e4);
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"IBM869");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"cp869");
      return param_2;
    }
  }
  else {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"cp-gr");
      return param_2;
    }
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"csIBM869");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

