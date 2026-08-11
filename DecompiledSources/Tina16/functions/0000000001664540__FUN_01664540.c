/* Ghidra address: 01664540 */
/* Ghidra symbol: FUN_01664540 */


void FUN_01664540(void)

{
  byte bVar1;
  
  DAT_0210f880 = DAT_0210f880 + -1;
  if (DAT_0210f880 == -1) {
    FUN_00dff0d0();
    DAT_0210f878 = 0x80;
    bVar1 = PTR_DAT_02004508[0x74];
    if ((bVar1 < 0x80) && (bVar1 != 0)) {
      DAT_0210f878 = (uint)bVar1;
    }
    bVar1 = PTR_DAT_02004508[0x84];
    if ((bVar1 < DAT_0210f878) && (bVar1 != 0)) {
      DAT_0210f878 = (uint)bVar1;
    }
    DAT_0210f87c = (PTR_DAT_02004508[5] & 2) != 0;
  }
  return;
}

