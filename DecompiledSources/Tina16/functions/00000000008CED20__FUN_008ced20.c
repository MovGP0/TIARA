/* Ghidra address: 008ced20 */
/* Ghidra symbol: FUN_008ced20 */


undefined8 FUN_008ced20(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM281");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"EBCDIC-JP-E");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"cp281");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM281");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

