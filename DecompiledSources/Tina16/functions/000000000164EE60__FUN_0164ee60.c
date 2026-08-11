/* Ghidra address: 0164ee60 */
/* Ghidra symbol: FUN_0164ee60 */


double FUN_0164ee60(longlong param_1)

{
  double dVar1;
  
  *(double *)(param_1 + 0xf8) = *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x100);
  dVar1 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x100));
  *(double *)(param_1 + 0xe0) =
       (*(double *)(param_1 + 0xf0) - 1.0) * (dVar1 + *(double *)(param_1 + 0xe8));
  dVar1 = (double)FUN_0040c850(*(double *)(param_1 + 0x108) - *(double *)(param_1 + 0xd8));
  return *(double *)(param_1 + 0xe0) / (dVar1 + *(double *)(param_1 + 0xd8));
}

