/* Ghidra address: 01bf8d20 */
/* Ghidra symbol: FUN_01bf8d20 */


undefined8 FUN_01bf8d20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x10));
}

