/* Ghidra address: 005262b0 */
/* Ghidra symbol: FUN_005262b0 */


int FUN_005262b0(float param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_0040c840((double)param_1);
  dVar2 = (double)FUN_0040af40((double)param_1);
  if (0.0 < dVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

