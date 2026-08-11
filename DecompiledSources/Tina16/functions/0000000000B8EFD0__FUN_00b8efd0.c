/* Ghidra address: 00b8efd0 */
/* Ghidra symbol: FUN_00b8efd0 */


double FUN_00b8efd0(uint param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = 1.0;
  iVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  if (0 < iVar1) {
    do {
      dVar2 = dVar2 * 1000.0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((int)param_1 < 0) {
    dVar2 = 1.0 / dVar2;
  }
  return dVar2;
}

