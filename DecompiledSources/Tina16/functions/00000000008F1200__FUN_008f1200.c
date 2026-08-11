/* Ghidra address: 008f1200 */
/* Ghidra symbol: FUN_008f1200 */


undefined8 FUN_008f1200(undefined8 param_1,byte param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0x5d) {
    uVar2 = uVar1 - 0x20;
    if (uVar2 < 0x3c) {
LAB_008f123e:
      return CONCAT62((int6)(uVar2 >> 0x10),(ushort)param_2);
    }
    if (uVar1 == 0x5c) {
      return 0xa5;
    }
  }
  else {
    uVar2 = uVar1 - 0x5d;
    if (uVar2 < 0x21) goto LAB_008f123e;
    if (uVar1 == 0x7e) {
      return 0x203e;
    }
    if (uVar1 - 0xa1 < 0x3f) {
      return CONCAT62((int6)(uVar1 - 0xa1 >> 0x10),param_2 - 0x140);
    }
  }
  return 0xffffffff;
}

