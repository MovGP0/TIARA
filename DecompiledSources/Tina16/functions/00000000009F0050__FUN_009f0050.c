/* Ghidra address: 009f0050 */
/* Ghidra symbol: FUN_009f0050 */


undefined8 FUN_009f0050(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0xb9) {
    if (uVar1 == 0xb8) {
      return 0x17e;
    }
    if (uVar1 == 0xa4) {
      return 0x20ac;
    }
    if (uVar1 == 0xa6) {
      return 0xa6;
    }
    if (uVar1 == 0xa8) {
      return 0x161;
    }
    lVar2 = uVar1 - 0xb4;
    if (lVar2 == 0) {
      return 0x17d;
    }
  }
  else {
    if (uVar1 == 0xbc) {
      return 0x152;
    }
    if (uVar1 == 0xbd) {
      return 0x153;
    }
    lVar2 = uVar1 - 0xbe;
    if (lVar2 == 0) {
      return 0x178;
    }
  }
  return CONCAT62((int6)((ulonglong)lVar2 >> 0x10),(ushort)param_2);
}

