/* Ghidra address: 008f46c0 */
/* Ghidra symbol: FUN_008f46c0 */


longlong FUN_008f46c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_008f3840(param_1);
  return lVar1 - (ulonglong)*(uint *)(param_1 + 0x38);
}

