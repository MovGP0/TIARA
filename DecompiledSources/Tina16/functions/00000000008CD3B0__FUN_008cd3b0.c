/* Ghidra address: 008cd3b0 */
/* Ghidra symbol: FUN_008cd3b0 */


undefined8 FUN_008cd3b0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"latin9");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO-8859-15");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"ISO_8869-15");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"Latin-9");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,&DAT_008cd518);
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,L"latin0");
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,&LAB_008cd548);
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

