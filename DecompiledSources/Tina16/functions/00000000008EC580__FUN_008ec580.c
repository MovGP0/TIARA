/* Ghidra address: 008ec580 */
/* Ghidra symbol: FUN_008ec580 */


ulonglong FUN_008ec580(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0xbc) {
    uVar2 = uVar1;
    if (uVar1 != 0xbb) {
      if ((0xa0 < uVar1) && (uVar1 != 0xa4)) {
        uVar2 = 0;
        if (uVar1 == 0xac) goto LAB_008ec5e7;
        if (uVar1 != 0xad) {
          return 0xffffffff;
        }
      }
      return (ulonglong)param_2;
    }
  }
  else {
    uVar2 = 0;
    if (((uVar1 != 0xbf) && (uVar2 = uVar1 - 0xc1, 0x19 < uVar2)) &&
       (uVar2 = uVar1 - 0xe0, 0x12 < uVar2)) {
      return 0xffffffff;
    }
  }
LAB_008ec5e7:
  return CONCAT62((int6)(uVar2 >> 0x10),param_2 + 0x580);
}

