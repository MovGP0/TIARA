/* Ghidra address: 011894e0 */
/* Ghidra symbol: FUN_011894e0 */


double FUN_011894e0(double param_1)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = 1.0;
  bVar1 = false;
  iVar2 = 1;
  dVar3 = 1.0;
  do {
    dVar4 = (dVar4 * (param_1 / 2.0)) / (double)iVar2;
    dVar5 = dVar3 + dVar4 * dVar4;
    if (dVar5 - dVar3 < 1e-15) {
      bVar1 = true;
      break;
    }
    iVar2 = iVar2 + 1;
    dVar3 = dVar5;
  } while (iVar2 != 100);
  if (!bVar1) {
    dVar5 = 0.0;
  }
  return dVar5;
}

