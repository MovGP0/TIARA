/* Ghidra address: 008d18f0 */
/* Ghidra symbol: FUN_008d18f0 */


undefined8 FUN_008d18f0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"windows-1250");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp1250");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"WinLatin2");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

