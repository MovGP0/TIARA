/* Ghidra address: 009effa0 */
/* Ghidra symbol: FUN_009effa0 */


undefined8 FUN_009effa0(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0xf1) {
    if (uVar1 == 0xf0) {
      return 0x11f;
    }
    if (uVar1 == 0xd0) {
      return 0x11e;
    }
    if (uVar1 == 0xdd) {
      return 0x130;
    }
    lVar2 = uVar1 - 0xde;
    if (lVar2 == 0) {
      return 0x15e;
    }
  }
  else {
    if (uVar1 == 0xfd) {
      return 0x131;
    }
    lVar2 = uVar1 - 0xfe;
    if (lVar2 == 0) {
      return 0x15f;
    }
  }
  return CONCAT62((int6)((ulonglong)lVar2 >> 0x10),(ushort)param_2);
}

