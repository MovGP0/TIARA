/* Ghidra address: 016e56b0 */
/* Ghidra symbol: FUN_016e56b0 */


double FUN_016e56b0(longlong param_1,longlong param_2)

{
  return *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x10) +
         *(double *)(param_1 + 0x98) * *(double *)(param_2 + 0x18) +
         *(double *)(param_1 + 0xa0) * *(double *)(param_2 + 0x18);
}

