/* Ghidra address: 019507f0 */
/* Ghidra symbol: FUN_019507f0 */


longlong FUN_019507f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  for (lVar2 = *(longlong *)(param_1 + 0xf0); (lVar2 != 0 && (lVar2 != 0));
      lVar2 = *(longlong *)(lVar2 + 0xf0)) {
    lVar1 = lVar2;
  }
  return lVar1;
}

