/* Ghidra address: 01102dc0 */
/* Ghidra symbol: FUN_01102dc0 */


void FUN_01102dc0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(double *)(param_1 + 0x140) - *(double *)(param_1 + 0x148) != 0.0) {
    iVar1 = FUN_010bfa10(-*(double *)(param_1 + 0x158) *
                         ((double)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) /
                         (*(double *)(param_1 + 0x140) - *(double *)(param_1 + 0x148))));
    iVar3 = *(int *)(param_1 + 0x48);
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        *(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar2 * 8) =
             (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar2 * 8) -
             *(int *)(param_1 + 0x110)) + iVar1;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x110) = iVar1;
  }
  return;
}

