/* Ghidra address: 0045adf0 */
/* Ghidra symbol: FUN_0045adf0 */


longlong FUN_0045adf0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_0200c600 == 0) {
    lVar1 = FUN_0045b810(&PTR_FUN_0043c580,1);
    lVar2 = 0;
    LOCK();
    if (DAT_0200c600 != 0) {
      lVar2 = DAT_0200c600;
      lVar1 = DAT_0200c600;
    }
    DAT_0200c600 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0200c600;
}

