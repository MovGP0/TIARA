/* Ghidra address: 00e19cd0 */
/* Ghidra symbol: FUN_00e19cd0 */


undefined4 FUN_00e19cd0(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e510 == (code *)0x0) {
      DAT_0202e510 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSATrigSlope");
    }
    if (DAT_0202e510 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e510)();
    }
  }
  return unaff_EBX;
}

