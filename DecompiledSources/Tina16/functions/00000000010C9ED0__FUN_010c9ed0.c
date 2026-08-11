/* Ghidra address: 010c9ed0 */
/* Ghidra symbol: FUN_010c9ed0 */


undefined4 FUN_010c9ed0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < *(int *)(param_1 + 8));
}

