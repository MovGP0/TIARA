/* Ghidra address: 010d62f0 */
/* Ghidra symbol: FUN_010d62f0 */


ulonglong FUN_010d62f0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_010d58b0(param_1 + 0x28);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*PTR_DAT_02001bf0 == '\0') {
      uVar2 = FUN_010d5940(L"PYTHONHOME",*(undefined8 *)(param_1 + 0x28));
      *PTR_DAT_02001bf0 = uVar2;
    }
    FUN_013b9e80(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 8));
  }
  return uVar3 & 0xffffffff;
}

