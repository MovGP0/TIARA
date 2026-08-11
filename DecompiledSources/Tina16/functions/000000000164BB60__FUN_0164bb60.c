/* Ghidra address: 0164bb60 */
/* Ghidra symbol: FUN_0164bb60 */


double FUN_0164bb60(longlong param_1)

{
  return *(double *)(param_1 + 0x98) -
         *(double *)(*(longlong *)(param_1 + 0x88) + (longlong)(*(int *)(param_1 + 0x3c) * 3) * 8);
}

