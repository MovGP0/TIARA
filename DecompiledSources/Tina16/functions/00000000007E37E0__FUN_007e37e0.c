/* Ghidra address: 007e37e0 */
/* Ghidra symbol: FUN_007e37e0 */


longlong FUN_007e37e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xe0) != 0)) {
    lVar1 = *(longlong *)(lVar1 + 0xe0);
  }
  return lVar1;
}

