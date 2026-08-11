/* Ghidra address: 010c7c90 */
/* Ghidra symbol: FUN_010c7c90 */


void FUN_010c7c90(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040bcd0(*(undefined8 *)(param_1 + 0x28));
  *(double *)(param_1 + 8) = *(double *)(param_1 + 0x20) * dVar1;
  dVar1 = (double)FUN_0040bdd0(*(undefined8 *)(param_1 + 0x28));
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x20) * dVar1;
  dVar1 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
  if (dVar1 < 1e-30) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  dVar1 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x10));
  if (dVar1 < 1e-30) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

