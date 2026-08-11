/* Ghidra address: 009e34c0 */
/* Ghidra symbol: FUN_009e34c0 */


longlong FUN_009e34c0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_02013328 == 0) {
    lVar1 = FUN_009e3680(&PTR_FUN_009e2538,1);
    lVar2 = 0;
    LOCK();
    if (DAT_02013328 != 0) {
      lVar2 = DAT_02013328;
      lVar1 = DAT_02013328;
    }
    DAT_02013328 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_02013328;
}

