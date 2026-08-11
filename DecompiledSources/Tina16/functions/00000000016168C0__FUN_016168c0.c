/* Ghidra address: 016168c0 */
/* Ghidra symbol: FUN_016168c0 */


undefined8 FUN_016168c0(undefined8 param_1,byte param_2)

{
  if (param_2 < 8) {
    if (param_2 == 7) {
      FUN_00414ad0(param_1,L"ACInitmode");
      return param_1;
    }
    if (param_2 < 4) {
      if (param_2 == 3) {
        FUN_00414ad0(param_1,L"DCTransferOptMode");
        return param_1;
      }
      if (param_2 == 0) {
        FUN_00414ad0(param_1,L"DummyMode");
        return param_1;
      }
      if (param_2 == 1) {
        FUN_00414ad0(param_1,L"DCmode");
        return param_1;
      }
      if (param_2 == 2) {
        FUN_00414ad0(param_1,L"DCTransferMode");
        return param_1;
      }
    }
    else {
      if (param_2 == 4) {
        FUN_00414ad0(param_1,L"TempMode");
        return param_1;
      }
      if (param_2 == 5) {
        FUN_00414ad0(param_1,L"TROPMode");
        return param_1;
      }
      if (param_2 == 6) {
        FUN_00414ad0(param_1,L"TRmode");
        return param_1;
      }
    }
  }
  else if (param_2 < 0xd) {
    if (param_2 == 0xc) {
      FUN_00414ad0(param_1,L"NoiseMode");
      return param_1;
    }
    if (param_2 == 8) {
      FUN_00414ad0(param_1,L"ACmode");
      return param_1;
    }
    if (param_2 == 9) {
      FUN_00414ad0(param_1,L"ACTimeFuncMode");
      return param_1;
    }
    if (param_2 == 10) {
      FUN_00414ad0(param_1,L"ACSParamMode");
      return param_1;
    }
  }
  else {
    if (param_2 == 0xd) {
      FUN_00414ad0(param_1,L"DigitMode");
      return param_1;
    }
    if (param_2 == 0xe) {
      FUN_00414ad0(param_1,L"SymbAnalMode");
      return param_1;
    }
    if (param_2 == 0xf) {
      FUN_00414ad0(param_1,L"ERCMode");
      return param_1;
    }
  }
  FUN_00414ad0(param_1,L"<undefined>");
  return param_1;
}

