/* Ghidra address: 008f08a0 */
/* Ghidra symbol: FUN_008f08a0 */


undefined8 FUN_008f08a0(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0x6f) {
    if (uVar1 == 0x6e) {
      return 0x3e;
    }
    if (uVar1 < 0x5d) {
      if (uVar1 == 0x5c) {
        return 0x2a;
      }
      if (uVar1 < 0x4f) {
        if (uVar1 == 0x4e) {
          return 0x2b;
        }
        if (uVar1 < 0x4c) {
          if (uVar1 == 0x4b) {
            return 0x2e;
          }
          if (uVar1 == 0x40) {
            return 0x20;
          }
          if (uVar1 == 0x4a) {
            return 0xa2;
          }
        }
        else {
          if (uVar1 == 0x4c) {
            return 0x3c;
          }
          if (uVar1 == 0x4d) {
            return 0x28;
          }
        }
      }
      else {
        if (uVar1 == 0x4f) {
          return 0x7c;
        }
        if (uVar1 == 0x50) {
          return 0x26;
        }
        if (uVar1 == 0x5a) {
          return 0x21;
        }
        if (uVar1 == 0x5b) {
          return 0x24;
        }
      }
    }
    else if (uVar1 < 0x62) {
      if (uVar1 == 0x61) {
        return 0x2f;
      }
      if (uVar1 == 0x5d) {
        return 0x29;
      }
      if (uVar1 == 0x5e) {
        return 0x3b;
      }
      if (uVar1 == 0x5f) {
        return 0xac;
      }
      if (uVar1 == 0x60) {
        return 0x2d;
      }
    }
    else {
      if (uVar1 == 0x6a) {
        return 0xa6;
      }
      if (uVar1 == 0x6b) {
        return 0x2c;
      }
      if (uVar1 == 0x6c) {
        return 0x25;
      }
      if (uVar1 == 0x6d) {
        return 0x5f;
      }
    }
  }
  else if (uVar1 < 0x91) {
    if (uVar1 < 0x7d) {
      if (uVar1 == 0x7c) {
        return 0x40;
      }
      if (uVar1 == 0x6f) {
        return 0x3f;
      }
      if (uVar1 == 0x79) {
        return 0x60;
      }
      if (uVar1 == 0x7a) {
        return 0x3a;
      }
      if (uVar1 == 0x7b) {
        return 0x23;
      }
    }
    else {
      if (uVar1 == 0x7d) {
        return 0x27;
      }
      if (uVar1 == 0x7e) {
        return 0x3d;
      }
      if (uVar1 == 0x7f) {
        return 0x22;
      }
      if (uVar1 - 0x81 < 9) {
        return CONCAT62((int6)(uVar1 - 0x81 >> 0x10),param_2 - 0x20);
      }
    }
  }
  else if (uVar1 < 0xd1) {
    if (uVar1 == 0xd0) {
      return 0x7d;
    }
    if (uVar1 < 0xa2) {
      if (uVar1 - 0x91 < 9) {
        return CONCAT62((int6)(uVar1 - 0x91 >> 0x10),param_2 - 0x27);
      }
      if (uVar1 == 0xa1) {
        return 0x7e;
      }
    }
    else {
      if (uVar1 - 0xa2 < 8) {
        return CONCAT62((int6)(uVar1 - 0xa2 >> 0x10),param_2 - 0x2f);
      }
      if (uVar1 == 0xc0) {
        return 0x7b;
      }
      if (uVar1 - 0xc1 < 9) {
        return CONCAT62((int6)(uVar1 - 0xc1 >> 0x10),param_2 - 0x80);
      }
    }
  }
  else {
    if (uVar1 - 0xd1 < 9) {
      return CONCAT62((int6)(uVar1 - 0xd1 >> 0x10),param_2 - 0x87);
    }
    if (uVar1 == 0xe0) {
      return 0x5c;
    }
    if (uVar1 - 0xe2 < 8) {
      return CONCAT62((int6)(uVar1 - 0xe2 >> 0x10),param_2 - 0x8f);
    }
    if (uVar1 - 0xf0 < 10) {
      return CONCAT62((int6)(uVar1 - 0xf0 >> 0x10),param_2 - 0xc0);
    }
  }
  return 0xffffffff;
}

