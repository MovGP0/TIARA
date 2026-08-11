/* Ghidra address: 008ce9d0 */
/* Ghidra symbol: FUN_008ce9d0 */


undefined8 FUN_008ce9d0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 3) {
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ebcdic-cp-fi");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"IBM278");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"CP278");
      return param_2;
    }
  }
  else {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ebcdic-cp-se");
      return param_2;
    }
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"csIBM278");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

