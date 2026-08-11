/* Ghidra address: 008cc8b0 */
/* Ghidra symbol: FUN_008cc8b0 */


undefined8 FUN_008cc8b0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-9");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-9:1989");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-148");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-9");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"latin5");
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,&DAT_008cca4c);
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"csISOLatin5");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

