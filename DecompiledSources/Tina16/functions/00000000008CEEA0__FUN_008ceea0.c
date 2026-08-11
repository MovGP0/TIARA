/* Ghidra address: 008ceea0 */
/* Ghidra symbol: FUN_008ceea0 */


undefined8 FUN_008ceea0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM284");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"CP284");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"ebcdic-cp-es");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM284");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

