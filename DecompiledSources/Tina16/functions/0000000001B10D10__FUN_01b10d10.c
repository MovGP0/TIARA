/* Ghidra address: 01b10d10 */
/* Ghidra symbol: FUN_01b10d10 */


double FUN_01b10d10(longlong param_1)

{
  return *(double *)(param_1 + 0x58) -
         *(double *)
          (*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + (longlong)*(int *)(param_1 + 0x2c) * 8
          );
}

