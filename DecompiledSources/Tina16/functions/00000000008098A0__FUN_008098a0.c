/* Ghidra address: 008098a0 */
/* Ghidra symbol: FUN_008098a0 */


void FUN_008098a0(void)

{
  longlong lVar1;
  int iVar2;
  longlong local_10 [2];
  
  if (DAT_020126a0 != 0) {
    thunk_FUN_041c90ed();
  }
  lVar1 = DAT_020126a8;
  DAT_020126a0 = 0;
  LOCK();
  local_10[0] = DAT_020126a8;
  DAT_020126a8 = 0;
  UNLOCK();
  if (lVar1 != 0) {
    thunk_FUN_039b8e11(DAT_02012698);
    iVar2 = FUN_00427ab0();
    if (iVar2 != DAT_02012694) {
      while (iVar2 = thunk_FUN_0414e2fd(1,local_10,0,0xffffffff,0x4ff), iVar2 != 0) {
        FUN_0080cca0(DAT_02012668);
      }
    }
    thunk_FUN_041d2921(local_10[0]);
  }
  return;
}

