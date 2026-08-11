/* Ghidra address: 006dd5d0 */
/* Ghidra symbol: FUN_006dd5d0 */


longlong FUN_006dd5d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_006dd580();
  lVar2 = lVar3;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar3 = FUN_006dd3e0(lVar1);
    lVar2 = lVar1;
  }
  return lVar2;
}

