/* Ghidra address: 006604c0 */
/* Ghidra symbol: FUN_006604c0 */


longlong FUN_006604c0(longlong param_1)

{
  char cVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    cVar1 = FUN_00660620(param_1);
    if (cVar1 != '\0') break;
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  return param_1;
}

