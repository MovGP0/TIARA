/* Ghidra address: 00a4eac0 */
/* Ghidra symbol: FUN_00a4eac0 */


void FUN_00a4eac0(longlong param_1,double param_2)

{
  double dVar1;
  
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = param_2 - 1.0;
    }
  }
  else {
    param_2 = param_2 + 1.0;
  }
  if (1.0 <= param_2 * 6.0) {
    if (1.0 <= param_2 * 2.0) {
      if (2.0 <= param_2 * 3.0) {
        dVar1 = *(double *)(param_1 + 0x28);
      }
      else {
        dVar1 = *(double *)(param_1 + 0x28) +
                (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x28)) *
                (0.6666666666666666 - param_2) * 6.0;
      }
    }
    else {
      dVar1 = *(double *)(param_1 + 0x20);
    }
  }
  else {
    dVar1 = *(double *)(param_1 + 0x28) +
            (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x28)) * param_2 * 6.0;
  }
  FUN_0040c770(dVar1 * 255.0);
  return;
}

