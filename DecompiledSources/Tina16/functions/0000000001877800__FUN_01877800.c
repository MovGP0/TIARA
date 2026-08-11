/* Ghidra address: 01877800 */
/* Ghidra symbol: FUN_01877800 */


longlong FUN_01877800(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8;
}

