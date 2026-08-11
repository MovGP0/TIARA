/* Ghidra address: 01656f00 */
/* Ghidra symbol: FUN_01656f00 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01656f00(double param_1,char param_2)

{
  bool bVar1;
  
  if (param_2 == '\0') {
    bVar1 = param_1 != 0.0;
  }
  else {
    bVar1 = _DAT_01f7d600 < param_1;
  }
  return bVar1;
}

