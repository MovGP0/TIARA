/* Ghidra address: 00e1a760 */
/* Ghidra symbol: FUN_00e1a760 */


undefined4 FUN_00e1a760(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5c0 == (code *)0x0) {
      DAT_0202e5c0 = (code *)FUN_00427c10(DAT_01edc8a0,L"StartSAMeasurement");
    }
    if (DAT_0202e5c0 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e5c0)();
    }
  }
  return unaff_EBX;
}

