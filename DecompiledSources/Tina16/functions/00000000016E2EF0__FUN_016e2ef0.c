/* Ghidra address: 016e2ef0 */
/* Ghidra symbol: FUN_016e2ef0 */


void FUN_016e2ef0(longlong param_1,double *param_2,double *param_3)

{
  *param_2 = *param_3 * *(double *)(param_1 + 0x28);
  param_2[1] = *param_3 * *(double *)(param_1 + 0x30);
  return;
}

