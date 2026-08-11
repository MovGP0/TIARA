/* Ghidra address: 004aee80 */
/* Ghidra symbol: FUN_004aee80 */


void FUN_004aee80(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      while ((iVar3 < *(int *)(param_1 + 0x10) &&
             (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8) == 0))) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar3;
      if (iVar3 < *(int *)(param_1 + 0x10)) {
        while ((iVar1 < *(int *)(param_1 + 0x10) &&
               (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) != 0))) {
          iVar1 = iVar1 + 1;
        }
        if (iVar2 < iVar3) {
          FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8,
                       *(longlong *)(param_1 + 8) + (longlong)iVar2 * 8,
                       (longlong)((((iVar1 + -1) - iVar3) + 1) * 8));
        }
        iVar2 = iVar2 + ((iVar1 + -1) - iVar3) + 1;
        iVar3 = iVar1;
      }
    } while (iVar3 < *(int *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = iVar2;
  }
  return;
}

