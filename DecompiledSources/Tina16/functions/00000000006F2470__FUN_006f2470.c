/* Ghidra address: 006f2470 */
/* Ghidra symbol: FUN_006f2470 */


undefined8 FUN_006f2470(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x770) + 0x10);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x10));
}

