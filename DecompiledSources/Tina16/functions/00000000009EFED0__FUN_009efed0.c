/* Ghidra address: 009efed0 */
/* Ghidra symbol: FUN_009efed0 */


undefined8 FUN_009efed0(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0xb0) {
    if (uVar1 < 0xab) {
      if (uVar1 == 0xaa) {
        return 0xd7;
      }
      uVar2 = uVar1;
      if ((0xa0 < uVar1) && (uVar2 = uVar1 - 0xa2, 7 < uVar2)) {
LAB_009eff8f:
        return CONCAT62((int6)(uVar2 >> 0x10),0xfffd);
      }
    }
    else {
      uVar2 = uVar1 - 0xab;
      if (3 < uVar2) {
        uVar2 = uVar1 - 0xaf;
        if (uVar2 == 0) {
          return 0x203e;
        }
        goto LAB_009eff8f;
      }
    }
  }
  else if (uVar1 < 0xbb) {
    uVar2 = uVar1 - 0xb0;
    if (9 < uVar2) {
      uVar2 = uVar1 - 0xba;
      if (uVar2 == 0) {
        return 0xf7;
      }
      goto LAB_009eff8f;
    }
  }
  else {
    uVar2 = uVar1 - 0xbb;
    if (3 < uVar2) {
      if (uVar1 == 0xdf) {
        return 0x2017;
      }
      uVar2 = uVar1 - 0xe0;
      if (uVar2 < 0x1b) {
        return CONCAT62((int6)(uVar2 >> 0x10),param_2 + 0x4e0);
      }
      goto LAB_009eff8f;
    }
  }
  return CONCAT62((int6)(uVar2 >> 0x10),(ushort)param_2);
}

