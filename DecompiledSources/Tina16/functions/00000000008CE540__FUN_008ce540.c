/* Ghidra address: 008ce540 */
/* Ghidra symbol: FUN_008ce540 */


undefined8 FUN_008ce540(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM274");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"EBCDIC-BE");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"CP274");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM274");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

