/* Ghidra address: 013d0630 */
/* Ghidra symbol: FUN_013d0630 */


ulonglong FUN_013d0630(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar2 = FUN_010d58b0(param_1 + 0x8d8);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    if (*PTR_DAT_02001bf0 == '\0') {
      uVar3 = FUN_010d5940(L"PYTHONHOME",*(undefined8 *)(param_1 + 0x8d8));
      *PTR_DAT_02001bf0 = uVar3;
    }
    uVar4 = FUN_019a4600();
    FUN_013b9e80(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x8d8),uVar4);
    lVar1 = *(longlong *)(param_1 + 0x8e0);
    *(undefined1 *)(lVar1 + 0x126) = 1;
    FUN_013bd120(lVar1,*(undefined8 *)PTR_DAT_02005188);
    FUN_013bcca0(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x8f8));
  }
  return uVar5 & 0xffffffff;
}

