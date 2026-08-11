/* Ghidra address: 0077a8e0 */
/* Ghidra symbol: FUN_0077a8e0 */


undefined ** FUN_0077a8e0(undefined8 param_1,byte param_2)

{
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      return (undefined **)0xff00000f;
    }
    if (param_2 < 8) {
      if (param_2 == 7) {
        return (undefined **)0xc0c0c0;
      }
      if (param_2 < 4) {
        if (param_2 == 3) {
          return (undefined **)0xff00000f;
        }
        if (param_2 == 0) {
          return (undefined **)0xff000006;
        }
        if (param_2 == 1) {
          return (undefined **)0xff00000f;
        }
        if (param_2 == 2) {
          return (undefined **)0xff00000f;
        }
      }
      else {
        if (param_2 == 4) {
          return (undefined **)0xff00000f;
        }
        if (param_2 == 5) {
          return (undefined **)0xff00000f;
        }
        if (param_2 == 6) {
          return (undefined **)0xff00000f;
        }
      }
    }
    else if (param_2 < 0xc) {
      if (param_2 == 0xb) {
        return (undefined **)0xff000005;
      }
      if (param_2 == 8) {
        return &PTR_PTR_00f0f0f0;
      }
      if (param_2 == 9) {
        return (undefined **)&DAT_00a4a0a0;
      }
      if (param_2 == 10) {
        return (undefined **)0xff000005;
      }
    }
    else {
      if (param_2 == 0xc) {
        return (undefined **)0xff000005;
      }
      if (param_2 == 0xd) {
        return (undefined **)0xff000005;
      }
      if (param_2 == 0xe) {
        return (undefined **)0xff000005;
      }
    }
  }
  else if (param_2 < 0x18) {
    if (param_2 == 0x17) {
      return (undefined **)0xff00000f;
    }
    if (param_2 < 0x14) {
      if (param_2 == 0x13) {
        return (undefined **)0xff000018;
      }
      if (param_2 == 0x10) {
        return &PTR_PTR_00f0f0f0;
      }
      if (param_2 == 0x11) {
        return (undefined **)0xc0c0c0;
      }
      if (param_2 == 0x12) {
        return (undefined **)0xff000018;
      }
    }
    else {
      if (param_2 == 0x14) {
        return (undefined **)0xff000005;
      }
      if (param_2 == 0x15) {
        return (undefined **)0xff000005;
      }
      if (param_2 == 0x16) {
        return (undefined **)0xff000005;
      }
    }
  }
  else if (param_2 < 0x1c) {
    if (param_2 == 0x1b) {
      return &PTR_PTR_00f0f0f0;
    }
    if (param_2 == 0x18) {
      return (undefined **)0xff00000f;
    }
    if (param_2 == 0x19) {
      return (undefined **)0xffffff;
    }
    if (param_2 == 0x1a) {
      return (undefined **)0xc0c0c0;
    }
  }
  else {
    if (param_2 == 0x1c) {
      return (undefined **)0xff000005;
    }
    if (param_2 == 0x1d) {
      return (undefined **)0xff00000f;
    }
  }
  return (undefined **)0x1fffffff;
}

