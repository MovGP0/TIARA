/* Ghidra address: 011410d0 */
/* Ghidra symbol: FUN_011410d0 */


void FUN_011410d0(longlong param_1)

{
  double dVar1;
  
  if ((DAT_020301d8 - *(double *)(param_1 + 0x781) != 0.0) &&
     (dVar1 = 1.0 / (DAT_020301d8 - *(double *)(param_1 + 0x781)),
     *(double *)(param_1 + 0x789) <= dVar1 && dVar1 != *(double *)(param_1 + 0x789))) {
    *(double *)(param_1 + 0x789) = dVar1;
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x789));
  }
  return;
}

