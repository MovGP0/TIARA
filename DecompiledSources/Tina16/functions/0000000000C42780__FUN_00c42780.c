/* Ghidra address: 00c42780 */
/* Ghidra symbol: FUN_00c42780 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00c42780(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
    dVar1 = -1.0 / _DAT_02019c58;
  }
  else {
    dVar1 = (double)FUN_0040c2f0(param_2);
    dVar2 = (double)FUN_0040c2f0(param_1);
    dVar1 = dVar1 / dVar2;
  }
  return dVar1;
}

