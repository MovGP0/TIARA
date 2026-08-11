/* Ghidra address: 01cc9680 */
/* Ghidra symbol: FUN_01cc9680 */


void FUN_01cc9680(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = *(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x48);
  dVar3 = *(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x40);
  dVar4 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x48);
  dVar5 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x40);
  if ((dVar4 == 0.0) && (dVar5 == 0.0)) {
    FUN_0040c760(dVar2 * dVar2 + dVar3 * dVar3);
  }
  else {
    dVar1 = (double)FUN_0040c760(dVar4 * dVar4 + dVar5 * dVar5);
    FUN_0040c850((dVar3 * dVar4 - dVar2 * dVar5) / dVar1);
  }
  return;
}

