/* Ghidra address: 008cf4b0 */
/* Ghidra symbol: FUN_008cf4b0 */


undefined8 FUN_008cf4b0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM420");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp420");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"ebcdic-cp-ar1");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM420");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

