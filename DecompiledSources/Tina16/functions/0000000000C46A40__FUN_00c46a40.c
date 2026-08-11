/* Ghidra address: 00c46a40 */
/* Ghidra symbol: FUN_00c46a40 */


longlong FUN_00c46a40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6da0(param_1);
  return *(longlong *)(param_1 + 8) + lVar1;
}

