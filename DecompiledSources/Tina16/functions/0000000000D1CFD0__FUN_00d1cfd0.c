/* Ghidra address: 00d1cfd0 */
/* Ghidra symbol: FUN_00d1cfd0 */


void FUN_00d1cfd0(void)

{
  DAT_0201a0cc = DAT_0201a0cc + 1;
  if (DAT_0201a0cc == 0) {
    FUN_01d42ec0(L"Hash.Finalization.0");
    FUN_0041b5b0(FUN_00d1cf30);
    FUN_00410f20(DAT_01ebb7c8);
    DAT_01ebb7c8 = 0;
    FUN_01d42ec0(L"Hash.Finalization.1");
  }
  return;
}

