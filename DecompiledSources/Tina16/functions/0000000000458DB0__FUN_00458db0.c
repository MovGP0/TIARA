/* Ghidra address: 00458db0 */
/* Ghidra symbol: FUN_00458db0 */


longlong FUN_00458db0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_1c [28];
  
  if (DAT_0200c5f0 == 0) {
    iVar1 = thunk_FUN_041c63c1(0x4e9f,local_1c);
    if (iVar1 == 0) {
      lVar2 = FUN_0045b0a0(&PTR_FUN_0043bb30,1,0x1b5,0,0);
    }
    else {
      lVar2 = FUN_0045b0a0(&PTR_FUN_0043bb30,1,0x4e9f,0,0);
    }
    lVar3 = 0;
    LOCK();
    if (DAT_0200c5f0 != 0) {
      lVar3 = DAT_0200c5f0;
      lVar2 = DAT_0200c5f0;
    }
    DAT_0200c5f0 = lVar2;
    UNLOCK();
    if (lVar3 != 0) {
      FUN_00410f20();
    }
  }
  return DAT_0200c5f0;
}

