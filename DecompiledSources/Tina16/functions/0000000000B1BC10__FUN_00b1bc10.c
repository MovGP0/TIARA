/* Ghidra address: 00b1bc10 */
/* Ghidra symbol: FUN_00b1bc10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00b1bc10(double param_1)

{
  if (param_1 < 1.0) {
    param_1 = param_1 / _DAT_02014818;
  }
  else {
    param_1 = param_1 * (double)_DAT_02014800 + (double)_DAT_02014810;
  }
  return param_1;
}

