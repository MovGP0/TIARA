/* Ghidra address: 01c7e260 */
/* Ghidra symbol: FUN_01c7e260 */


void FUN_01c7e260(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_01c7d9d0(param_1);
  if (*(int *)(param_1 + 0x17f8) < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x10) + -1) {
    *(int *)(param_1 + 0x17f8) = *(int *)(param_1 + 0x17f8) + 1;
    FUN_01c7e2a0(param_1);
  }
  return;
}

