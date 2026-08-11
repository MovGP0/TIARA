/* Ghidra address: 01aa20b0 */
/* Ghidra symbol: FUN_01aa20b0 */


undefined8 FUN_01aa20b0(undefined8 param_1,char param_2)

{
  FUN_00414ad0(param_1,L"none");
  if (param_2 == '\0') {
    FUN_00414ad0(param_1,L"none");
  }
  else if (param_2 == '\x01') {
    FUN_00414ad0(param_1,L"rising");
  }
  else if (param_2 == '\x02') {
    FUN_00414ad0(param_1,L"falling");
  }
  else if (param_2 == '\x03') {
    FUN_00414ad0(param_1,L"ms_rising");
  }
  else if (param_2 == '\x04') {
    FUN_00414ad0(param_1,L"ms_falling");
  }
  return param_1;
}

