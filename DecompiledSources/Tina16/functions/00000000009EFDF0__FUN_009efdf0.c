/* Ghidra address: 009efdf0 */
/* Ghidra symbol: FUN_009efdf0 */


undefined8 FUN_009efdf0(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = (ulonglong)param_2;
  uVar3 = uVar1;
  if (uVar1 < 0xb0) {
    if (uVar1 < 0xa6) {
      if (uVar1 < 0xa1) {
LAB_009efe9e:
        return CONCAT62((int6)(uVar3 >> 0x10),(ushort)param_2);
      }
      if (uVar1 == 0xa1) {
        return 0x2018;
      }
      lVar2 = uVar1 - 0xa2;
      if (lVar2 == 0) {
        return 0x2019;
      }
    }
    else {
      uVar3 = uVar1 - 0xa6;
      if ((uVar1 - 0xa6 < 4) || (uVar3 = uVar1 - 0xab, uVar1 - 0xab < 3)) goto LAB_009efe9e;
      lVar2 = uVar1 - 0xaf;
      if (lVar2 == 0) {
        return 0x2015;
      }
    }
  }
  else {
    if (uVar1 < 0xbe) {
      if (((uVar1 != 0xbd) && (uVar3 = uVar1 - 0xb0, 3 < uVar3)) && (uVar3 = 0, uVar1 != 0xb7)) {
        lVar2 = uVar1 - 0xbb;
        if (lVar2 != 0) goto LAB_009efebb;
        uVar3 = 0;
      }
      goto LAB_009efe9e;
    }
    if ((uVar1 == 0xd2) || (lVar2 = uVar1 - 0xff, lVar2 == 0)) {
      return 0xffffffff;
    }
  }
LAB_009efebb:
  return CONCAT62((int6)((ulonglong)lVar2 >> 0x10),param_2 + 0x2d0);
}

