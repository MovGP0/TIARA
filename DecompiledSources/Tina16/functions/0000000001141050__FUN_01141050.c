/* Ghidra address: 01141050 */
/* Ghidra symbol: FUN_01141050 */


void FUN_01141050(longlong param_1)

{
  double dVar1;
  
  if (((*(double *)(param_1 + 0x789) != 0.0) &&
      (dVar1 = DAT_020301d8 - 1.0 / *(double *)(param_1 + 0x789),
      dVar1 < *(double *)(param_1 + 0x781))) && (DAT_020301d0 <= dVar1)) {
    *(double *)(param_1 + 0x781) = dVar1;
    FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),*(undefined8 *)(param_1 + 0x781));
  }
  return;
}

