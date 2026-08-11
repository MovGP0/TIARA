/* Ghidra address: 008cfde0 */
/* Ghidra symbol: FUN_008cfde0 */


undefined8 FUN_008cfde0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM857");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp857");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,&DAT_008cfea4);
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM857");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

