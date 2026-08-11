/* Ghidra address: 00bd3f70 */
/* Ghidra symbol: FUN_00bd3f70 */


longlong FUN_00bd3f70(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x18) + 0x70 + (longlong)param_2 * 0x18;
}

