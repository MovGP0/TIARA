/* Ghidra address: 00e19ae0 */
/* Ghidra symbol: FUN_00e19ae0 */


undefined4 FUN_00e19ae0(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4f0 == (code *)0x0) {
      DAT_0202e4f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSATrigMode");
    }
    if (DAT_0202e4f0 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e4f0)();
    }
  }
  return unaff_EBX;
}

