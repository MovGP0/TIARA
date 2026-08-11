/* Ghidra address: 00458d50 */
/* Ghidra symbol: FUN_00458d50 */


longlong FUN_00458d50(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_0200c5e8 == 0) {
    uVar1 = thunk_FUN_041a78f9();
    lVar2 = FUN_0045b0a0(&PTR_FUN_0043bb30,1,uVar1,0,0);
    lVar3 = 0;
    LOCK();
    if (DAT_0200c5e8 != 0) {
      lVar3 = DAT_0200c5e8;
      lVar2 = DAT_0200c5e8;
    }
    DAT_0200c5e8 = lVar2;
    UNLOCK();
    if (lVar3 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0200c5e8;
}

