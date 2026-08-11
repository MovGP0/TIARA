/* Ghidra address: 00e1a500 */
/* Ghidra symbol: FUN_00e1a500 */


undefined4 FUN_00e1a500(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e598 == (code *)0x0) {
      DAT_0202e598 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAMeasWindow");
    }
    if (DAT_0202e598 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e598)();
    }
  }
  return unaff_EBX;
}

