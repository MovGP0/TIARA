/* Ghidra address: 0157d750 */
/* Ghidra symbol: FUN_0157d750 */


longlong FUN_0157d750(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_0210ee98 == 0) {
    lVar1 = FUN_0045a9e0(0x1b5);
    lVar2 = 0;
    LOCK();
    if (DAT_0210ee98 != 0) {
      lVar2 = DAT_0210ee98;
      lVar1 = DAT_0210ee98;
    }
    DAT_0210ee98 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0210ee98;
}

