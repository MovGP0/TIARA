/* Ghidra address: 00458e40 */
/* Ghidra symbol: FUN_00458e40 */


longlong FUN_00458e40(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_0200c5f8 == 0) {
    lVar1 = FUN_0045b810(&PTR_FUN_0043c890,1);
    lVar2 = 0;
    LOCK();
    if (DAT_0200c5f8 != 0) {
      lVar2 = DAT_0200c5f8;
      lVar1 = DAT_0200c5f8;
    }
    DAT_0200c5f8 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0200c5f8;
}

