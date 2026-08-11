/* Ghidra address: 0157d140 */
/* Ghidra symbol: FUN_0157d140 */


undefined8 FUN_0157d140(undefined8 param_1,byte param_2)

{
  if (param_2 < 9) {
    if (param_2 == 8) {
      FUN_00414ad0(param_1,L"Deflated");
      return param_1;
    }
    if (param_2 < 5) {
      if (param_2 == 4) {
        FUN_00414ad0(param_1,L"Reduced3");
        return param_1;
      }
      if (param_2 == 0) {
        FUN_00414ad0(param_1,L"Stored");
        return param_1;
      }
      if (param_2 == 1) {
        FUN_00414ad0(param_1,L"Shrunk");
        return param_1;
      }
      if (param_2 == 2) {
        FUN_00414ad0(param_1,L"Reduced1");
        return param_1;
      }
      if (param_2 == 3) {
        FUN_00414ad0(param_1,L"Reduced2");
        return param_1;
      }
    }
    else {
      if (param_2 == 5) {
        FUN_00414ad0(param_1,L"Reduced4");
        return param_1;
      }
      if (param_2 == 6) {
        FUN_00414ad0(param_1,L"Imploded");
        return param_1;
      }
      if (param_2 == 7) {
        FUN_00414ad0(param_1,L"Tokenized");
        return param_1;
      }
    }
  }
  else if (param_2 < 0x13) {
    if (param_2 == 0x12) {
      FUN_00414ad0(param_1,L"TERSE");
      return param_1;
    }
    if (param_2 == 9) {
      FUN_00414ad0(param_1,L"Deflated64");
      return param_1;
    }
    if (param_2 == 10) {
      FUN_00414ad0(param_1,L"Imploded(TERSE)");
      return param_1;
    }
    if (param_2 == 0xc) {
      FUN_00414ad0(param_1,L"BZIP2");
      return param_1;
    }
    if (param_2 == 0xe) {
      FUN_00414ad0(param_1,L"LZMA");
      return param_1;
    }
  }
  else {
    if (param_2 == 0x13) {
      FUN_00414ad0(param_1,L"LZ77");
      return param_1;
    }
    if (param_2 == 0x61) {
      FUN_00414ad0(param_1,L"WavPack");
      return param_1;
    }
    if (param_2 == 0x62) {
      FUN_00414ad0(param_1,L"PPMd version I, Rev 1");
      return param_1;
    }
  }
  FUN_00414ad0(param_1,L"Unknown");
  return param_1;
}

