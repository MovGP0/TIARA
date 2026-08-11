/* Ghidra address: 00d964f0 */
/* Ghidra symbol: FUN_00d964f0 */


void FUN_00d964f0(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  ulonglong uVar1;
  
  *param_2 = 0;
  uVar1 = (ulonglong)param_3;
  if (uVar1 < 0x10) {
    if (uVar1 - 2 < 6) {
      *(undefined4 *)(param_2 + 4) = 1;
      uVar1 = (ulonglong)param_3;
      if (4 < uVar1) {
        if (uVar1 == 5) {
          *(undefined4 *)(param_2 + 8) = 3;
          return;
        }
        if (1 < uVar1 - 6) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 6;
        return;
      }
      if (uVar1 == 4) {
        *(undefined4 *)(param_2 + 8) = 2;
        return;
      }
      if (uVar1 != 2) {
        if (uVar1 != 3) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      return;
    }
    if (uVar1 - 8 < 8) {
      *(undefined4 *)(param_2 + 4) = 2;
      if (0xc < param_3) {
        if (param_3 == 0xd) {
          *(undefined4 *)(param_2 + 8) = 1;
          return;
        }
        if (param_3 != 0xe) {
          if (param_3 != 0xf) {
            return;
          }
          *(undefined4 *)(param_2 + 8) = 3;
          return;
        }
        *(undefined4 *)(param_2 + 8) = 2;
        return;
      }
      if (param_3 == 0xc) {
        *(undefined4 *)(param_2 + 8) = 0;
        return;
      }
      if (param_3 != 8) {
        if (param_3 == 9) {
          *(undefined4 *)(param_2 + 8) = 6;
          return;
        }
        if (param_3 != 10) {
          if (param_3 != 0xb) {
            return;
          }
          *(undefined4 *)(param_2 + 8) = 8;
          return;
        }
        *(undefined4 *)(param_2 + 8) = 7;
        return;
      }
      *(undefined4 *)(param_2 + 8) = 5;
      return;
    }
  }
  else {
    if (uVar1 - 0x10 < 0x14) {
      *(undefined4 *)(param_2 + 4) = 3;
      uVar1 = (ulonglong)param_3;
      if (0x17 < uVar1) {
        if (0x1b < uVar1) {
          if (uVar1 - 0x1c < 4) {
            *(undefined4 *)(param_2 + 8) = 3;
            return;
          }
          if (3 < uVar1 - 0x20) {
            return;
          }
          *(undefined4 *)(param_2 + 8) = 8;
          return;
        }
        if (uVar1 == 0x1b) {
          *(undefined4 *)(param_2 + 8) = 0xd;
          return;
        }
        if (uVar1 != 0x18) {
          if (uVar1 == 0x19) {
            *(undefined4 *)(param_2 + 8) = 0xb;
            return;
          }
          if (uVar1 != 0x1a) {
            return;
          }
          *(undefined4 *)(param_2 + 8) = 0xc;
          return;
        }
        *(undefined4 *)(param_2 + 8) = 10;
        return;
      }
      if (uVar1 == 0x17) {
        *(undefined4 *)(param_2 + 8) = 3;
        return;
      }
      if (0x13 < uVar1) {
        if (uVar1 == 0x14) {
          *(undefined4 *)(param_2 + 8) = 0;
          return;
        }
        if (uVar1 != 0x15) {
          if (uVar1 != 0x16) {
            return;
          }
          *(undefined4 *)(param_2 + 8) = 2;
          return;
        }
        *(undefined4 *)(param_2 + 8) = 1;
        return;
      }
      if (uVar1 == 0x13) {
        *(undefined4 *)(param_2 + 8) = 8;
        return;
      }
      if (uVar1 != 0x10) {
        if (uVar1 == 0x11) {
          *(undefined4 *)(param_2 + 8) = 6;
          return;
        }
        if (uVar1 != 0x12) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 7;
        return;
      }
      *(undefined4 *)(param_2 + 8) = 5;
      return;
    }
    if (uVar1 - 0x24 < 2) {
      *(undefined4 *)(param_2 + 4) = 4;
      if (param_3 == 0x24) {
        *(undefined4 *)(param_2 + 8) = 0;
        return;
      }
      if (param_3 != 0x25) {
        return;
      }
      *(undefined4 *)(param_2 + 8) = 1;
      return;
    }
    if (uVar1 - 0x2d < 5) {
      *(undefined4 *)(param_2 + 4) = 0xda;
      if (0x2f < param_3) {
        if (param_3 == 0x30) {
          *(undefined4 *)(param_2 + 8) = 8;
          return;
        }
        if (param_3 != 0x31) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 7;
        return;
      }
      if (param_3 == 0x2f) {
        *(undefined4 *)(param_2 + 8) = 6;
        return;
      }
      if (param_3 != 0x2d) {
        if (param_3 != 0x2e) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 5;
        return;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      return;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}

