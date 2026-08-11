/* Ghidra address: 00e1a3a0 */
/* Ghidra symbol: FUN_00e1a3a0 */


undefined4 FUN_00e1a3a0(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e580 == (code *)0x0) {
      DAT_0202e580 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAMeasMode");
    }
    if (DAT_0202e580 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e580)();
    }
  }
  return unaff_EBX;
}

