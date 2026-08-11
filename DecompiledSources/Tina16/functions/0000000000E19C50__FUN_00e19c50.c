/* Ghidra address: 00e19c50 */
/* Ghidra symbol: FUN_00e19c50 */


undefined8 FUN_00e19c50(void)

{
  undefined8 unaff_XMM6_Qa;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e508 == (code *)0x0) {
      DAT_0202e508 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSATrigLevel");
    }
    if (DAT_0202e508 != (code *)0x0) {
      unaff_XMM6_Qa = (*DAT_0202e508)();
    }
  }
  return unaff_XMM6_Qa;
}

