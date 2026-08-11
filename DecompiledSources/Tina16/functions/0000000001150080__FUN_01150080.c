/* Ghidra address: 01150080 */
/* Ghidra symbol: FUN_01150080 */


void FUN_01150080(longlong param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_78 [104];
  
  dVar4 = 0.0;
  dVar5 = 10.0;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0xa0) + 0xb79);
  do {
    dVar6 = (dVar4 + dVar5) / 2.0;
    dVar2 = (double)FUN_0114ff50(auStack_78,dVar6);
    dVar3 = dVar6;
    if (0.0 <= ((double)fVar1 / 100.0 - dVar2 * 2.0) + 1.0) {
      dVar4 = dVar6;
      dVar3 = dVar5;
    }
    dVar5 = dVar3;
    dVar3 = (double)FUN_0040c850();
  } while (1e-06 <= dVar3);
  *(double *)(param_1 + 0x38) = dVar6;
  return;
}

