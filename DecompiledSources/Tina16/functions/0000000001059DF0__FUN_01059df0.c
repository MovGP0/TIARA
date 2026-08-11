/* Ghidra address: 01059df0 */
/* Ghidra symbol: FUN_01059df0 */


undefined8 FUN_01059df0(undefined8 param_1,int param_2)

{
  FUN_00414ad0(param_1,&DAT_01059ea4);
  if (param_2 == 0) {
    FUN_00414ad0(param_1,&DAT_01059ea4);
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,L"megaavr");
  }
  else if (param_2 == 1) {
    FUN_00414ad0(param_1,L"samd");
  }
  else if (param_2 == 3) {
    FUN_00414ad0(param_1,L"nrf5");
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,L"esp32");
  }
  else if (param_2 == 5) {
    FUN_00414ad0(param_1,L"esp32");
  }
  return param_1;
}

