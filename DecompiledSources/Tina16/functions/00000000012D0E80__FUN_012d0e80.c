/* Ghidra address: 012d0e80 */
/* Ghidra symbol: FUN_012d0e80 */


bool FUN_012d0e80(undefined8 param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_0040c850(param_2);
  dVar2 = (double)FUN_0040c850(param_3);
  if (dVar1 <= dVar2) {
    dVar1 = (double)FUN_0040c850(param_3);
  }
  else {
    dVar1 = (double)FUN_0040c850(param_2);
  }
  dVar2 = (double)FUN_0040c850(param_2 - param_3);
  return dVar2 <= param_4 * dVar1 + 1e-06;
}

