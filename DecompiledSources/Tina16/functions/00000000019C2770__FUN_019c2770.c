/* Ghidra address: 019c2770 */
/* Ghidra symbol: FUN_019c2770 */


undefined8 FUN_019c2770(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_00414ad0(param_1,L"straight");
  }
  else if (param_2 == '\x01') {
    FUN_00414ad0(param_1,L"orthogonal");
  }
  else if (param_2 == '\x02') {
    FUN_00414ad0(param_1,L"dynamic");
  }
  else {
    FUN_00414ad0(param_1,L"unknown");
  }
  return param_1;
}

