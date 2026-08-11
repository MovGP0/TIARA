/* Ghidra address: 00b66b60 */
/* Ghidra symbol: FUN_00b66b60 */


double FUN_00b66b60(undefined8 param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00448c80(0x76c,3,1);
  dVar2 = (double)FUN_00448c80(0x76c,1,1);
  if (dVar1 <= param_2) {
    dVar1 = (param_2 - dVar2) + 2.0;
  }
  else {
    dVar1 = (param_2 - dVar2) + 1.0;
  }
  return dVar1;
}

