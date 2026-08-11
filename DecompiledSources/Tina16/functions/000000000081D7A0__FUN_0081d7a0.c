/* Ghidra address: 0081d7a0 */
/* Ghidra symbol: FUN_0081d7a0 */


void FUN_0081d7a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x4d1) != '\0') {
    FUN_0064cbf0(lVar1,*(int *)(lVar1 + 0x98) + -1);
    FUN_0064cbf0(*(longlong *)(param_1 + 0x10),*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + 1);
  }
  return;
}

