/* Ghidra address: 008a03f0 */
/* Ghidra symbol: FUN_008a03f0 */


ulonglong FUN_008a03f0(longlong param_1)

{
  char cVar1;
  ulonglong unaff_RSI;
  undefined **ppuVar2;
  undefined **ppuVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar4 = 8;
    ppuVar2 = &PTR_DAT_01e24628;
    do {
      unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
      ppuVar3 = ppuVar2;
      do {
        cVar1 = FUN_00879070(param_1,*ppuVar3);
        if (cVar1 != '\0') goto LAB_008a0446;
        cVar1 = (char)unaff_RSI + '\x01';
        unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),cVar1);
        ppuVar3 = ppuVar3 + 1;
      } while (cVar1 != '\r');
      ppuVar2 = ppuVar2 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  unaff_RSI = 0;
LAB_008a0446:
  return unaff_RSI & 0xffffffff;
}

