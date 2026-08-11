/* Ghidra address: 008ce030 */
/* Ghidra symbol: FUN_008ce030 */


undefined8 FUN_008ce030(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ebcdic-cp-ca");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"IBM037");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"cp037");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ebcdic-cp-us");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"ebcdic-cp-wt");
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,L"ebcdic-cp-nl");
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"csIBM037");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

