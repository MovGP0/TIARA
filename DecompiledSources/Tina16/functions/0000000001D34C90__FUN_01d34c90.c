/* Ghidra address: 01d34c90 */
/* Ghidra symbol: FUN_01d34c90 */


void FUN_01d34c90(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar1) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) == 0) {
        FUN_01d34800(param_1,iVar1);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

