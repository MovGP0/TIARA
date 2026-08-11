/* Ghidra address: 008cb8c0 */
/* Ghidra symbol: FUN_008cb8c0 */


undefined8 FUN_008cb8c0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-3");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-3:1988");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-109");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-3");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"latin3");
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,&DAT_008cba5c);
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"csISOLatin3");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

