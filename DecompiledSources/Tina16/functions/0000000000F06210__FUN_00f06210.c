/* Ghidra address: 00f06210 */
/* Ghidra symbol: FUN_00f06210 */


double FUN_00f06210(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  if (param_1 <= 0.0) {
    dVar1 = (double)FUN_00c43d20((double)param_2);
    dVar2 = (double)FUN_0040af10(param_1 / dVar1);
    dVar1 = (double)FUN_00c43d20((double)param_2);
    dVar2 = dVar2 * dVar1;
  }
  else {
    dVar1 = (double)FUN_00c43d20((double)param_2);
    dVar2 = (double)FUN_0040af10(param_1 / dVar1 + 0.999999999999);
    dVar1 = (double)FUN_00c43d20((double)param_2);
    dVar2 = dVar2 * dVar1;
  }
  return dVar2;
}

