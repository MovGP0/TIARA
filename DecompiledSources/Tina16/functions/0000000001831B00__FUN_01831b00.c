/* Ghidra address: 01831b00 */
/* Ghidra symbol: FUN_01831b00 */


undefined8 FUN_01831b00(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(byte *)(param_1 + 0xa0);
  if (uVar1 < 0x13) {
    if (uVar1 == 0x12) {
      return 6;
    }
    if (uVar1 - 1 == 0xffffffffffffffff) {
      return 7;
    }
    if (uVar1 - 1 < 6) {
      return 4;
    }
    if (uVar1 - 7 < 4) {
      return 3;
    }
    if (uVar1 - 0xb < 7) {
      return 2;
    }
  }
  else {
    if (uVar1 == 0x13) {
      return 5;
    }
    if (uVar1 - 0x14 < 2) {
      return 1;
    }
    if (uVar1 - 0x16 < 2) {
      return 4;
    }
  }
  return 0;
}

