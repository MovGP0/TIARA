/* Ghidra address: 0040c200 */
/* Ghidra symbol: FUN_0040c200 */


double FUN_0040c200(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_1 / (param_1 + DAT_01dbabe0);
  dVar3 = param_1 * param_1 * DAT_01dbabe8;
  dVar2 = dVar3 * param_1 * DAT_01dbabe8;
  dVar4 = dVar1 * dVar1;
  dVar5 = dVar4 * dVar4;
  return (((((((DAT_01dbab88 * dVar5 + DAT_01dbab98) * dVar5 + DAT_01dbaba8) * dVar5 + DAT_01dbabb8)
             * dVar5 + DAT_01dbabd0 +
             ((((DAT_01dbab80 * dVar5 + DAT_01dbab90) * dVar5 + DAT_01dbaba0) * dVar5 + DAT_01dbabb0
              ) * dVar5 + DAT_01dbabc0 + DAT_01dbabc8) * dVar4 + DAT_01dbabd8) * DAT_01dbabe0 *
            dVar4 * dVar1 + dVar2) - dVar3) - dVar1 * dVar2) + param_1;
}

