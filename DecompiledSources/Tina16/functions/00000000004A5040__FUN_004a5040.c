/* Ghidra address: 004a5040 */
/* Ghidra symbol: FUN_004a5040 */


undefined1 FUN_004a5040(void)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if (DAT_020115f8 == (code *)0x0) {
    lVar1 = FUN_004a4fd0();
    uVar2 = lVar1 == 0;
  }
  else {
    uVar2 = (*DAT_020115f8)();
  }
  return uVar2;
}

