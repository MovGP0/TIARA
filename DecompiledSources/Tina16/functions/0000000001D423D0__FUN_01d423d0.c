/* Ghidra address: 01d423d0 */
/* Ghidra symbol: FUN_01d423d0 */


ulonglong FUN_01d423d0(ulonglong param_1)

{
  ulonglong uVar1;
  undefined6 uVar2;
  
  uVar1 = param_1 & 0xffffffff;
  param_1 = param_1 & 0xffff;
  uVar2 = (undefined6)(uVar1 >> 0x10);
  if (param_1 < 0x6c) {
    if (param_1 == 0x6b) {
      return CONCAT62(uVar2,9);
    }
    if (param_1 < 0x20) {
      if (param_1 == 0x1f) {
        return CONCAT62(uVar2,0x5e);
      }
      if (0x1a < param_1) {
        if (param_1 != 0x1b) {
          if (param_1 == 0x1c) goto LAB_01d4261e;
          if (param_1 != 0x1d) {
            if (param_1 != 0x1e) {
              return uVar1;
            }
            return CONCAT62(uVar2,0x5d);
          }
          goto LAB_01d42627;
        }
        goto LAB_01d42615;
      }
      if (param_1 == 0x1a) goto LAB_01d4260c;
      if (param_1 != 0x15) {
        if (param_1 == 0x16) {
          return CONCAT62(uVar2,0x56);
        }
        if (param_1 != 0x18) {
          if (param_1 != 0x19) {
            return uVar1;
          }
          goto LAB_01d42603;
        }
        goto LAB_01d425fa;
      }
    }
    else {
      if (param_1 < 0x67) {
        if (param_1 == 0x66) {
          return CONCAT62(uVar2,0x3e);
        }
        if (param_1 != 0x21) {
          if (param_1 == 0x22) {
            return CONCAT62(uVar2,6);
          }
          if (param_1 != 0x62) {
            if (param_1 != 0x65) {
              return uVar1;
            }
            return CONCAT62(uVar2,0x3d);
          }
          return CONCAT62(uVar2,8);
        }
LAB_01d4268d:
        return CONCAT62(uVar2,5);
      }
      if (param_1 == 0x67) {
        return CONCAT62(uVar2,0x48);
      }
      if (param_1 != 0x69) {
        if (param_1 != 0x6a) {
          return uVar1;
        }
        return CONCAT62(uVar2,0x3f);
      }
    }
    return CONCAT62(uVar2,0x55);
  }
  if (param_1 < 0x76) {
    if (param_1 == 0x75) {
LAB_01d42615:
      return CONCAT62(uVar2,0x5a);
    }
    if (param_1 < 0x71) {
      if (param_1 == 0x70) {
        return CONCAT62(uVar2,0x17);
      }
      if (param_1 == 0x6c) {
        return CONCAT62(uVar2,0x24);
      }
      if (param_1 == 0x6d) {
        return CONCAT62(uVar2,10);
      }
      if (param_1 != 0x6e) {
        if (param_1 != 0x6f) {
          return uVar1;
        }
        return CONCAT62(uVar2,0x33);
      }
      return CONCAT62(uVar2,0xb);
    }
    if (param_1 == 0x71) {
      return CONCAT62(uVar2,0x2c);
    }
    if (param_1 == 0x72) {
LAB_01d425fa:
      return CONCAT62(uVar2,0x57);
    }
    if (param_1 == 0x73) {
LAB_01d42603:
      return CONCAT62(uVar2,0x58);
    }
    if (param_1 != 0x74) {
      return uVar1;
    }
  }
  else {
    if (0xbe < param_1) {
      if (param_1 != 0xbf) {
        if (param_1 == 0xc0) {
LAB_01d4261e:
          return CONCAT62(uVar2,0x5b);
        }
        if (param_1 != 0xc1) {
          return uVar1;
        }
LAB_01d42627:
        return CONCAT62(uVar2,0x5c);
      }
      goto LAB_01d42615;
    }
    if (param_1 != 0xbe) {
      if (param_1 == 0x76) {
        return CONCAT62(uVar2,0x2d);
      }
      if (param_1 != 0x77) {
        if (param_1 == 0x8e) {
          return CONCAT62(uVar2,0x8a);
        }
        if (param_1 != 0x8f) {
          return uVar1;
        }
        return CONCAT62(uVar2,0x8c);
      }
      goto LAB_01d4268d;
    }
  }
LAB_01d4260c:
  return CONCAT62(uVar2,0x59);
}

