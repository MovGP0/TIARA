/* Ghidra address: 016d7c10 */
/* Ghidra symbol: FUN_016d7c10 */


undefined8 FUN_016d7c10(int param_1,int param_2)

{
  undefined8 in_XMM0_Qa;
  
  if (param_1 < 5) {
    if (param_1 != 4) {
      if (param_1 == 1) {
        if (param_2 == 1) {
          return *(undefined8 *)(PTR_DAT_02004010 + 0x2db);
        }
        if (param_2 != 2) {
          return in_XMM0_Qa;
        }
        return *(undefined8 *)(PTR_DAT_02004010 + 0x2e3);
      }
      if (param_1 == 2) {
        if (param_2 == 1) {
          return *(undefined8 *)(PTR_DAT_02004010 + 0x2eb);
        }
        if (param_2 != 2) {
          return in_XMM0_Qa;
        }
        return *(undefined8 *)(PTR_DAT_02004010 + 0x2f3);
      }
      if (param_1 != 3) {
        return in_XMM0_Qa;
      }
      if (param_2 < 6) {
        if (param_2 == 5) {
          return *(undefined8 *)(PTR_DAT_02004010 + 0x31b);
        }
        if (param_2 == 1) {
          return *(undefined8 *)(PTR_DAT_02004010 + 0x2fb);
        }
        if (param_2 == 2) {
          return *(undefined8 *)(PTR_DAT_02004010 + 0x303);
        }
        if (param_2 != 3) {
          if (param_2 != 4) {
            return in_XMM0_Qa;
          }
          return *(undefined8 *)(PTR_DAT_02004010 + 0x313);
        }
        return *(undefined8 *)(PTR_DAT_02004010 + 0x30b);
      }
      if (param_2 == 6) {
        return *(undefined8 *)(PTR_DAT_02004010 + 0x323);
      }
      if (param_2 == 7) {
        return *(undefined8 *)(PTR_DAT_02004010 + 0x32b);
      }
      if (param_2 == 8) {
        return *(undefined8 *)(PTR_DAT_02004010 + 0x333);
      }
      if (param_2 != 9) {
        return in_XMM0_Qa;
      }
      return *(undefined8 *)(PTR_DAT_02004010 + 0x33b);
    }
  }
  else {
    if (param_1 == 5) {
      if (param_2 == 1) {
        return *(undefined8 *)(PTR_DAT_02004010 + 0x36b);
      }
      if (param_2 != 2) {
        if (param_2 != 3) {
          return in_XMM0_Qa;
        }
        return *(undefined8 *)(PTR_DAT_02004010 + 0x37b);
      }
      return *(undefined8 *)(PTR_DAT_02004010 + 0x373);
    }
    if (param_1 == 6) {
      if (param_2 == 1) {
        return *(undefined8 *)(PTR_DAT_02004010 + 0x35b);
      }
      if (param_2 != 2) {
        return in_XMM0_Qa;
      }
      return *(undefined8 *)(PTR_DAT_02004010 + 0x363);
    }
    if (param_1 != 7) {
      return in_XMM0_Qa;
    }
  }
  if (param_2 == 1) {
    in_XMM0_Qa = *(undefined8 *)(PTR_DAT_02004010 + 0x343);
  }
  else if (param_2 == 2) {
    in_XMM0_Qa = *(undefined8 *)(PTR_DAT_02004010 + 0x34b);
  }
  else if (param_2 == 3) {
    in_XMM0_Qa = *(undefined8 *)(PTR_DAT_02004010 + 0x353);
  }
  return in_XMM0_Qa;
}

