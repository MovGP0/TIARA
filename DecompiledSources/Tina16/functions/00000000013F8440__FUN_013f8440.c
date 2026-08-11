/* Ghidra address: 013f8440 */
/* Ghidra symbol: FUN_013f8440 */


undefined8 FUN_013f8440(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_00414ad0(param_2,&DAT_013f84c4);
  }
  else if (param_3 == '\x01') {
    FUN_00414ad0(param_2,L"High");
  }
  else if (param_3 == '\x02') {
    FUN_00414ad0(param_2,L"Dontcare");
  }
  else if (param_3 == '\x03') {
    FUN_00414ad0(param_2,L"HighZ");
  }
  return param_2;
}

