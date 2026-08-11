/* Ghidra address: 009e3510 */
/* Ghidra symbol: FUN_009e3510 */


longlong FUN_009e3510(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_02013330 == 0) {
    lVar1 = FUN_00410e60(&PTR_FUN_009e2828,1);
    lVar2 = 0;
    LOCK();
    if (DAT_02013330 != 0) {
      lVar2 = DAT_02013330;
      lVar1 = DAT_02013330;
    }
    DAT_02013330 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_02013330;
}

