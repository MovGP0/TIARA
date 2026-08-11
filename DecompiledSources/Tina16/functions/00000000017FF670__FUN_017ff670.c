/* Ghidra address: 017ff670 */
/* Ghidra symbol: FUN_017ff670 */


longlong FUN_017ff670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 0x68);
  }
  return lVar2;
}

