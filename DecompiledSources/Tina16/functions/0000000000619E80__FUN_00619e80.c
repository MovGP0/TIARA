/* Ghidra address: 00619e80 */
/* Ghidra symbol: FUN_00619e80 */


longlong FUN_00619e80(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x10;
}

