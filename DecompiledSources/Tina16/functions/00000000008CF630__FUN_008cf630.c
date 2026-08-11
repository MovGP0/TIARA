/* Ghidra address: 008cf630 */
/* Ghidra symbol: FUN_008cf630 */


undefined8 FUN_008cf630(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM423");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp423");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"ebcdic-cp-gr");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM423");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

