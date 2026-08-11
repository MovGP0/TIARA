/* Ghidra address: 013c6c40 */
/* Ghidra symbol: FUN_013c6c40 */


ulonglong FUN_013c6c40(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_010d58b0(param_1 + 0xb8);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    if (*PTR_DAT_02001bf0 == '\0') {
      uVar2 = FUN_010d5940(L"PYTHONHOME",*(undefined8 *)(param_1 + 0xb8));
      *PTR_DAT_02001bf0 = uVar2;
    }
    uVar3 = FUN_019a4600();
    FUN_013b9e80(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),uVar3);
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x126) = 1;
    FUN_013bd120(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)PTR_DAT_02005188);
  }
  return uVar4 & 0xffffffff;
}

