/* Ghidra address: 01bbdd70 */
/* Ghidra symbol: FUN_01bbdd70 */


longlong * FUN_01bbdd70(undefined8 param_1,longlong *param_2,int param_3,byte param_4)

{
  FUN_00414480(param_2);
  if (param_3 == 0) {
    FUN_00414ad0(param_2,L"POWER_CLAMP");
  }
  else if (param_3 == 1) {
    FUN_00414ad0(param_2,L"GND_CLAMP");
  }
  else if (param_3 == 2) {
    FUN_00414ad0(param_2,L"PULLUP");
  }
  else if (param_3 == 3) {
    FUN_00414ad0(param_2,L"PULLDOWN");
  }
  if ((param_4 & *param_2 == 0) != 0) {
    FUN_01bbc400(param_1,L"GetClampStr");
  }
  return param_2;
}

