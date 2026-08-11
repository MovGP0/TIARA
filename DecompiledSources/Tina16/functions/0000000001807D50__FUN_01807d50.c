/* Ghidra address: 01807d50 */
/* Ghidra symbol: FUN_01807d50 */


undefined8 FUN_01807d50(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0xa4) {
    if (param_1 == 0xa3) {
      return 0x42a;
    }
    if (param_1 < 0x87) {
      if (param_1 == 0x86) {
        return 0x804;
      }
      if (param_1 == 0x80) {
        return 0x411;
      }
      if (param_1 == 0x81) {
        return 0x412;
      }
      if (param_1 == 0x82) {
        return 0x812;
      }
    }
    else {
      if (param_1 == 0x88) {
        return 0xc04;
      }
      if (param_1 == 0xa1) {
        return 0x408;
      }
      if (param_1 == 0xa2) {
        return 0x41f;
      }
    }
  }
  else if (param_1 < 0xcd) {
    if (param_1 == 0xcc) {
      return 0x419;
    }
    if (param_1 == 0xb1) {
      return 0x40d;
    }
    if (param_1 == 0xb2) {
      return 0x3401;
    }
    if (param_1 == 0xba) {
      return 0x425;
    }
  }
  else {
    if (param_1 == 0xde) {
      return 0x41e;
    }
    if (param_1 == 0xee) {
      return 0x405;
    }
  }
  uVar1 = thunk_FUN_04195d02();
  return uVar1;
}

