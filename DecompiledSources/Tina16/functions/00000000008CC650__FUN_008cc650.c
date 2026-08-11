/* Ghidra address: 008cc650 */
/* Ghidra symbol: FUN_008cc650 */


undefined8 FUN_008cc650(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-8");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-8:1988");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-138");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-8");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"hebrew");
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,L"csISOLatinHebrew");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

