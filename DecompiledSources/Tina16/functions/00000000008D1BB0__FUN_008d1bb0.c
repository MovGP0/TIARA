/* Ghidra address: 008d1bb0 */
/* Ghidra symbol: FUN_008d1bb0 */


undefined8 FUN_008d1bb0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"windows-1252");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"cp1252");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"WinLatin1");
  }
  else {
    (*(code *)*param_1)(param_1);
  }
  return param_2;
}

