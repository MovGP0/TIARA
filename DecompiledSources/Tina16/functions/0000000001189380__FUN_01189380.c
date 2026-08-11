/* Ghidra address: 01189380 */
/* Ghidra symbol: FUN_01189380 */


double FUN_01189380(double param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double local_9b8 [100];
  double local_698 [101];
  double local_370 [104];
  
  local_370[0] = 1.0;
  local_698[0] = (double)FUN_0040c760(1.0 - param_1 * param_1);
  FUN_0040c760(param_1 * param_1);
  iVar1 = 1;
  pdVar3 = local_370;
  pdVar4 = local_698;
  pdVar5 = local_9b8;
  do {
    pdVar4 = pdVar4 + 1;
    pdVar3 = pdVar3 + 1;
    iVar2 = iVar1 + -1;
    *pdVar3 = (local_370[iVar2] + local_698[iVar2]) / 2.0;
    dVar6 = (double)FUN_0040c760(local_370[iVar2] * local_698[iVar1 + -1]);
    *pdVar4 = dVar6;
    *pdVar5 = (local_370[iVar2] - local_698[iVar2]) / 2.0;
    if (*pdVar5 <= 1e-15 && *pdVar5 != 1e-15) break;
    iVar1 = iVar1 + 1;
    pdVar5 = pdVar5 + 1;
  } while (iVar1 != 100);
  return 3.1415926535898 / (local_370[iVar1] * 2.0);
}

