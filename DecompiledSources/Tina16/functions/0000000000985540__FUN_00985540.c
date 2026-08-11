/* Ghidra address: 00985540 */
/* Ghidra symbol: FUN_00985540 */


undefined8 FUN_00985540(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x80);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 == *(longlong *)(param_1 + 0xa8));
}

