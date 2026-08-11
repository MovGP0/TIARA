/* Ghidra address: 01478150 */
/* Ghidra symbol: FUN_01478150 */


ulonglong FUN_01478150(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_010d58b0(param_1 + 0x2a0);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*PTR_DAT_02001bf0 == '\0') {
      uVar2 = FUN_010d5940(L"PYTHONHOME",*(undefined8 *)(param_1 + 0x2a0));
      *PTR_DAT_02001bf0 = uVar2;
    }
    FUN_013b9e80(*(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_1 + 0x2a0),
                 *(undefined8 *)(param_1 + 0x278));
    FUN_013bbd10(*(undefined8 *)(param_1 + 0x2a8),1);
  }
  return uVar3 & 0xffffffff;
}

