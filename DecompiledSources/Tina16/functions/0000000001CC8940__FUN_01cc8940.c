/* Ghidra address: 01cc8940 */
/* Ghidra symbol: FUN_01cc8940 */


double FUN_01cc8940(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 0x59) * 57.29577951308232;
  dVar1 = (double)FUN_0040c850(dVar2 - *(double *)(param_2 + 0x61) * 57.29577951308232);
  if (dVar1 < 1.0) {
    dVar2 = dVar2 - 1.0;
  }
  return dVar2;
}

