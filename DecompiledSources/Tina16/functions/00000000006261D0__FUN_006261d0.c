/* Ghidra address: 006261d0 */
/* Ghidra symbol: FUN_006261d0 */


void FUN_006261d0(void)

{
  undefined1 uVar1;
  ulonglong uVar2;
  
  if (DAT_01df0c48 == '\0') {
    if (DAT_02012278 != (code *)0x0) {
      (*DAT_02012278)();
    }
    if ((DAT_01df0ba8 == 0xffffffff) || (DAT_01df0b80 == (code *)0x0)) {
      uVar2 = thunk_FUN_03e6434b(0);
      DAT_01df0c49 = (uVar2 & 0x80000000) == 0;
    }
    else {
      uVar2 = (*DAT_01df0b80)(0,DAT_01df0ba8);
      DAT_01df0c49 = (uVar2 & 0x80000000) == 0;
      if (((*PTR_DAT_02002188 == '\0') && ((DAT_01df0ba8 & 2) == 0)) && (DAT_01df0ba8 != 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *PTR_DAT_02002188 = uVar1;
    }
    DAT_01df0c48 = '\x01';
  }
  return;
}

