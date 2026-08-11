/* Ghidra address: 008d1a50 */
/* Ghidra symbol: FUN_008d1a50 */


undefined8 FUN_008d1a50(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"windows-1251");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp1251");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"WinCyrillic");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

