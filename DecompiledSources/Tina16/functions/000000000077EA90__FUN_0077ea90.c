/* Ghidra address: 0077ea90 */
/* Ghidra symbol: FUN_0077ea90 */


void FUN_0077ea90(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (PTR_PTR_02012568 != (undefined *)0x0) {
    lVar1 = FUN_00410e60(PTR_PTR_02012568,1);
    lVar2 = 0;
    LOCK();
    if (DAT_02012560 != 0) {
      lVar2 = DAT_02012560;
      lVar1 = DAT_02012560;
    }
    DAT_02012560 = lVar1;
    UNLOCK();
    if (lVar2 != 0) {
      FUN_00410f20();
    }
  }
  return;
}

