/* Ghidra address: 00f06110 */
/* Ghidra symbol: FUN_00f06110 */


int FUN_00f06110(double param_1)

{
  int iVar1;
  double dVar2;
  
  if (param_1 == 0.0) {
    iVar1 = 0;
  }
  else {
    FUN_0040c850(param_1);
    FUN_00c43d10();
    iVar1 = FUN_00f05450();
    FUN_0040c850(param_1);
    FUN_00c43d10();
    dVar2 = (double)FUN_00f06180();
    if (0.0 < dVar2) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

