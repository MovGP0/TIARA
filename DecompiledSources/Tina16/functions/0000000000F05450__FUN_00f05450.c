/* Ghidra address: 00f05450 */
/* Ghidra symbol: FUN_00f05450 */


ulonglong FUN_00f05450(double param_1)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  
  if (param_1 <= 0.0) {
    FUN_00f06180(param_1);
    dVar3 = (double)FUN_0040c850();
    if (dVar3 <= 0.025) {
      uVar2 = FUN_0040c840(param_1 - 1e-10);
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

