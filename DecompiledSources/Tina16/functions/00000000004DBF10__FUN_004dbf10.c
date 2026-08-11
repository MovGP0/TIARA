/* Ghidra address: 004dbf10 */
/* Ghidra symbol: FUN_004dbf10 */


longlong FUN_004dbf10(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0x10;
}

