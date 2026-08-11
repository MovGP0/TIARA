/* Ghidra address: 01abc400 */
/* Ghidra symbol: FUN_01abc400 */


undefined8 FUN_01abc400(byte param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 unaff_RDI;
  
  FUN_01cc5c60(param_2);
  lVar2 = FUN_01cc5cc0(param_2);
  cVar1 = *(char *)(lVar2 + 0x2b);
  if (cVar1 == '\0') {
    if (param_1 == 1) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
      return uVar4;
    }
    if (param_1 == 8) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_2);
      return uVar4;
    }
    if (param_1 != 0x22) {
      return 0;
    }
    uVar4 = FUN_01cc6f70(&PTR_FUN_01cbf328,1,param_2);
    return uVar4;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return unaff_RDI;
    }
    if (param_1 != 0) {
      return 0;
    }
    uVar4 = FUN_01cc9f30(&PTR_FUN_01cbae98,1,param_2);
    return uVar4;
  }
  uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + 0x434);
  if (uVar3 < 7) {
    if (uVar3 == 6) {
      if (param_1 < 8) {
        if (param_1 == 7) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_2);
          return uVar4;
        }
        if (param_1 < 5) {
          if (param_1 == 4) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_2);
            return uVar4;
          }
          if (param_1 == 2) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_2);
            return uVar4;
          }
          if (param_1 == 3) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9268,1,param_2);
            return uVar4;
          }
        }
        else {
          if (param_1 == 5) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8cd8,1,param_2);
            return uVar4;
          }
          if (param_1 == 6) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cb98d8,1,param_2);
            return uVar4;
          }
        }
      }
      else {
        if (param_1 == 8) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_2);
          return uVar4;
        }
        if (param_1 == 9) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_2);
          return uVar4;
        }
        if (param_1 == 10) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cba688,1,param_2);
          return uVar4;
        }
        if (param_1 == 0xb) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_2);
          return uVar4;
        }
      }
      return 0;
    }
    if (uVar3 == 0) {
LAB_01abc51c:
      if (param_1 != 8) {
        return 0;
      }
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_2);
      return uVar4;
    }
    if (uVar3 != 1) {
      if (uVar3 == 3) goto LAB_01abc51c;
      if (uVar3 != 4) {
        return 0;
      }
    }
  }
  else {
    if (uVar3 == 7) {
      if (param_1 == 0xc) {
        uVar4 = FUN_01cc6f70(&PTR_FUN_01cbb338,1,param_2);
        return uVar4;
      }
      if (param_1 == 0xd) {
        uVar4 = FUN_01cc6f70(&PTR_FUN_01cbb530,1,param_2);
        return uVar4;
      }
      if (param_1 == 0xe) {
        uVar4 = FUN_01cc6f70(&PTR_FUN_01cbb878,1,param_2);
        return uVar4;
      }
      if (param_1 != 0xf) {
        return 0;
      }
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cbbbc0,1,param_2);
      return uVar4;
    }
    if (uVar3 == 8) {
      if (param_1 < 0x18) {
        if (param_1 == 0x17) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_2);
          return uVar4;
        }
        if (param_1 < 0x13) {
          if (param_1 == 0x12) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbc580,1,param_2);
            return uVar4;
          }
          if (param_1 < 8) {
            if (param_1 == 7) {
              uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_2);
              return uVar4;
            }
            if (param_1 == 2) {
              uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_2);
              return uVar4;
            }
            if (param_1 == 4) {
              uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_2);
              return uVar4;
            }
          }
          else {
            if (param_1 == 0x10) {
              uVar4 = FUN_01cc6f70(&PTR_FUN_01cbddf0,1,param_2);
              return uVar4;
            }
            if (param_1 == 0x11) {
              uVar4 = FUN_01cc6f70(&PTR_FUN_01cbe0c0,1,param_2);
              return uVar4;
            }
          }
        }
        else {
          if (param_1 == 0x13) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbd850,1,param_2);
            return uVar4;
          }
          if (param_1 == 0x14) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbdb20,1,param_2);
            return uVar4;
          }
          if (param_1 == 0x15) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbc030,1,param_2);
            return uVar4;
          }
          if (param_1 == 0x16) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbc328,1,param_2);
            return uVar4;
          }
        }
      }
      else if (param_1 < 0x1e) {
        if (param_1 == 0x1d) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbe5c0,1,param_2);
          return uVar4;
        }
        if (param_1 < 0x1b) {
          if (param_1 == 0x1a) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbd2b8,1,param_2);
            return uVar4;
          }
          if (param_1 == 0x18) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbcb38,1,param_2);
            return uVar4;
          }
          if (param_1 == 0x19) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbcfe8,1,param_2);
            return uVar4;
          }
        }
        else {
          if (param_1 == 0x1b) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbd580,1,param_2);
            return uVar4;
          }
          if (param_1 == 0x1c) {
            uVar4 = FUN_01cc6f70(&PTR_FUN_01cbe398,1,param_2);
            return uVar4;
          }
        }
      }
      else {
        if (param_1 == 0x1e) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbed88,1,param_2);
          return uVar4;
        }
        if (param_1 == 0x1f) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbe890,1,param_2);
          return uVar4;
        }
        if (param_1 == 0x20) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbeab8,1,param_2);
          return uVar4;
        }
        if (param_1 == 0x21) {
          uVar4 = FUN_01cc6f70(&PTR_FUN_01cbf058,1,param_2);
          return uVar4;
        }
      }
      return 0;
    }
    if ((uVar3 != 0xb) && (1 < uVar3 - 0xe)) {
      return 0;
    }
  }
  if (param_1 < 8) {
    if (param_1 == 7) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_2);
      return uVar4;
    }
    if (param_1 == 2) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_2);
      return uVar4;
    }
    if (param_1 == 4) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_2);
      return uVar4;
    }
    if (param_1 == 5) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb8cd8,1,param_2);
      return uVar4;
    }
  }
  else {
    if (param_1 == 8) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_2);
      return uVar4;
    }
    if (param_1 == 9) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_2);
      return uVar4;
    }
    if (param_1 == 0xb) {
      uVar4 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_2);
      return uVar4;
    }
  }
  return 0;
}

