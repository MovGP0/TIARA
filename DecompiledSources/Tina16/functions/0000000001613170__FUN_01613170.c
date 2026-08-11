/* Ghidra address: 01613170 */
/* Ghidra symbol: FUN_01613170 */


undefined4 FUN_01613170(ushort param_1)

{
  undefined4 unaff_EBX;
  
  if (param_1 < 0x1db) {
    if (param_1 == 0x1da) {
      return 0x35;
    }
    if (param_1 < 0x1d3) {
      if (param_1 == 0x1d2) {
        return 0x20;
      }
      if (param_1 < 0x1cf) {
        if (param_1 == 0x1ce) {
          return 0x11;
        }
        if (param_1 == 0x1ca) {
          return 1;
        }
        if (param_1 == 0x1cb) {
          return 0x12;
        }
        if (param_1 == 0x1cc) {
          return 0x1f;
        }
      }
      else {
        if (param_1 == 0x1cf) {
          return 0x1e;
        }
        if (param_1 == 0x1d0) {
          return 0xb;
        }
        if (param_1 == 0x1d1) {
          return 0x13;
        }
      }
    }
    else if (param_1 < 0x1d7) {
      if (param_1 == 0x1d6) {
        return 0x34;
      }
      if (param_1 == 0x1d3) {
        return 0x25;
      }
      if (param_1 == 0x1d4) {
        return 9;
      }
      if (param_1 == 0x1d5) {
        return 0x15;
      }
    }
    else {
      if (param_1 == 0x1d7) {
        return 3;
      }
      if (param_1 == 0x1d8) {
        return 0x26;
      }
      if (param_1 == 0x1d9) {
        return 0x24;
      }
    }
  }
  else if (param_1 < 0x1e3) {
    if (param_1 == 0x1e2) {
      return 0x14;
    }
    if (param_1 < 0x1df) {
      if (param_1 == 0x1de) {
        return 0x18;
      }
      if (param_1 == 0x1db) {
        return 3;
      }
      if (param_1 == 0x1dc) {
        return 4;
      }
      if (param_1 == 0x1dd) {
        return 5;
      }
    }
    else {
      if (param_1 == 0x1df) {
        return 0x19;
      }
      if (param_1 == 0x1e0) {
        return 6;
      }
      if (param_1 == 0x1e1) {
        return 8;
      }
    }
  }
  else if (param_1 < 0x1e8) {
    if (param_1 == 0x1e7) {
      return 0x27;
    }
    if (param_1 == 0x1e3) {
      return 2;
    }
    if (param_1 == 0x1e4) {
      return 10;
    }
    if (param_1 == 0x1e5) {
      return 0x16;
    }
  }
  else {
    if (param_1 == 0x1e9) {
      return 0x38;
    }
    if (param_1 == 0x1ea) {
      return 0x2b;
    }
    if (param_1 == 0x1eb) {
      return 0x28;
    }
  }
  FUN_01613110(L"Op invalid");
  return unaff_EBX;
}

