/* Ghidra address: 00e17ca0 */
/* Ghidra symbol: FUN_00e17ca0 */


undefined4 FUN_00e17ca0(void)

{
  undefined4 unaff_EBX;
  
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2e8 == (code *)0x0) {
      DAT_0202e2e8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPCouplingMode");
    }
    if (DAT_0202e2e8 != (code *)0x0) {
      unaff_EBX = (*DAT_0202e2e8)();
    }
  }
  return unaff_EBX;
}

