/* Ghidra address: 013c4680 */
/* Ghidra symbol: FUN_013c4680 */


ulonglong FUN_013c4680(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_010d58b0(param_1 + 0x2e8);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*PTR_DAT_02001bf0 == '\0') {
      uVar2 = FUN_010d5940(L"PYTHONHOME",*(undefined8 *)(param_1 + 0x2e8));
      *PTR_DAT_02001bf0 = uVar2;
    }
    FUN_013b9e80(*(undefined8 *)(param_1 + 0x328),*(undefined8 *)(param_1 + 0x2e8),
                 *(undefined8 *)(param_1 + 0x2d0));
  }
  return uVar3 & 0xffffffff;
}

