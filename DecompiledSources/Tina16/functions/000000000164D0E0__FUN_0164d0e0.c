/* Ghidra address: 0164d0e0 */
/* Ghidra symbol: FUN_0164d0e0 */


double FUN_0164d0e0(longlong param_1)

{
  double dVar1;
  
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x50);
  dVar1 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x50));
  *(double *)(param_1 + 0x68) =
       (*(double *)(param_1 + 0x70) - 1.0) * (dVar1 + *(double *)(param_1 + 0x40));
  dVar1 = (double)FUN_0040c850(*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x38));
  return *(double *)(param_1 + 0x68) / (dVar1 + *(double *)(param_1 + 0x38));
}

