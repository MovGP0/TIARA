/* Ghidra address: 017b51d0 */
/* Ghidra symbol: FUN_017b51d0 */


void FUN_017b51d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) && (0 < *(int *)(param_1 + 0x60))) {
    FUN_00498350(&local_38,0x7fffffff,0x7fffffff,0x80000001,0x80000001);
    iVar3 = *(int *)(param_1 + 0x60);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_017b51a0(&local_38,*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 8);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + local_38;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + local_34;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x18) + (local_30 - local_38);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x1c) + (local_2c - local_34);
    iVar2 = 0;
    iVar3 = *(int *)(param_1 + 0x60);
    if (-1 < iVar3 + -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 8);
        *piVar1 = *piVar1 - local_38;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 4 + (longlong)iVar2 * 8);
        *piVar1 = *piVar1 - local_34;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

