/* Ghidra address: 008f3840 */
/* Ghidra symbol: FUN_008f3840 */


longlong FUN_008f3840(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  return (lVar1 - *(longlong *)(param_1 + 0x28)) - *(longlong *)(param_1 + 0x18);
}

