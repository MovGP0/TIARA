/* Ghidra address: 00526e50 */
/* Ghidra symbol: FUN_00526e50 */


double FUN_00526e50(double param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_00527230(param_1,0x3ff0000000000000,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00527230(param_1,0xbff0000000000000,0);
    if (cVar1 == '\0') {
      dVar2 = (double)FUN_0040c2f0((param_1 + 1.0) / (1.0 - param_1));
      dVar2 = dVar2 * 0.5;
    }
    else {
      dVar2 = -INFINITY;
    }
  }
  else {
    dVar2 = INFINITY;
  }
  return dVar2;
}

