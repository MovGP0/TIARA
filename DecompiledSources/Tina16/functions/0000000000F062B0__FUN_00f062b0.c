/* Ghidra address: 00f062b0 */
/* Ghidra symbol: FUN_00f062b0 */


double FUN_00f062b0(double param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 <= 0.0) {
    dVar1 = (double)FUN_00c43d20(param_2);
    dVar2 = (double)FUN_00f05380(param_1 / dVar1);
    dVar1 = (double)FUN_00c43d20(param_2);
    dVar2 = dVar2 * dVar1;
  }
  else {
    dVar1 = (double)FUN_00c43d20(param_2);
    dVar2 = (double)FUN_00f05380(param_1 / dVar1);
    dVar1 = (double)FUN_00c43d20(param_2);
    dVar2 = dVar2 * dVar1;
  }
  return dVar2;
}

