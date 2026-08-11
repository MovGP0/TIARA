/* Ghidra address: 01d050c0 */
/* Ghidra symbol: FUN_01d050c0 */


undefined8 FUN_01d050c0(longlong *param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  
  if (param_3 == '\0') {
    FUN_00414480(param_2);
    return param_2;
  }
  uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 0x6b) {
    if (0x24 < uVar1) {
      if (uVar1 < 0x44) {
        if (uVar1 == 0x43) {
LAB_01d05283:
          FUN_00414ad0(param_2,&DAT_01d05300);
          return param_2;
        }
        if (uVar1 != 0x25) {
          if (uVar1 == 0x26) goto LAB_01d05272;
          goto LAB_01d052a5;
        }
      }
      else if (uVar1 != 0x4f) {
        if (uVar1 != 0x50) goto LAB_01d052a5;
        goto LAB_01d05272;
      }
LAB_01d05261:
      FUN_00414ad0(param_2,&DAT_01d052e0);
      return param_2;
    }
    if (uVar1 == 0x24) goto LAB_01d05250;
    if (uVar1 < 0xc) {
      if (uVar1 == 0xb) goto LAB_01d05272;
      if (uVar1 == 9) goto LAB_01d05250;
      if (uVar1 == 10) goto LAB_01d05261;
    }
    else {
      if (uVar1 == 0xd) {
        FUN_00414ad0(param_2,&LAB_01d05310);
        return param_2;
      }
      if (uVar1 == 0xe) goto LAB_01d05283;
    }
  }
  else {
    if (uVar1 < 0xd2) {
      if (uVar1 < 200) {
        if (1 < uVar1 - 0x6b) {
          if (uVar1 != 0x6d) {
            if (uVar1 == 0x6e) goto LAB_01d05272;
            goto LAB_01d052a5;
          }
          goto LAB_01d05261;
        }
LAB_01d05250:
        FUN_00414ad0(param_2,&DAT_01d052d0);
        return param_2;
      }
      if (uVar1 - 200 < 2) goto LAB_01d05250;
      if (uVar1 - 0xca < 2) goto LAB_01d05261;
      uVar1 = uVar1 - 0xcc;
    }
    else if (uVar1 < 0xdc) {
      if (uVar1 - 0xd2 < 2) goto LAB_01d05250;
      if (uVar1 - 0xd4 < 2) goto LAB_01d05261;
      uVar1 = uVar1 - 0xd6;
    }
    else {
      if (uVar1 - 0xdc < 2) goto LAB_01d05250;
      if (uVar1 - 0xde < 2) goto LAB_01d05261;
      uVar1 = uVar1 - 0xe0;
    }
    if (uVar1 < 2) {
LAB_01d05272:
      FUN_00414ad0(param_2,&DAT_01d052f0);
      return param_2;
    }
  }
LAB_01d052a5:
  FUN_00414480(param_2);
  return param_2;
}

