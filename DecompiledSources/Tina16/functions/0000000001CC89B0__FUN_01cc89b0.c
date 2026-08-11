/* Ghidra address: 01cc89b0 */
/* Ghidra symbol: FUN_01cc89b0 */


double FUN_01cc89b0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 0x61) * 57.29577951308232;
  dVar1 = (double)FUN_0040c850(dVar2 - *(double *)(param_2 + 0x59) * 57.29577951308232);
  if (dVar1 < 1.0) {
    dVar2 = dVar2 + 1.0;
  }
  return dVar2;
}

