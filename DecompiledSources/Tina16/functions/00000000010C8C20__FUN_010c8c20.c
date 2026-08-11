/* Ghidra address: 010c8c20 */
/* Ghidra symbol: FUN_010c8c20 */


void FUN_010c8c20(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 8);
  dVar1 = *(double *)(param_2 + 8);
  dVar2 = (double)FUN_0040af10(dVar3 / dVar1);
  dVar3 = dVar3 - dVar1 * dVar2;
  if (dVar3 < 0.0) {
    dVar3 = (double)FUN_0040c850();
    dVar3 = dVar1 - dVar3;
  }
  FUN_010c7a40(param_1,dVar3);
  return;
}

