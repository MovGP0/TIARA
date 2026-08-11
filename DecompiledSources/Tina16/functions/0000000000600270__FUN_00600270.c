/* Ghidra address: 00600270 */
/* Ghidra symbol: FUN_00600270 */


ulonglong FUN_00600270(int param_1,int param_2,int param_3)

{
  return (longlong)(int)(param_1 * param_2 + (param_3 - 1U) & ~(param_3 - 1U)) / 8 & 0xffffffff;
}

