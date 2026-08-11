/* Ghidra address: 0144a420 */
/* Ghidra symbol: FUN_0144a420 */


double FUN_0144a420(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = 1.0;
  iVar1 = 2;
  if (1 < param_1) {
    param_1 = param_1 + -1;
    do {
      dVar2 = dVar2 * (double)iVar1;
      iVar1 = iVar1 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return dVar2;
}

