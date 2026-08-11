/* Ghidra address: 01c2dfd0 */
/* Ghidra symbol: FUN_01c2dfd0 */


void FUN_01c2dfd0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 <= *(int *)(param_1 + 0x10) + -1) {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) + 0x4e) == '\0') {
      FUN_004ae870(param_1,iVar1);
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  FUN_004aee80(param_1);
  return;
}

