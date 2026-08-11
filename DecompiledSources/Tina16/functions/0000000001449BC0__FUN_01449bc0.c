/* Ghidra address: 01449bc0 */
/* Ghidra symbol: FUN_01449bc0 */


void FUN_01449bc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[1];
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      lVar1 = *param_2;
      iVar4 = iVar2 + 1;
      *(double *)(lVar1 + (longlong)iVar2 * 0x10) =
           (double)iVar4 * *(double *)(*param_1 + (longlong)iVar4 * 0x10);
      *(double *)(lVar1 + 8 + (longlong)iVar2 * 0x10) =
           (double)(iVar2 + 1) * *(double *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)(param_2 + 1) = (int)param_1[1] + -1;
  return;
}

