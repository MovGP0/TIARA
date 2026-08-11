/* Ghidra address: 016b0420 */
/* Ghidra symbol: FUN_016b0420 */


undefined8 FUN_016b0420(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x15e) {
    if (iVar1 == 0x15d) {
      FUN_00414ad0(param_2,L"\"XOR\"");
      return param_2;
    }
    if (iVar1 == 0x11b) {
      FUN_00414ad0(param_2,L"\"NOT\"");
      return param_2;
    }
    if (iVar1 == 0x11c) {
      FUN_00414ad0(param_2,L"\"AND\"");
      return param_2;
    }
    if (iVar1 == 0x11d) {
      FUN_00414ad0(param_2,L"\"OR\"");
      return param_2;
    }
  }
  else {
    if (iVar1 == 0x17e) {
      FUN_00414ad0(param_2,L"\"BUF\"");
      return param_2;
    }
    if (iVar1 == 0x17f) {
      FUN_00414ad0(param_2,L"\"PSG\"");
      return param_2;
    }
  }
  FUN_00414ad0(param_2,L"undef");
  return param_2;
}

