/* Ghidra address: 0173bdb0 */
/* Ghidra symbol: FUN_0173bdb0 */


longlong FUN_0173bdb0(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar4;
  uint uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar2 = (uint)uVar1;
  uVar3 = (uint)uVar1;
  if (uVar1 < 0x8a) {
    if (uVar1 == 0x89) {
      lVar4 = FUN_017498e0(&PTR_FUN_01735c50,1,param_1);
      return lVar4;
    }
    if (uVar2 == 0x62 || uVar1 < 0x62) {
      if (uVar3 != 0x62) {
        if (uVar2 != 0x33 && 0x32 < uVar1) {
          if (uVar2 != 0x3f && 0x3e < uVar1) {
            if ((3 < uVar3 - 0x46) && (uVar3 != 0x4e)) {
              if (uVar3 != 0x5f) {
                return 0;
              }
              lVar4 = FUN_0173ce20(&PTR_FUN_0173abf8,1,param_1);
              return lVar4;
            }
LAB_0173c3e7:
            lVar4 = FUN_01757a50(&PTR_FUN_0173a5d0,1,param_1);
            return lVar4;
          }
          if (uVar3 != 0x3f) {
            if (uVar3 == 0x34) {
              lVar4 = FUN_0173d760(&PTR_FUN_01731160,1,param_1);
              return lVar4;
            }
            if (uVar3 == 0x3b) {
              lVar4 = FUN_0173d760(&PTR_FUN_01731a98,1,param_1);
              return lVar4;
            }
            if (uVar3 == 0x3d) {
LAB_0173c66a:
              lVar4 = FUN_01754bf0(&PTR_FUN_01739820,1,param_1);
              return lVar4;
            }
            if (uVar3 != 0x3e) {
              return 0;
            }
LAB_0173c69c:
            lVar4 = FUN_01754bf0(&PTR_FUN_01739f78,1,param_1);
            return lVar4;
          }
          goto LAB_0173c61f;
        }
        if (uVar3 == 0x33) {
LAB_0173c5a2:
          lVar4 = FUN_0173ce20(&PTR_FUN_01737b70,1,param_1);
          return lVar4;
        }
        if (uVar1 < 0x21) {
          if (3 < uVar3 - 5) {
            if (uVar3 != 9) {
              if ((uVar3 != 0xe) && (uVar3 != 0x10)) {
                return 0;
              }
              lVar4 = FUN_0173ce20(&PTR_FUN_01738e90,1,param_1);
              return lVar4;
            }
LAB_0173c6c8:
            lVar4 = FUN_0173ce20(&PTR_FUN_0173b5b0,1,param_1);
            return lVar4;
          }
        }
        else if (1 < uVar3 - 0x21) {
          if (uVar3 == 0x23) {
            lVar4 = FUN_0173d760(&PTR_FUN_01731160,1,param_1);
            return lVar4;
          }
          if (uVar3 != 0x2c) {
            if (uVar3 != 0x32) {
              return 0;
            }
            lVar4 = FUN_0174d200(&PTR_FUN_017370d0,1,param_1);
            return lVar4;
          }
          goto LAB_0173c44b;
        }
      }
    }
    else {
      if (uVar1 < 0x72) {
        if (uVar2 != 0x71) {
          if (uVar1 < 0x68) {
            if (uVar1 != 0x67) {
              if (uVar3 == 99) {
                lVar4 = FUN_0173d760(&PTR_FUN_01731d90,1,param_1);
                return lVar4;
              }
              if (uVar3 == 100) {
                lVar4 = FUN_01754bf0(&PTR_FUN_0173a2e8,1,param_1);
                return lVar4;
              }
              if (uVar3 == 0x65) goto LAB_0173c66a;
              if (uVar3 != 0x66) {
                return 0;
              }
              goto LAB_0173c69c;
            }
            goto LAB_0173c3e7;
          }
          if (uVar1 != 0x6a) {
            if (uVar1 == 0x6b) goto LAB_0173c6c8;
            if (uVar1 != 0x6f) {
              return 0;
            }
            goto LAB_0173c5a2;
          }
          goto LAB_0173c61f;
        }
        goto LAB_0173c44b;
      }
      if (uVar3 != 0x80 && 0x7f < uVar1) {
        if (uVar3 == 0x81) {
          lVar4 = FUN_0174f210(&PTR_FUN_01737720,1,param_1);
          return lVar4;
        }
        if (uVar3 != 0x87) {
          if (uVar3 != 0x88) {
            return 0;
          }
          lVar4 = FUN_0173ce20(&PTR_FUN_01735760,1,param_1);
          return lVar4;
        }
        lVar4 = FUN_01750130(&PTR_FUN_01737fc8,1,param_1);
        return lVar4;
      }
      if (uVar3 == 0x80) {
        lVar4 = FUN_0173d760(&PTR_FUN_01732808,1,param_1);
        return lVar4;
      }
      if (uVar3 != 0x77) {
        if (uVar3 == 0x7d) {
          lVar4 = FUN_0173d760(&PTR_FUN_01732510,1,param_1);
          return lVar4;
        }
        if (uVar3 != 0x7e) {
          return 0;
        }
        lVar4 = FUN_0173d760(&PTR_FUN_01732510,1,param_1);
        return lVar4;
      }
    }
    lVar4 = FUN_0173ce20(&PTR_FUN_01738970,1,param_1);
  }
  else {
    if (uVar1 < 0xf2) {
      if (uVar2 == 0xf1) {
        lVar4 = FUN_017595d0(&PTR_FUN_0173b030,1,param_1);
        return lVar4;
      }
      if (uVar1 < 0xa6) {
        if (uVar2 == 0xa5) {
          lVar4 = FUN_0174b620(&PTR_FUN_01734ee0,1,param_1);
          return lVar4;
        }
        if (uVar2 != 0x8e && 0x8d < uVar1) {
          if (uVar3 == 0x8f) {
            lVar4 = FUN_0173ce20(&PTR_FUN_01733b68,1,param_1);
            return lVar4;
          }
          if (uVar3 != 0xa2) {
            if (uVar3 != 0xa3) {
              return 0;
            }
            lVar4 = FUN_0174b050(&PTR_FUN_01734d20,1,param_1);
            return lVar4;
          }
          lVar4 = FUN_0173ce20(&PTR_FUN_017340a0,1,param_1);
          return lVar4;
        }
        if (uVar3 == 0x8e) {
          lVar4 = FUN_0174c640(&PTR_FUN_01736930,1,param_1);
          return lVar4;
        }
        if (uVar1 != 0x8a) {
          if (uVar1 == 0x8b) {
            lVar4 = FUN_0174ccd0(&PTR_FUN_01736cf8,1,param_1);
            return lVar4;
          }
          if (uVar1 != 0x8c) {
            if (uVar1 != 0x8d) {
              return 0;
            }
            lVar4 = FUN_0174b050(&PTR_FUN_01734880,1,param_1);
            return lVar4;
          }
          lVar4 = FUN_0173ce20(&PTR_FUN_01733630,1,param_1);
          return lVar4;
        }
        lVar4 = FUN_0174c110(&PTR_FUN_01736568,1,param_1);
        return lVar4;
      }
      if (uVar3 != 0xad && 0xac < uVar1) {
        if (uVar3 == 0xb0) {
          lVar4 = FUN_0173d760(&PTR_FUN_01731a98,1,param_1);
          return lVar4;
        }
        if (1 < uVar3 - 0xb3) {
          if (uVar3 != 0xf0) {
            return 0;
          }
          lVar4 = FUN_017595d0(&PTR_FUN_0173b030,1,param_1);
          return lVar4;
        }
        lVar4 = FUN_0173d760(&PTR_FUN_01732090,1,param_1);
        return lVar4;
      }
      if (uVar3 == 0xad) {
        lVar4 = FUN_0174b620(&PTR_FUN_01734ee0,1,param_1);
        *(undefined1 *)(lVar4 + 0x58) = 1;
        return lVar4;
      }
      if (uVar3 == 0xa8) {
        lVar4 = FUN_0174bcd0(&PTR_FUN_01735398,1,param_1);
        return lVar4;
      }
      if (uVar3 != 0xaa) {
        if (uVar3 == 0xab) {
          lVar4 = FUN_0173ce20(&LAB_01739140,1,param_1);
          return lVar4;
        }
        if (uVar3 != 0xac) {
          return 0;
        }
        lVar4 = FUN_0173ce20(&LAB_01739140,1,param_1);
        return lVar4;
      }
LAB_0173c61f:
      lVar4 = FUN_0173ce20(&LAB_01739140,1,param_1);
      return lVar4;
    }
    if (uVar3 != 0x469 && 0x468 < uVar1) {
      if (uVar3 != 3000 && 2999 < uVar1) {
        if (uVar3 == 0xbb9) {
          lVar4 = FUN_0173ce20(&PTR_FUN_017361c0,1,param_1);
          *(undefined4 *)(lVar4 + 0x4c) = 1;
          return lVar4;
        }
        if (uVar3 != 0xbba) {
          if (uVar3 != 0x2900) {
            return 0;
          }
          lVar4 = FUN_01741190(&PTR_FUN_017322f8,1,param_1);
          return lVar4;
        }
        lVar4 = FUN_0173ce20(&PTR_FUN_017361c0,1,param_1);
        *(undefined4 *)(lVar4 + 0x4c) = 4;
        return lVar4;
      }
      if (uVar3 == 3000) {
        lVar4 = FUN_0173ce20(&PTR_FUN_017331a0,1,param_1);
        return lVar4;
      }
      if (uVar3 != 0x46a) {
        if (uVar3 == 0x46b) {
          lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,7);
          return lVar4;
        }
        if (uVar3 != 0x46c) {
          return 0;
        }
        lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,8);
        return lVar4;
      }
      lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,6);
      return lVar4;
    }
    if (uVar3 == 0x469) {
      lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,5);
      return lVar4;
    }
    if (uVar3 != 0x461 && 0x460 < uVar1) {
      if (uVar3 == 0x463) {
        lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,4);
        return lVar4;
      }
      if (uVar3 != 0x467) {
        if (uVar3 != 0x468) {
          return 0;
        }
        lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,3);
        return lVar4;
      }
      lVar4 = FUN_017463e0(&PTR_FUN_01734260,1,param_1,2);
      return lVar4;
    }
    if (uVar2 == 0x461) {
      lVar4 = FUN_017439d0(&LAB_017386a8,1,param_1);
      return lVar4;
    }
    if (uVar2 == 0xf2) {
      lVar4 = FUN_01757a50(&PTR_FUN_0173b340,1,param_1);
      return lVar4;
    }
    if ((3 < uVar2 - 0x19a) && (1 < uVar2 - 0x19f)) {
      if (uVar2 != 0x460) {
        return 0;
      }
      lVar4 = FUN_017439d0(&PTR_FUN_01738458,1,param_1);
      return lVar4;
    }
LAB_0173c44b:
    lVar4 = FUN_017439d0(&PTR_FUN_01732c50,1,param_1);
  }
  return lVar4;
}

