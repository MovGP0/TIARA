/* Ghidra address: 00f06000 */
/* Ghidra symbol: FUN_00f06000 */


longlong FUN_00f06000(double param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  
  if (param_1 == 0.0) {
    lVar3 = 0;
  }
  else {
    FUN_0040c850(param_1);
    dVar5 = (double)FUN_00c43d10();
    if (0.0 <= dVar5) {
      FUN_0040c850(param_1);
      FUN_00c43d10();
      iVar2 = FUN_00f05450();
      uVar4 = (longlong)iVar2 / 3 & 0xffffffff;
    }
    else {
      FUN_0040c850(param_1);
      FUN_00c43d10();
      uVar1 = FUN_00f05450();
      iVar2 = FUN_00f05360(uVar1,3);
      if (iVar2 == 0) {
        FUN_0040c850(param_1);
        FUN_00c43d10();
        iVar2 = FUN_00f05450();
        uVar4 = (longlong)iVar2 / 3 & 0xffffffff;
      }
      else {
        FUN_0040c850(param_1);
        FUN_00c43d10();
        iVar2 = FUN_00f05450();
        uVar4 = (ulonglong)(iVar2 / 3 - 1);
      }
    }
    lVar3 = uVar4 * 3;
  }
  return lVar3;
}

