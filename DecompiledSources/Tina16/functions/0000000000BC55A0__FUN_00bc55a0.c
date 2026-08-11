/* Ghidra address: 00bc55a0 */
/* Ghidra symbol: FUN_00bc55a0 */


longlong FUN_00bc55a0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((((param_2 < 0) || (0xe < param_2)) || (*(longlong *)(param_1 + 400) == 0)) ||
     ((*(longlong *)(param_1 + 8 + (longlong)param_2 * 8) == 0 ||
      (*(longlong *)(param_1 + 0x80 + (longlong)param_2 * 8) == 0)))) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = (*(longlong *)(param_1 + 0x80 + (longlong)param_2 * 8) -
            *(longlong *)(param_1 + 8 + (longlong)param_2 * 8)) / 2;
  }
  return lVar1;
}

