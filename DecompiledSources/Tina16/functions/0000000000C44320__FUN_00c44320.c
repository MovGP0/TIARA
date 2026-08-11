/* Ghidra address: 00c44320 */
/* Ghidra symbol: FUN_00c44320 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c44320(void)

{
  DAT_02019c50 = DAT_02019c50 + -1;
  if (DAT_02019c50 == -1) {
    _DAT_02019c58 = 0x3d719799812dea11;
    DAT_02019c28 = 0;
    DAT_02019c30 = FUN_0040af80(DAT_01ea36f8);
    DAT_02019c38 = FUN_0040af80(DAT_01ea3700);
    FUN_0040c2f0(DAT_01ea3710);
    DAT_02019c40 = DAT_01ea3700;
    DAT_01ea3710 = (double)FUN_0040af80(DAT_01ea3700);
    DAT_02019c48 = 1.0 / DAT_01ea3710;
  }
  return;
}

