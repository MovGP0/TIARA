/* Ghidra address: 0114ff50 */
/* Ghidra symbol: FUN_0114ff50 */


double FUN_0114ff50(undefined8 param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = 1.0 / (param_2 * 0.2316419 + 1.0);
  dVar1 = (double)FUN_0040af80(-(param_2 * param_2) / 2.0);
  dVar2 = (double)FUN_0040c760(0x401921fb54442d18);
  return 1.0 - (dVar1 / dVar2) *
               ((((dVar3 * 1.330274429 + -1.821255978) * dVar3 + 1.781477937) * dVar3 + -0.356563782
                ) * dVar3 + 0.31938153) * dVar3;
}

