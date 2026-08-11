/* Ghidra address: 01d0f3e0 */
/* Ghidra symbol: FUN_01d0f3e0 */


longlong FUN_01d0f3e0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x10) <= param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8) + (longlong)param_2 * 8;
  }
  return lVar1;
}

