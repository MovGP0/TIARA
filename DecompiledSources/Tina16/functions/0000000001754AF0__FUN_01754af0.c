/* Ghidra address: 01754af0 */
/* Ghidra symbol: FUN_01754af0 */


void FUN_01754af0(longlong param_1,double param_2,double param_3)

{
  *(double *)(param_1 + 0x58) =
       *(double *)(param_1 + 0x58) + (param_2 * (*(double *)(param_1 + 0x68) + param_3)) / 2.0;
  *(double *)(param_1 + 0x60) = *(double *)(param_1 + 0x60) + param_2;
  *(double *)(param_1 + 0x68) = param_3;
  return;
}

