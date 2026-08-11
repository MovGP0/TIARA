/* Ghidra address: 00b95360 */
/* Ghidra symbol: FUN_00b95360 */


void FUN_00b95360(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar1) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) == 0) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        if (iVar1 < *(int *)(param_1 + 0x10)) {
          FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)(iVar1 + 1) * 8,
                       *(longlong *)(param_1 + 8) + (longlong)iVar1 * 8,
                       (longlong)((*(int *)(param_1 + 0x10) - iVar1) * 8));
        }
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

