/* Ghidra address: 00e1a850 */
/* Ghidra symbol: FUN_00e1a850 */


undefined4 FUN_00e1a850(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5d8 == (code *)0x0) {
      DAT_0202e5d8 = (code *)FUN_00427c10(DAT_01edc8a0,L"CalibrateSA");
    }
    if (DAT_0202e5d8 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e5d8)();
    }
  }
  return unaff_EBX;
}

