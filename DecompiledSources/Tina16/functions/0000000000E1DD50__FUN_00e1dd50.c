/* Ghidra address: 00e1dd50 */
/* Ghidra symbol: FUN_00e1dd50 */


undefined4 FUN_00e1dd50(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e928 == (code *)0x0) {
      DAT_0202e928 = (code *)FUN_00427c10(DAT_01edc8a0,L"SwitchToFrontPanel");
    }
    if (DAT_0202e928 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e928)();
    }
  }
  return unaff_EBX;
}

