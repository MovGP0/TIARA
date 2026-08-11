/* Ghidra address: 0045ae90 */
/* Ghidra symbol: FUN_0045ae90 */


longlong FUN_0045ae90(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_0200c610 == 0) {
    lVar1 = FUN_0045b660(&PTR_FUN_0043c260,1);
    lVar2 = 0;
    LOCK();
    if (DAT_0200c610 != 0) {
      lVar2 = DAT_0200c610;
      lVar1 = DAT_0200c610;
    }
    DAT_0200c610 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0200c610;
}

