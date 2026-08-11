/* Ghidra address: 010bf070 */
/* Ghidra symbol: FUN_010bf070 */


undefined8 FUN_010bf070(longlong param_1,double param_2)

{
  *(double *)(param_1 + 0x10) = param_2 + *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10);
  return *(undefined8 *)(param_1 + 0x10);
}

