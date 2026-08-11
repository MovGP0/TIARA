/* Ghidra address: 0195f620 */
/* Ghidra symbol: FUN_0195f620 */


ulonglong FUN_0195f620(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x318) = param_2 % 0x168;
  return (longlong)param_2 / 0x168 & 0xffffffff;
}

