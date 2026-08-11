/* Ghidra address: 008d1670 */
/* Ghidra symbol: FUN_008d1670 */


undefined8 FUN_008d1670(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM866");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp866");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,&DAT_008d1734);
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM866");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

