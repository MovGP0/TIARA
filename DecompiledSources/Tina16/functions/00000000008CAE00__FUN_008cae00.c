/* Ghidra address: 008cae00 */
/* Ghidra symbol: FUN_008cae00 */


undefined8 FUN_008cae00(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 < 9) {
    if (param_3 == 8) {
      FUN_00414ad0(param_2,L"IBM367");
      return param_2;
    }
    if (param_3 < 5) {
      if (param_3 == 4) {
        FUN_00414ad0(param_2,L"ASCII");
        return param_2;
      }
      if (param_3 == 0) {
        FUN_00414ad0(param_2,L"ANSI_X3.4-1968");
        return param_2;
      }
      if (param_3 == 1) {
        FUN_00414ad0(param_2,L"iso-ir-6");
        return param_2;
      }
      if (param_3 == 2) {
        FUN_00414ad0(param_2,L"ANSI_X3.4-1986");
        return param_2;
      }
      if (param_3 == 3) {
        FUN_00414ad0(param_2,L"ISO_646.irv:1991");
        return param_2;
      }
    }
    else {
      if (param_3 == 5) {
        FUN_00414ad0(param_2,L"ISO646-US");
        return param_2;
      }
      if (param_3 == 6) {
        FUN_00414ad0(param_2,L"US-ASCII");
        return param_2;
      }
      if (param_3 == 7) {
        FUN_00414ad0(param_2,&PTR_LAB_008cb15c);
        return param_2;
      }
    }
  }
  else if (param_3 < 0xe) {
    if (param_3 == 0xd) {
      FUN_00414ad0(param_2,L"ISO-646");
      return param_2;
    }
    if (param_3 == 9) {
      FUN_00414ad0(param_2,L"cp367");
      return param_2;
    }
    if (param_3 == 10) {
      FUN_00414ad0(param_2,L"csASCII");
      return param_2;
    }
    if (param_3 == 0xb) {
      FUN_00414ad0(param_2,L"ISO_646.irv");
      return param_2;
    }
    if (param_3 == 0xc) {
      FUN_00414ad0(param_2,L"ISO_646");
      return param_2;
    }
  }
  else {
    if (param_3 == 0xe) {
      FUN_00414ad0(param_2,L"ISO646");
      return param_2;
    }
    if (param_3 == 0xf) {
      FUN_00414ad0(param_2,L"IBM891");
      return param_2;
    }
    if (param_3 == 0x10) {
      FUN_00414ad0(param_2,L"IBM903");
      return param_2;
    }
  }
  (*(code *)*param_1)(param_1);
  return param_2;
}

