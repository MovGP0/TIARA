/* Ghidra address: 01600b40 */
/* Ghidra symbol: FUN_01600b40 */


longlong FUN_01600b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1a8), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x70) == '\x03')) {
    lVar2 = lVar1;
  }
  return lVar2;
}

