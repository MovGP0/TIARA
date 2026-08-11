/* Ghidra address: 012295f0 */
/* Ghidra symbol: FUN_012295f0 */


double FUN_012295f0(double param_1)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 0;
  for (param_1 = param_1 * 1000000.0; 100.0 < param_1; param_1 = param_1 / 10.0) {
    iVar2 = iVar2 + 1;
  }
  lVar1 = FUN_0040c770();
  dVar3 = (double)lVar1;
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    dVar3 = dVar3 * 10.0;
  }
  return dVar3 / 1000000.0;
}

