/* Ghidra address: 01754b50 */
/* Ghidra symbol: FUN_01754b50 */


void FUN_01754b50(longlong param_1,double param_2,double param_3)

{
  *(double *)(param_1 + 0x70) =
       *(double *)(param_1 + 0x70) +
       (param_2 * (*(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x80) + param_3 * param_3)) /
       2.0;
  *(double *)(param_1 + 0x78) = *(double *)(param_1 + 0x78) + param_2;
  *(double *)(param_1 + 0x80) = param_3;
  return;
}

