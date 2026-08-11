/* Ghidra address: 01690fe0 */
/* Ghidra symbol: FUN_01690fe0 */


undefined8 FUN_01690fe0(ulonglong param_1)

{
  param_1 = param_1 & 0xffff;
  if (0x6c < param_1) {
    if (param_1 < 0xd5) {
      if (param_1 == 0xd4) {
        return 2;
      }
      if (param_1 < 0xcb) {
        if (param_1 == 0xca) {
          return 2;
        }
        if (param_1 == 0x6d) {
          return 2;
        }
        if (param_1 != 0x6e) {
          if (param_1 != 200) {
            return 1;
          }
          return 1;
        }
      }
      else if (param_1 != 0xcc) {
        if (param_1 != 0xd2) {
          return 1;
        }
        return 1;
      }
    }
    else if (param_1 < 0xdd) {
      if (param_1 == 0xdc) {
        return 1;
      }
      if (param_1 != 0xd6) {
        if (1 < param_1 - 0xd9) {
          return 1;
        }
        return 2;
      }
    }
    else {
      if (param_1 == 0xde) {
        return 2;
      }
      if (param_1 != 0xe0) {
        return 1;
      }
    }
    return 2;
  }
  if (param_1 == 0x6c) {
    return 1;
  }
  if (param_1 < 0x10) {
    if (param_1 == 0xf) {
      return 2;
    }
    if (0xc < param_1) {
      if (param_1 == 0xd) {
        return 1;
      }
      if (param_1 != 0xe) {
        return 1;
      }
      return 1;
    }
    if (param_1 == 0xc) {
      return 2;
    }
    if (param_1 != 9) {
      if (param_1 == 10) {
        return 2;
      }
      if (param_1 != 0xb) {
        return 1;
      }
      return 2;
    }
    return 1;
  }
  if (0x26 < param_1) {
    if (param_1 == 0x43) {
      return 1;
    }
    if (param_1 != 0x6b) {
      return 1;
    }
    return 1;
  }
  if (param_1 == 0x26) {
    return 2;
  }
  if (param_1 != 0x10) {
    if (param_1 == 0x24) {
      return 1;
    }
    if (param_1 != 0x25) {
      return 1;
    }
    return 2;
  }
  return 2;
}

