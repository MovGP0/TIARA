/* Ghidra address: 008ccd90 */
/* Ghidra symbol: FUN_008ccd90 */


undefined8 FUN_008ccd90(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"JIS_X0201");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"X0201");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"csHalfWidthKatakana");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

