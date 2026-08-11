/* Ghidra address: 00c42a20 */
/* Ghidra symbol: FUN_00c42a20 */


double FUN_00c42a20(double param_1)

{
  double dVar1;
  
  if (param_1 < DAT_01ea36f8) {
    dVar1 = (double)FUN_0040af80();
  }
  else {
    dVar1 = DAT_02019c30 * ((param_1 - DAT_01ea36f8) + 1.0);
  }
  return dVar1;
}

