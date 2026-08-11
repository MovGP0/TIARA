/* Ghidra address: 004aa220 */
/* Ghidra symbol: FUN_004aa220 */


void FUN_004aa220(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_02011638 == 0) {
    lVar1 = FUN_004aa2b0(&DAT_004a53f8,1);
    lVar2 = 0;
    LOCK();
    if (DAT_02011638 != 0) {
      lVar2 = DAT_02011638;
      lVar1 = DAT_02011638;
    }
    DAT_02011638 = lVar1;
    UNLOCK();
    if (lVar2 == 0) {
      FUN_0041b5a0(FUN_004aa1e0);
    }
    else {
      FUN_00410f20();
    }
  }
  return;
}

