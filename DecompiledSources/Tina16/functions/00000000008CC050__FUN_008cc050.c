/* Ghidra address: 008cc050 */
/* Ghidra symbol: FUN_008cc050 */


undefined8 FUN_008cc050(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 5) {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"ECMA-114");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-6:1987");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-127");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-6");
      return param_2;
    }
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-6");
      return param_2;
    }
  }
  else {
    if (param_3 == 5) {
      FUN_00414ad0(param_2,L"ASMO-708");
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"arabic");
      return param_2;
    }
    if (param_3 == 7) {
      FUN_00414ad0(param_2,L"csISOLatinArabic");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

