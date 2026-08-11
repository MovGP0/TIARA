/* Ghidra address: 0041f930 */
/* Ghidra symbol: FUN_0041f930 */


longlong FUN_0041f930(void)

{
  longlong lVar1;
  longlong unaff_GS_OFFSET;
  
  if (DAT_0200c278 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)DAT_01dbdcb4 * 8);
  }
  else {
    lVar1 = FUN_0041f840(DAT_01dbdcb4);
    if (lVar1 == 0) {
      FUN_0041f8e0();
      lVar1 = FUN_0041f840(DAT_01dbdcb4);
      if (lVar1 == 0) {
        lVar1 = DAT_0200c2b0;
      }
    }
  }
  return lVar1;
}

