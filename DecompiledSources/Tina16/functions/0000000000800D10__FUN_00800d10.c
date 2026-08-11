/* Ghidra address: 00800d10 */
/* Ghidra symbol: FUN_00800d10 */


longlong FUN_00800d10(void)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  for (lVar1 = thunk_FUN_03de17fb(); lVar1 != 0; lVar1 = thunk_FUN_03de17fb(lVar1)) {
    uVar2 = thunk_FUN_04118143(lVar1,0xffffffec);
    if ((uVar2 & 0x80) != 0x80) break;
  }
  if (lVar1 == 0) {
    if (*(longlong *)(DAT_02012668 + 0xa8) == 0) {
      bVar4 = false;
    }
    else {
      uVar3 = FUN_0065b870(*(longlong *)(DAT_02012668 + 0xa8));
      uVar2 = thunk_FUN_04118143(uVar3,0xffffffec);
      bVar4 = (uVar2 & 0x80) == 0;
    }
    if (bVar4) {
      lVar1 = FUN_0065b870(*(undefined8 *)(DAT_02012668 + 0xa8));
    }
    else {
      lVar1 = *(longlong *)(DAT_02012668 + 0x2d0);
    }
  }
  return lVar1;
}

