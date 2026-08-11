/* Ghidra address: 0149bcb0 */
/* Ghidra symbol: FUN_0149bcb0 */


ulonglong FUN_0149bcb0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_010d58b0(param_1 + 0xbf8);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    if (*PTR_DAT_02001bf0 == '\0') {
      uVar2 = FUN_010d5940(L"PYTHONHOME",*(undefined8 *)(param_1 + 0xbf8));
      *PTR_DAT_02001bf0 = uVar2;
    }
    uVar3 = FUN_019a4600();
    FUN_013b9e80(*(undefined8 *)(param_1 + 0xc00),*(undefined8 *)(param_1 + 0xbf8),uVar3);
    FUN_013bbd10(*(undefined8 *)(param_1 + 0xc00),1);
  }
  return uVar4 & 0xffffffff;
}

