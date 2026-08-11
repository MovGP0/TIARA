/* Ghidra address: 015f6560 */
/* Ghidra symbol: FUN_015f6560 */


double FUN_015f6560(longlong param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)param_1;
  iVar1 = 0xf;
  do {
    dVar2 = dVar2 / 10.0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return dVar2;
}

