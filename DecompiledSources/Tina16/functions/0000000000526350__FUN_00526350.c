/* Ghidra address: 00526350 */
/* Ghidra symbol: FUN_00526350 */


int FUN_00526350(undefined8 param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = FUN_0040c840(param_1);
  dVar2 = (double)FUN_0040af40(param_1);
  if (0.0 < dVar2) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

