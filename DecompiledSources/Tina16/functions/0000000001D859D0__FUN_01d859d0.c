/* Ghidra address: 01d859d0 */
/* Ghidra symbol: FUN_01d859d0 */


void FUN_01d859d0(void)

{
  DAT_03567c90 = DAT_03567c90 + 1;
  if (DAT_03567c90 == 0) {
    FUN_00410f20(DAT_03567c88);
    DAT_03567c88 = 0;
    thunk_FUN_041c8c2f(DAT_03567c98);
  }
  return;
}

