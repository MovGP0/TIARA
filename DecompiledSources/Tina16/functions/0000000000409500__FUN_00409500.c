/* Ghidra address: 00409500 */
/* Ghidra symbol: FUN_00409500 */


void FUN_00409500(void)

{
  if (DAT_0200ac78 != 0) {
    thunk_FUN_041d2921(DAT_0200ac78);
    DAT_0200ac78 = 0;
  }
  if (DAT_02006a34 != '\0') {
    FUN_00408b00();
  }
  if (DAT_0200ac68 != 0) {
    thunk_FUN_04184b1a(DAT_0200ac68,0,0x8000);
    DAT_0200ac68 = 0;
  }
  FUN_004093e0();
  return;
}

