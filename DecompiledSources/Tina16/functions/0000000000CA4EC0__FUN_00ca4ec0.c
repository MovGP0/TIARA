/* Ghidra address: 00ca4ec0 */
/* Ghidra symbol: FUN_00ca4ec0 */


void FUN_00ca4ec0(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if (DAT_01eaac28 != 0) {
    if (DAT_01ea98e0 != (code *)0x0) {
      iVar2 = (*DAT_01ea98e0)();
      if ((((iVar2 == 0x90801f) && (DAT_01eaa9a8 != (code *)0x0)) && (DAT_01eaa9b0 != (code *)0x0))
         && (DAT_01ea9900 != 0)) {
        uVar1 = (*DAT_01eaa9a8)();
        (*DAT_01eaa9b0)(uVar1,DAT_01ea9900);
      }
    }
    if (DAT_01eaa9a0 != (code *)0x0) {
      (*DAT_01eaa9a0)();
    }
    if (DAT_01eaa988 != (code *)0x0) {
      (*DAT_01eaa988)();
    }
    if (DAT_01eaa990 == (code *)0x0) {
      if (DAT_01eaa998 != (code *)0x0) {
        (*DAT_01eaa998)(0);
      }
    }
    else {
      (*DAT_01eaa990)(0);
    }
    if (DAT_01ea98d0 != (code *)0x0) {
      (*DAT_01ea98d0)();
    }
    thunk_FUN_041c8c2f(DAT_01eaac28);
    DAT_01eaac28 = 0;
  }
  if (DAT_01eaac30 != 0) {
    thunk_FUN_041c8c2f(DAT_01eaac30);
    DAT_01eaac30 = 0;
  }
  FUN_00ca36a0();
  return;
}

