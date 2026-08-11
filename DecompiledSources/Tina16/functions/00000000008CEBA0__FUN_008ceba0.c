/* Ghidra address: 008ceba0 */
/* Ghidra symbol: FUN_008ceba0 */


undefined8 FUN_008ceba0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM280");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"CP280");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"ebcdic-cp-it");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM280");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

