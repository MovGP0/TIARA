/* Ghidra address: 004b1b40 */
/* Ghidra symbol: FUN_004b1b40 */


undefined8 FUN_004b1b40(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(param_1 + 8) < *(int *)(lVar1 + 0x10));
}

