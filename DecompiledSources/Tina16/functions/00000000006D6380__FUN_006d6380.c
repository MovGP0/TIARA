/* Ghidra address: 006d6380 */
/* Ghidra symbol: FUN_006d6380 */


longlong FUN_006d6380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x4c8);
  }
  return lVar1;
}

