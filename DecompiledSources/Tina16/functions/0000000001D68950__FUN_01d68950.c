/* Ghidra address: 01d68950 */
/* Ghidra symbol: FUN_01d68950 */


longlong FUN_01d68950(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_017ff620();
  lVar2 = 0;
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar3 = FUN_017ff620(lVar1);
    lVar2 = lVar1;
  }
  return lVar2;
}

