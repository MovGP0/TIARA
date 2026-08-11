/* Ghidra address: 008d1000 */
/* Ghidra symbol: FUN_008d1000 */


undefined8 FUN_008d1000(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM905");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"CP905");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"ebcdic-cp-tr");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM905");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

