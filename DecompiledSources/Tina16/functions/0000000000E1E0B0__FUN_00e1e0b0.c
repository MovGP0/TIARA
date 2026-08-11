/* Ghidra address: 00e1e0b0 */
/* Ghidra symbol: FUN_00e1e0b0 */


undefined4 FUN_00e1e0b0(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e948 == (code *)0x0) {
      DAT_0202e948 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckHW");
    }
    if (DAT_0202e948 != (code *)0x0) {
      uVar1 = (*DAT_0202e948)();
    }
  }
  return uVar1;
}

