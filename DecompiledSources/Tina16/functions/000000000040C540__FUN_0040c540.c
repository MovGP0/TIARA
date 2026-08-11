/* Ghidra address: 0040c540 */
/* Ghidra symbol: FUN_0040c540 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040c540(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1 * param_1;
  dVar2 = dVar1 * dVar1;
  return ((DAT_01dbac08 * dVar2 + _DAT_01dbac18) * dVar2 + _DAT_01dbac30 +
          ((DAT_01dbac00 * dVar2 + _DAT_01dbac10) * dVar2 + _DAT_01dbac20 + _DAT_01dbac28) * dVar1 +
         _DAT_01dbac38) * dVar1 * param_1 + param_1;
}

