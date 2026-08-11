/* Ghidra address: 016dc0c0 */
/* Ghidra symbol: FUN_016dc0c0 */


double FUN_016dc0c0(longlong param_1)

{
  return *(double *)(param_1 + 0x60) -
         *(double *)
          (*(longlong *)(param_1 + 0x50) + -0x10 + (longlong)*(int *)(param_1 + 0x2c) * 0x10);
}

