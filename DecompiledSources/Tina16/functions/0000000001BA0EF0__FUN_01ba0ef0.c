/* Ghidra address: 01ba0ef0 */
/* Ghidra symbol: FUN_01ba0ef0 */


ulonglong FUN_01ba0ef0(int param_1,int param_2)

{
  if (param_1 % 2 != 0) {
    param_2 = param_2 + 1;
  }
  return (longlong)param_2 % 2 & 0xffffffff;
}

