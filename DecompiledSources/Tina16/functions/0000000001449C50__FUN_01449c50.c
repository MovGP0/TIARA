/* Ghidra address: 01449c50 */
/* Ghidra symbol: FUN_01449c50 */


void FUN_01449c50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    *(int *)(param_3 + 1) = (int)param_1[1];
    for (; iVar2 <= (int)param_2[1]; iVar2 = iVar2 + 1) {
      lVar1 = *param_3;
      lVar3 = (longlong)iVar2;
      *(double *)(lVar1 + lVar3 * 0x10) =
           *(double *)(*param_1 + lVar3 * 0x10) - *(double *)(*param_2 + lVar3 * 0x10);
      *(double *)(lVar1 + 8 + lVar3 * 0x10) =
           *(double *)(*param_1 + 8 + lVar3 * 0x10) - *(double *)(*param_2 + 8 + lVar3 * 0x10);
    }
    for (; iVar2 <= (int)param_1[1]; iVar2 = iVar2 + 1) {
      lVar1 = *param_3;
      lVar3 = (longlong)iVar2;
      *(undefined8 *)(lVar1 + lVar3 * 0x10) = *(undefined8 *)(*param_1 + lVar3 * 0x10);
      *(undefined8 *)(lVar1 + 8 + lVar3 * 0x10) = *(undefined8 *)(*param_1 + 8 + lVar3 * 0x10);
    }
  }
  else {
    *(int *)(param_3 + 1) = (int)param_2[1];
    for (; iVar2 <= (int)param_1[1]; iVar2 = iVar2 + 1) {
      lVar1 = *param_3;
      lVar3 = (longlong)iVar2;
      *(double *)(lVar1 + lVar3 * 0x10) =
           *(double *)(*param_1 + lVar3 * 0x10) + *(double *)(*param_2 + lVar3 * 0x10);
      *(double *)(lVar1 + 8 + lVar3 * 0x10) =
           *(double *)(*param_1 + 8 + lVar3 * 0x10) + *(double *)(*param_2 + 8 + lVar3 * 0x10);
    }
    for (; iVar2 <= (int)param_2[1]; iVar2 = iVar2 + 1) {
      lVar1 = *param_3;
      lVar3 = (longlong)iVar2;
      *(ulonglong *)(lVar1 + lVar3 * 0x10) =
           *(ulonglong *)(*param_2 + lVar3 * 0x10) ^ 0x8000000000000000;
      *(ulonglong *)(lVar1 + 8 + lVar3 * 0x10) =
           *(ulonglong *)(*param_2 + 8 + lVar3 * 0x10) ^ 0x8000000000000000;
    }
  }
  return;
}

