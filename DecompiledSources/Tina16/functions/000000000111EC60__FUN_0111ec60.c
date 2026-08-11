/* Ghidra address: 0111ec60 */
/* Ghidra symbol: FUN_0111ec60 */


undefined4 FUN_0111ec60(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x128) + 1;
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_1 + 0x150) == iVar1);
}

