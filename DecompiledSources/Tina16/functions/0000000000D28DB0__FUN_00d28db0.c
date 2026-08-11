/* Ghidra address: 00d28db0 */
/* Ghidra symbol: FUN_00d28db0 */


void FUN_00d28db0(void)

{
  DAT_0201a0d0 = DAT_0201a0d0 + 1;
  if (DAT_0201a0d0 == 0) {
    FUN_01d42ec0(L"Cipher.Finalization.0");
    FUN_0041b5b0(FUN_00d28d10);
    FUN_00410f20(DAT_01eca858);
    DAT_01eca858 = 0;
    FUN_01d42ec0(L"Cipher.Finalization.1");
  }
  return;
}

