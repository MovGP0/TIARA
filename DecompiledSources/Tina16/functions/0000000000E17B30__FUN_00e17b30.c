/* Ghidra address: 00e17b30 */
/* Ghidra symbol: FUN_00e17b30 */


undefined4 FUN_00e17b30(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2d0 == (code *)0x0) {
      DAT_0202e2d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPXYChannel");
    }
    if (DAT_0202e2d0 != (code *)0x0) {
      uVar1 = (*DAT_0202e2d0)();
    }
  }
  return uVar1;
}

