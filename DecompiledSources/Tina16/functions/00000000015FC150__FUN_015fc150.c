/* Ghidra address: 015fc150 */
/* Ghidra symbol: FUN_015fc150 */


undefined8 FUN_015fc150(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00414ad0(param_1,L"disabled");
  }
  else {
    FUN_00414ad0(param_1,L"enabled");
  }
  return param_1;
}

