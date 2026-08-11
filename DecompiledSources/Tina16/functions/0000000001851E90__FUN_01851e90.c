/* Ghidra address: 01851e90 */
/* Ghidra symbol: FUN_01851e90 */


void FUN_01851e90(void)

{
  DAT_021102e0 = DAT_021102e0 + 1;
  if (DAT_021102e0 == 0) {
    if (DAT_01fac448 != 0) {
      FUN_00410f20(DAT_01fac448);
    }
    DAT_01fac448 = 0;
    DAT_01fac450 = 1;
    FUN_00410f20(DAT_01fac458);
    DAT_01fac458 = 0;
    DAT_01fac460 = 1;
  }
  return;
}

