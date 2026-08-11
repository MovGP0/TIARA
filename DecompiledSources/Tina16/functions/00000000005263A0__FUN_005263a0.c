/* Ghidra address: 005263a0 */
/* Ghidra symbol: FUN_005263a0 */


int FUN_005263a0(float param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_0040c840((double)param_1);
  dVar2 = (double)FUN_0040af40((double)param_1);
  if (dVar2 < 0.0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

