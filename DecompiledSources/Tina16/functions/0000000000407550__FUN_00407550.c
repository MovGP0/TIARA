/* Ghidra address: 00407550 */
/* Ghidra symbol: FUN_00407550 */


void FUN_00407550(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_02006bb0;
  if (DAT_02006bb8 != 0) {
    if ((*(byte *)(DAT_02006bb0 + -8) & 1) == 0) {
      *(ulonglong *)(DAT_02006bb0 + -8) = *(ulonglong *)(DAT_02006bb0 + -8) | 8;
      uVar3 = (ulonglong)DAT_02006bb8;
      lVar1 = lVar1 - uVar3;
    }
    else {
      uVar2 = (uint)*(undefined8 *)(DAT_02006bb0 + -8) & 0xfffffff0;
      if (0xb2f < uVar2) {
        FUN_00407490(DAT_02006bb0);
        uVar2 = (uint)*(undefined8 *)(DAT_02006bb0 + -8) & 0xfffffff0;
      }
      lVar1 = DAT_02006bb0 - (ulonglong)DAT_02006bb8;
      uVar3 = (ulonglong)(uVar2 + DAT_02006bb8);
    }
    *(ulonglong *)(lVar1 + -8) = uVar3 + 3;
    *(ulonglong *)((uVar3 - 0x10) + lVar1) = uVar3;
    if (0xb2f < (uint)uVar3) {
      FUN_004074e0(lVar1);
    }
  }
  return;
}

