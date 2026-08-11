/* Ghidra address: 0044eca0 */
/* Ghidra symbol: FUN_0044eca0 */


void FUN_0044eca0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = 0x20;
  plVar1 = &DAT_0200c690;
  do {
    if (*plVar1 == param_1) {
      LOCK();
      *(undefined4 *)(plVar1 + -1) = 0;
      UNLOCK();
      return;
    }
    plVar1 = plVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  thunk_FUN_041d2921();
  return;
}

