/* Ghidra address: 01b110a0 */
/* Ghidra symbol: FUN_01b110a0 */


void FUN_01b110a0(longlong param_1,double param_2)

{
  int iVar1;
  
  if (1 < *(int *)(param_1 + 0x18)) {
    iVar1 = 0;
    while ((iVar1 < *(int *)(param_1 + 0x18) &&
           (*(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) <= param_2))) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 < *(int *)(param_1 + 0x18)) {
      FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8,*(longlong *)(param_1 + 0x10)
                   ,(longlong)((*(int *)(param_1 + 0x18) - iVar1) * 8));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar1;
    }
  }
  return;
}

