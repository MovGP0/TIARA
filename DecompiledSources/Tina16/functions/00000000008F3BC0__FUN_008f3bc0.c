/* Ghidra address: 008f3bc0 */
/* Ghidra symbol: FUN_008f3bc0 */


longlong FUN_008f3bc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  return (lVar1 + *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x18);
}

