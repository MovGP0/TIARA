/* Ghidra address: 008cf930 */
/* Ghidra symbol: FUN_008cf930 */


undefined8 FUN_008cf930(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 3) {
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ebcdic-cp-be");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"IBM500");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"CP500");
      return param_2;
    }
  }
  else {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ebcdic-cp-ch");
      return param_2;
    }
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"csIBM500");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

