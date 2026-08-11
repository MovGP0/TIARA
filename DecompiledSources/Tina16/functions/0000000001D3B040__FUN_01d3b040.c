/* Ghidra address: 01d3b040 */
/* Ghidra symbol: FUN_01d3b040 */


bool FUN_01d3b040(longlong param_1,longlong param_2)

{
  return *(double *)(param_2 + 8) <= *(double *)(param_1 + 200) &&
         *(double *)(param_1 + 200) != *(double *)(param_2 + 8);
}

