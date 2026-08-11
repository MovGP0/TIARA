/* Ghidra address: 005263f0 */
/* Ghidra symbol: FUN_005263f0 */


int FUN_005263f0(undefined8 param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_0040c840(param_1);
  dVar2 = (double)FUN_0040af40(param_1);
  if (dVar2 < 0.0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

