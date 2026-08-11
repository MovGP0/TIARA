/* Ghidra address: 01d5f2a0 */
/* Ghidra symbol: FUN_01d5f2a0 */


double FUN_01d5f2a0(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar3 = param_2 / (param_1 * 4.0);
    FUN_0040c760(dVar3);
    dVar1 = (double)FUN_00c43f80();
    dVar2 = (double)FUN_0040c760((param_1 * param_2) / 3.141592653589793);
    dVar3 = (double)FUN_00c42a20(-dVar3);
    dVar1 = (param_1 + param_2 * 0.5) * dVar1 - dVar2 * dVar3;
  }
  return dVar1;
}

