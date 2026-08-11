/* Ghidra address: 01ab6ac0 */
/* Ghidra symbol: FUN_01ab6ac0 */


void FUN_01ab6ac0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (7 < *(int *)(param_1 + 0x110)) {
    iVar2 = 1;
    iVar1 = *(int *)(param_1 + 0x110) + -3;
    while ((iVar2 <= *(int *)(param_1 + 0x48) && (0 < iVar1))) {
      if ((*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar2 * 8) == -10000) &&
         (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar2 * 8) == -10000)) {
        iVar1 = iVar1 + -1;
      }
      iVar2 = iVar2 + 1;
    }
    FUN_00409a70(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar2 * 8,
                 *(longlong *)(param_1 + 0x50),
                 (longlong)(((*(int *)(param_1 + 0x48) - iVar2) + 1) * 8));
    *(int *)(param_1 + 0x48) = (*(int *)(param_1 + 0x48) - iVar2) + 1;
    *(undefined4 *)(param_1 + 0x110) = 3;
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}

