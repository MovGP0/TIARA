/* Ghidra address: 008d0520 */
/* Ghidra symbol: FUN_008d0520 */


undefined8 FUN_008d0520(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"IBM865");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp865");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,&DAT_008d05e4);
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"csIBM865");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

