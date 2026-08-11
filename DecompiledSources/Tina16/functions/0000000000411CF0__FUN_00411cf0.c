/* Ghidra address: 00411cf0 */
/* Ghidra symbol: FUN_00411cf0 */


void FUN_00411cf0(void)

{
  longlong lVar1;
  
  if (DAT_02006000 == 0) {
    DAT_02006000 = FUN_00411b90();
    LOCK();
    UNLOCK();
  }
  if ((1 < DAT_020060b0) && (DAT_02006004 == 0)) {
    LOCK();
    DAT_02006004 = 1000;
    UNLOCK();
  }
  if (DAT_02006000 < 0x31) {
    lVar1 = FUN_00408330(0x30);
  }
  else {
    lVar1 = FUN_00408330((longlong)DAT_02006000);
  }
  *(int *)(lVar1 + 0x18) = DAT_02006004;
  return;
}

