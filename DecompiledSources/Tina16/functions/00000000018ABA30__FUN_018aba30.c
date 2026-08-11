/* Ghidra address: 018aba30 */
/* Ghidra symbol: FUN_018aba30 */


void FUN_018aba30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x550);
  *(undefined1 *)(lVar1 + 0x4f2) = 1;
  FUN_018a9020(param_1,*(int *)(lVar1 + 0x50c) + 1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x550) + 0x4f2) = 0;
  return;
}

