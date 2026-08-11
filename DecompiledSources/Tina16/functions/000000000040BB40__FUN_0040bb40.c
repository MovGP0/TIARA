/* Ghidra address: 0040bb40 */
/* Ghidra symbol: FUN_0040bb40 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040bb40(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1 * param_1;
  dVar3 = dVar1 * dVar1;
  dVar2 = 1.0 - dVar1 * 0.5;
  return dVar2 + ((((DAT_01dbab18 * dVar3 + _DAT_01dbab28) * dVar3 + _DAT_01dbab38 +
                   ((DAT_01dbab10 * dVar3 + _DAT_01dbab20) * dVar3 + _DAT_01dbab30) * dVar1) * dVar3
                  - param_1 * param_2) - (dVar1 * 0.5 + (dVar2 - 1.0)));
}

