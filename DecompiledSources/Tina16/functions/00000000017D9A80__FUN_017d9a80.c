/* Ghidra address: 017d9a80 */
/* Ghidra symbol: FUN_017d9a80 */


longlong FUN_017d9a80(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x18);
  return *plVar1 + (longlong)*(short *)(plVar1[1] + (longlong)param_3 * 2) * 0x18;
}

