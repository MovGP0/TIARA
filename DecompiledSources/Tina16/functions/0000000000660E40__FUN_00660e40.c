/* Ghidra address: 00660e40 */
/* Ghidra symbol: FUN_00660e40 */


longlong FUN_00660e40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_00660620(lVar2);
    if (cVar1 != '\0') break;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  }
  return lVar2;
}

