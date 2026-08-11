/* Ghidra address: 00bc8260 */
/* Ghidra symbol: FUN_00bc8260 */


longlong FUN_00bc8260(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if ((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
    lVar1 = (*(longlong *)(param_1 + 0x150) - *(longlong *)(param_1 + 0x170)) / 2;
  }
  return lVar1;
}

