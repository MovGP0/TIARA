/* Ghidra address: 01600370 */
/* Ghidra symbol: FUN_01600370 */


undefined8 FUN_01600370(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00414ad0(param_1,&DAT_01600444);
  }
  else if (param_2 == 2) {
    FUN_00414ad0(param_1,L"8051");
  }
  else if (param_2 == 4) {
    FUN_00414ad0(param_1,&DAT_01600470);
  }
  else if (param_2 == 8) {
    FUN_00414ad0(param_1,L"PIC18");
  }
  else if (param_2 == 0x200) {
    FUN_00414ad0(param_1,L"PIC24");
  }
  else if (param_2 == 0x400) {
    FUN_00414ad0(param_1,L"PIC32");
  }
  else if (param_2 == 0x20) {
    FUN_00414ad0(param_1,L"HCS08");
  }
  else {
    FUN_00414ad0(param_1,L"Undefined");
  }
  return param_1;
}

