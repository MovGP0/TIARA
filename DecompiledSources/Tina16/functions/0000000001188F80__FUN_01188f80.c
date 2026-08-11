/* Ghidra address: 01188f80 */
/* Ghidra symbol: FUN_01188f80 */


double FUN_01188f80(double param_1,double param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 1.0;
  param_1 = 1.0 / param_1;
  iVar1 = 0;
  iVar2 = 100;
  do {
    dVar4 = dVar3 * param_2;
    dVar3 = dVar3 + param_2;
    param_2 = (double)FUN_0040c760(dVar4);
    param_2 = param_2 * 2.0;
    param_1 = param_1 - dVar4 / param_1;
    if (param_1 == 0.0) {
      param_1 = (double)FUN_0040c760(dVar4);
      param_1 = param_1 * 1e-15;
    }
    dVar4 = (double)FUN_0040c850(dVar3 - param_2);
    if (dVar4 < dVar3 * 1e-15) break;
    iVar1 = iVar1 * 2;
    if (param_1 < 0.0) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_1 < 0.0) {
    iVar1 = iVar1 + 1;
  }
  dVar4 = (double)FUN_0040c660(dVar3 / param_1);
  return (dVar4 + (double)iVar1 * 3.1415926535898) / dVar3;
}

