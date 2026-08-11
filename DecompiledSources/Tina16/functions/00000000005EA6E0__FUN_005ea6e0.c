/* Ghidra address: 005ea6e0 */
/* Ghidra symbol: FUN_005ea6e0 */


longlong FUN_005ea6e0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (param_2 == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  return lVar1;
}

