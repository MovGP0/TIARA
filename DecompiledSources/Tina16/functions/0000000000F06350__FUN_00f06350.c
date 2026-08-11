/* Ghidra address: 00f06350 */
/* Ghidra symbol: FUN_00f06350 */


double FUN_00f06350(double param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00c43d20(param_2);
  dVar1 = (double)FUN_00f05380(param_1 / dVar1);
  dVar2 = (double)FUN_00c43d20(param_2);
  return (dVar1 + 1.0) * dVar2;
}

