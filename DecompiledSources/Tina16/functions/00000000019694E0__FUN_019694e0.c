/* Ghidra address: 019694e0 */
/* Ghidra symbol: FUN_019694e0 */


void FUN_019694e0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x250) < param_2) {
    param_2 = 1;
  }
  *(int *)(param_1 + 0x254) = param_2;
  if (param_2 == 1) {
    *(undefined8 *)(param_1 + 0x290) = 0;
  }
  *(double *)(param_1 + 0x98) =
       (double)(*(int *)(param_1 + 0x254) + -1) *
       (*(double *)(param_1 + 0x248) + *(double *)(param_1 + 0x240));
  return;
}

