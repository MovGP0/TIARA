/* Ghidra address: 00c42960 */
/* Ghidra symbol: FUN_00c42960 */


double FUN_00c42960(double param_1)

{
  double dVar1;
  
  if (0.0 < param_1) {
    if (DAT_01ea3710 < param_1) {
      dVar1 = (double)FUN_0040c2f0();
    }
    else {
      dVar1 = DAT_02019c40 + DAT_02019c48 * (param_1 - DAT_01ea3710);
    }
  }
  else {
    dVar1 = DAT_02019c40 - DAT_02019c48 * DAT_01ea3710;
  }
  return dVar1;
}

