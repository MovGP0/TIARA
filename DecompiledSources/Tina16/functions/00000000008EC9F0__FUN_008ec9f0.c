/* Ghidra address: 008ec9f0 */
/* Ghidra symbol: FUN_008ec9f0 */


undefined8 FUN_008ec9f0(undefined8 param_1,byte param_2)

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
        return 0xffffffff;
      }
    }
    else {
      uVar2 = uVar1 - 0xab;
      if (3 < uVar2) {
        if (uVar1 != 0xaf) {
          return 0xffffffff;
        }
        return 0x203e;
      }
    }
  }
  else if (uVar1 < 0xbb) {
    uVar2 = uVar1 - 0xb0;
    if (9 < uVar2) {
      if (uVar1 != 0xba) {
        return 0xffffffff;
      }
      return 0xf7;
    }
  }
  else {
    uVar2 = uVar1 - 0xbb;
    if (3 < uVar2) {
      if (uVar1 == 0xdf) {
        return 0x2017;
      }
      if (0x1a < uVar1 - 0xe0) {
        return 0xffffffff;
      }
      return CONCAT62((int6)(uVar1 - 0xe0 >> 0x10),param_2 + 0x4e0);
    }
  }
  return CONCAT62((int6)(uVar2 >> 0x10),(ushort)param_2);
}

