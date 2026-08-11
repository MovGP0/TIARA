/* Ghidra address: 0123b0a0 */
/* Ghidra symbol: FUN_0123b0a0 */


undefined8 FUN_0123b0a0(undefined8 param_1,longlong param_2)

{
  short sVar1;
  
  FUN_00414ad0(param_1,L"<unknown>");
  sVar1 = *(short *)(param_2 + 0x1fa4);
  if (sVar1 == 0x4c) {
    FUN_00414ad0(param_1,L"Lowpass");
  }
  else if (sVar1 == 0x48) {
    FUN_00414ad0(param_1,L"Highpass");
  }
  else if (sVar1 == 0x50) {
    FUN_00414ad0(param_1,L"Bandpass");
  }
  else if (sVar1 == 0x53) {
    FUN_00414ad0(param_1,L"Bandstop");
  }
  return param_1;
}

