/* Ghidra address: 01521920 */
/* Ghidra symbol: FUN_01521920 */


ulonglong FUN_01521920(char param_1)

{
  char cVar1;
  ulonglong unaff_RSI;
  undefined7 uVar2;
  
  cVar1 = FUN_015218c0();
  if (cVar1 == '\0') {
    cVar1 = FUN_015218e0();
    uVar2 = (undefined7)(unaff_RSI >> 8);
    if (cVar1 == '\0') {
      cVar1 = FUN_01521900();
      if (cVar1 != '\0') {
        unaff_RSI = CONCAT71(uVar2,1);
      }
    }
    else {
      unaff_RSI = CONCAT71(uVar2,param_1 != '\0');
    }
  }
  else {
    unaff_RSI = 0;
  }
  return unaff_RSI & 0xffffffff;
}

