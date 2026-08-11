/* Ghidra address: 01616620 */
/* Ghidra symbol: FUN_01616620 */


undefined8 FUN_01616620(undefined8 param_1,int param_2)

{
  if (param_2 == 0x3ee) {
    FUN_00414ad0(param_1,L"above");
  }
  else if (param_2 == 0x3ef) {
    FUN_00414ad0(param_1,L"cross");
  }
  else if (param_2 == 0x3f0) {
    FUN_00414ad0(param_1,L"timer");
  }
  else {
    FUN_01613110(L"GetOp invalid");
  }
  return param_1;
}

