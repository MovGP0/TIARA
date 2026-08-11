/* Ghidra address: 016134e0 */
/* Ghidra symbol: FUN_016134e0 */


undefined8 FUN_016134e0(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    FUN_00414ad0(param_1,L"ASSIGN_SIGNAL");
  }
  else if (param_2 == '1') {
    FUN_00414ad0(param_1,L"SET_VOLTAGE");
  }
  else if (param_2 == '3') {
    FUN_00414ad0(param_1,L"SET_CURRENT");
  }
  else {
    FUN_00414ad0(param_1,L"Undefined");
  }
  return param_1;
}

