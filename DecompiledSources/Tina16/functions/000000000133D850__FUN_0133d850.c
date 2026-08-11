/* Ghidra address: 0133d850 */
/* Ghidra symbol: FUN_0133d850 */


void FUN_0133d850(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  double *pdVar3;
  double *pdVar4;
  double local_1a8 [50];
  
  pdVar3 = local_1a8;
  pdVar4 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = (double)*param_2;
    param_2 = param_2 + 1;
    pdVar4 = pdVar4 + 1;
  }
  iVar1 = 1;
  pdVar4 = (double *)PTR_DAT_02004880;
  do {
    if (*pdVar3 != *pdVar4) {
      *(double *)(param_1 + 0x698 + (longlong)iVar1 * 8) = *pdVar3;
    }
    iVar1 = iVar1 + 1;
    pdVar4 = pdVar4 + 1;
    pdVar3 = pdVar3 + 1;
  } while (iVar1 != 0x33);
  return;
}

