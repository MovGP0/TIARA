/* Ghidra address: 00c56570 */
/* Ghidra symbol: FUN_00c56570 */


ulonglong FUN_00c56570(longlong param_1,int param_2)

{
  if (7 < param_2) {
    param_2 = param_2 + 4;
  }
  return (ulonglong)*(uint3 *)(param_1 + 0x498 + (longlong)param_2 * 4);
}

