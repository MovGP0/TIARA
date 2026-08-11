/* Ghidra address: 0160d2f0 */
/* Ghidra symbol: FUN_0160d2f0 */


undefined8 FUN_0160d2f0(longlong param_1,undefined8 param_2)

{
  FUN_00414480(param_2);
  if (**(int **)(param_1 + 0x8a8) == 1) {
    FUN_00414ad0(param_2,L"invalid literal");
  }
  else if (**(int **)(param_1 + 0x8a8) == 2) {
    FUN_00414ad0(param_2,L"comma expected");
  }
  else if (**(int **)(param_1 + 0x8a8) == 3) {
    FUN_00414ad0(param_2,L"too many data");
  }
  else if (**(int **)(param_1 + 0x8a8) == 4) {
    FUN_00414ad0(param_2,L"invalid list");
  }
  else if (**(int **)(param_1 + 0x8a8) == 5) {
    FUN_00414ad0(param_2,L"only 8bit values accepted");
  }
  else if (**(int **)(param_1 + 0x8a8) == 6) {
    FUN_00414ad0(param_2,L"invalid time value");
  }
  return param_2;
}

