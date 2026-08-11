/* Ghidra address: 0137a440 */
/* Ghidra symbol: FUN_0137a440 */


void FUN_0137a440(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e19f90(param_2,param_3);
  FUN_00e1a020(param_1 + 0xa0,param_1 + 0xa8);
  *(double *)(param_1 + 0xb0) = (*(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xa0)) / 2.0;
  *(double *)(param_1 + 0xb8) = *(double *)(param_1 + 0xa8) - *(double *)(param_1 + 0xa0);
  return;
}

