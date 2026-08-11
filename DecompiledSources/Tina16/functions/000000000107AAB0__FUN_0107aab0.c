/* Ghidra address: 0107aab0 */
/* Ghidra symbol: FUN_0107aab0 */


undefined8 FUN_0107aab0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xad8);
  if (iVar1 == 1) {
    FUN_00414ad0(param_2,L"mpic14");
  }
  else if (iVar1 == 8) {
    FUN_00414ad0(param_2,L"mpic16");
  }
  else if (iVar1 == 2) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,L"<not supported>");
  }
  return param_2;
}

