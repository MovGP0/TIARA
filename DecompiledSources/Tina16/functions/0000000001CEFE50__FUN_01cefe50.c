/* Ghidra address: 01cefe50 */
/* Ghidra symbol: FUN_01cefe50 */


bool FUN_01cefe50(uint param_1,ushort param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  *param_3 = '\0';
  uVar3 = param_1 & 0xffff;
  if (uVar3 < 0xf287) {
    if (uVar3 == 0xf286) {
      return 0x11 < param_2;
    }
    if (uVar3 < 0x10a) {
      if (uVar3 == 0x109) {
        return 0x11 < param_2;
      }
      if (uVar3 < 0x104) {
        if (uVar3 == 0x103) {
          return 0x10 < param_2;
        }
        if (uVar3 < 0x101) {
          if (uVar3 == 0x100) {
            return 0x18 < param_2;
          }
          if (uVar3 == 0) {
            return false;
          }
          if (uVar3 == 0xff) {
            return false;
          }
        }
        else {
          if (uVar3 == 0x101) {
            return 0x12 < param_2;
          }
          if (uVar3 == 0x102) {
            return 0x11 < param_2;
          }
        }
      }
      else if (uVar3 < 0x107) {
        if (uVar3 == 0x106) {
          return 0x102 < param_2;
        }
        if (uVar3 == 0x104) {
          return 0x10 < param_2;
        }
        if (uVar3 == 0x105) {
          return 0x10 < param_2;
        }
      }
      else {
        if (uVar3 == 0x107) {
          return 0x17 < param_2;
        }
        if (uVar3 == 0x108) {
          return 0x101 < param_2;
        }
      }
    }
    else if (uVar3 < 0xf282) {
      if (uVar3 == 0xf281) {
        return 0x15 < param_2;
      }
      if (uVar3 < 0x202) {
        if (uVar3 == 0x201) {
          return 0x47 < param_2;
        }
        if (uVar3 == 0x110) {
          return 0x10 < param_2;
        }
        if (uVar3 == 0x200) {
          return 0x18 < param_2;
        }
      }
      else {
        if (uVar3 == 0x408) {
          return 0x70 < param_2;
        }
        if (uVar3 == 0xf280) {
          return 0x19 < param_2;
        }
      }
    }
    else {
      if (uVar3 == 0xf282) {
        return 0x15 < param_2;
      }
      if (uVar3 == 0xf283) {
        return 0x12 < param_2;
      }
      if (uVar3 == 0xf284) {
        return 0x12 < param_2;
      }
      if (uVar3 == 0xf285) {
        return 0x13 < param_2;
      }
    }
  }
  else if (uVar3 < 0xf293) {
    if (uVar3 == 0xf292) {
      return 0x10 < param_2;
    }
    if (uVar3 < 0xf28d) {
      if (uVar3 == 0xf28c) {
        return 0x24 < param_2;
      }
      if (uVar3 < 0xf28a) {
        if (uVar3 == 0xf289) {
          return 0x12 < param_2;
        }
        if (uVar3 == 0xf287) {
          return 0x13 < param_2;
        }
        if (uVar3 == 0xf288) {
          return 0x14 < param_2;
        }
      }
      else {
        if (uVar3 == 0xf28a) {
          return 0x11 < param_2;
        }
        if (uVar3 == 0xf28b) {
          return 0x10 < param_2;
        }
      }
    }
    else if (uVar3 < 0xf290) {
      if (uVar3 == 0xf28f) {
        return 0x10 < param_2;
      }
      if (uVar3 == 0xf28d) {
        return 0x10 < param_2;
      }
      if (uVar3 == 0xf28e) {
        return 0x10 < param_2;
      }
    }
    else {
      if (uVar3 == 0xf290) {
        return 0x10 < param_2;
      }
      if (uVar3 == 0xf291) {
        return 0x10 < param_2;
      }
    }
  }
  else if (uVar3 < 0xf404) {
    if (uVar3 == 0xf403) {
      return 0x11 < param_2;
    }
    if (uVar3 < 0xf401) {
      if (uVar3 == 0xf400) {
        return 0x11 < param_2;
      }
      if (uVar3 == 0xf293) {
        return 0x10 < param_2;
      }
      if (uVar3 == 0xf294) {
        return 0x10 < param_2;
      }
    }
    else {
      if (uVar3 == 0xf401) {
        return 0x15 < param_2;
      }
      if (uVar3 == 0xf402) {
        return 0x10 < param_2;
      }
    }
  }
  else {
    if (uVar3 == 0xf404) {
      return 0x10 < param_2;
    }
    if (uVar3 == 0xf405) {
      return 0x11 < param_2;
    }
    if (uVar3 == 0xf406) {
      return 0x11 < param_2;
    }
    if (uVar3 == 0xf407) {
      return 0x10 < param_2;
    }
  }
  cVar1 = FUN_01d32e60(DAT_03566898,param_1);
  *param_3 = cVar1 == '\0';
  if ((*param_3 == '\0') && (param_2 < 0x48)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

