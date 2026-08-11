/* Ghidra address: 0045ae40 */
/* Ghidra symbol: FUN_0045ae40 */


longlong FUN_0045ae40(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_0200c608 == 0) {
    lVar1 = FUN_0045b570(&PTR_FUN_0043bf90,1);
    lVar2 = 0;
    LOCK();
    if (DAT_0200c608 != 0) {
      lVar2 = DAT_0200c608;
      lVar1 = DAT_0200c608;
    }
    DAT_0200c608 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0200c608;
}

