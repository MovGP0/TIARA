/* Ghidra address: 010bf8e0 */
/* Ghidra symbol: FUN_010bf8e0 */


ulonglong FUN_010bf8e0(double param_1)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  
  if (param_1 <= 0.0) {
    dVar3 = (double)FUN_0040af40(param_1);
    if (dVar3 == 0.0) {
      uVar2 = FUN_0040c840(param_1);
    }
    else {
      iVar1 = FUN_0040c840(param_1);
      uVar2 = (ulonglong)(iVar1 - 1);
    }
  }
  else {
    uVar2 = FUN_0040c840(param_1);
  }
  return uVar2;
}

