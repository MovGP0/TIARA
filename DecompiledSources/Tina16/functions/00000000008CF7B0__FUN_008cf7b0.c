/* Ghidra address: 008cf7b0 */
/* Ghidra symbol: FUN_008cf7b0 */


undefined8 FUN_008cf7b0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM424");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp424");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"ebcdic-cp-he");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM424");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

