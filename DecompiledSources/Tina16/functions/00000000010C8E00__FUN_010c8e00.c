/* Ghidra address: 010c8e00 */
/* Ghidra symbol: FUN_010c8e00 */


void FUN_010c8e00(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  if (param_1 < 0x115) {
    if (param_1 == 0x114) {
      FUN_010c8010(param_2,param_3,param_4);
    }
    else if (param_1 < 0x112) {
      if (param_1 == 0x111) {
        FUN_010c85e0(param_2,param_3,param_4);
      }
      else if (param_1 == 0x10e) {
        FUN_010c7ef0(param_2,param_3,param_4);
      }
      else if (param_1 == 0x10f) {
        FUN_010c84d0(param_2,param_3,param_4);
      }
      else if (param_1 == 0x110) {
        FUN_010c8550(param_2,param_3,param_4);
      }
    }
    else if (param_1 == 0x112) {
      FUN_010c8ca0(param_2,param_3,param_4);
    }
    else if (param_1 == 0x113) {
      FUN_010c7f70(param_2,param_3,param_4);
    }
  }
  else if (param_1 < 0x119) {
    if (param_1 == 0x118) {
      FUN_010c8250(param_2,param_3,param_4);
    }
    else if (param_1 == 0x115) {
      FUN_010c80a0(param_2,param_3,param_4);
    }
    else if (param_1 == 0x116) {
      FUN_010c8130(param_2,param_3,param_4);
    }
    else if (param_1 == 0x117) {
      FUN_010c81c0(param_2,param_3,param_4);
    }
  }
  else if (param_1 == 0x11c) {
    FUN_010c82f0(param_2,param_3,param_4);
  }
  else if (param_1 == 0x11d) {
    FUN_010c83b0(param_2,param_3,param_4);
  }
  cVar1 = FUN_010c7a10(*(undefined8 *)(param_4 + 0x10));
  if (cVar1 != '\0') {
    FUN_010c7a40(param_4,*(undefined8 *)(param_4 + 8));
  }
  return;
}

