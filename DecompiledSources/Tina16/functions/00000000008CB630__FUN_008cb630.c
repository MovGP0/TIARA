/* Ghidra address: 008cb630 */
/* Ghidra symbol: FUN_008cb630 */


undefined8 FUN_008cb630(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 4) {
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-2");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-2:1987");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-101");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-2");
      return param_2;
    }
  }
  else {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"latin2");
      return param_2;
    }
    if (param_3 == 5) {
      FUN_00414ad0(param_2,&DAT_008cb7cc);
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"csISOLatin2");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

