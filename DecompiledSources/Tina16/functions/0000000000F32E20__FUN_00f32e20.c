/* Ghidra address: 00f32e20 */
/* Ghidra symbol: FUN_00f32e20 */


undefined8 FUN_00f32e20(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(param_1 + 8) < *(int *)(lVar1 + 0x10));
}

