/* Ghidra address: 00fd96b0 */
/* Ghidra symbol: FUN_00fd96b0 */


undefined8 FUN_00fd96b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"TRISA");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"TRISB");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"TRISC");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"TRISD");
  }
  else if (param_3 == 4) {
    FUN_00414ad0(param_2,L"TRISE");
  }
  return param_2;
}

