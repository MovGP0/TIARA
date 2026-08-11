/* Ghidra address: 008cbb50 */
/* Ghidra symbol: FUN_008cbb50 */


undefined8 FUN_008cbb50(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-4");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-4:1988");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-110");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-4");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"latin4");
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,&DAT_008cbcec);
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"csISOLatin4");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

