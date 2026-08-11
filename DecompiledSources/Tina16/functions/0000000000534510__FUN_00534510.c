/* Ghidra address: 00534510 */
/* Ghidra symbol: FUN_00534510 */


longlong FUN_00534510(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_02011690 == 0) {
    lVar1 = FUN_00534560(&PTR_FUN_005342d8,1);
    lVar2 = 0;
    LOCK();
    if (DAT_02011690 != 0) {
      lVar2 = DAT_02011690;
      lVar1 = DAT_02011690;
    }
    DAT_02011690 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_02011690;
}

