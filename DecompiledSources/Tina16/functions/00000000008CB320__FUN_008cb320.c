/* Ghidra address: 008cb320 */
/* Ghidra symbol: FUN_008cb320 */


undefined8 FUN_008cb320(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 5) {
    if (param_3 == 4) {
      FUN_00414ad0(param_2,L"latin1");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414ad0(param_2,L"ISO_8859-1:1987");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414ad0(param_2,L"iso-ir-100");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414ad0(param_2,L"ISO_8859-1");
      return param_2;
    }
    if (param_3 == 3) {
      FUN_00414ad0(param_2,L"ISO-8859-1");
      return param_2;
    }
  }
  else {
    if (param_3 == 5) {
      FUN_00414ad0(param_2,&DAT_008cb508);
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414ad0(param_2,L"IBM819");
      return param_2;
    }
    if (param_3 == 7) {
      FUN_00414ad0(param_2,L"CP819");
      return param_2;
    }
    if (param_3 == 8) {
      FUN_00414ad0(param_2,L"csISOLatin1");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

