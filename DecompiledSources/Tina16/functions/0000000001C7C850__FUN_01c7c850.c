/* Ghidra address: 01c7c850 */
/* Ghidra symbol: FUN_01c7c850 */


void FUN_01c7c850(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xa48) + 0x4ac);
  if (*(int *)(param_1 + 0x17e4) != iVar1) {
    FUN_01c7bfa0(param_1,iVar1);
  }
  return;
}

