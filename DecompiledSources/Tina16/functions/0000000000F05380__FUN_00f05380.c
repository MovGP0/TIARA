/* Ghidra address: 00f05380 */
/* Ghidra symbol: FUN_00f05380 */


double FUN_00f05380(double param_1)

{
  longlong lVar1;
  double dVar2;
  
  if (param_1 <= 0.0) {
    FUN_0040af40(param_1);
    dVar2 = (double)FUN_0040c850();
    if (dVar2 <= 1e-12) {
      lVar1 = FUN_0040c840(param_1);
      dVar2 = (double)lVar1;
    }
    else {
      lVar1 = FUN_0040c840(param_1);
      dVar2 = (double)(lVar1 + -1);
    }
  }
  else {
    lVar1 = FUN_0040c840(param_1 + 1e-12);
    dVar2 = (double)lVar1;
  }
  return dVar2;
}

