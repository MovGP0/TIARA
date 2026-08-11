/* Ghidra address: 01544f20 */
/* Ghidra symbol: FUN_01544f20 */


undefined8 FUN_01544f20(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 8) == 1) {
    FUN_00414ad0(param_2,L"analog");
  }
  else if (*(int *)(param_1 + 8) == 2) {
    FUN_00414ad0(param_2,L"digital");
  }
  else {
    FUN_00414ad0(param_2,L"undefined");
  }
  return param_2;
}

