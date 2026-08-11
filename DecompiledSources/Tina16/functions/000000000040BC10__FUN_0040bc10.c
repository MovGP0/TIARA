/* Ghidra address: 0040bc10 */
/* Ghidra symbol: FUN_0040bc10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040bc10(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1 * param_1;
  dVar2 = dVar1 * dVar1;
  return param_1 + (((DAT_01dbab40 * dVar2 + _DAT_01dbab50) * dVar2 + _DAT_01dbab60 + _DAT_01dbab68)
                    * dVar1 + (DAT_01dbab48 * dVar2 + _DAT_01dbab58) * dVar2 + _DAT_01dbab70 +
                   _DAT_01dbab78) * dVar1 * param_1 + (1.0 - dVar1 * 0.5) * param_2;
}

