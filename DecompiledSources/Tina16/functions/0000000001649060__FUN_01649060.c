/* Ghidra address: 01649060 */
/* Ghidra symbol: FUN_01649060 */


int FUN_01649060(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_01648b90(*(undefined8 *)(param_1 + 0x5f8),0x66);
  return *(int *)(*(longlong *)(param_1 + 0x600) + 0x10) + iVar1;
}

