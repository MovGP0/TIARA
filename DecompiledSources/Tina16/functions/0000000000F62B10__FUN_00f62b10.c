/* Ghidra address: 00f62b10 */
/* Ghidra symbol: FUN_00f62b10 */


void FUN_00f62b10(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  *(undefined4 *)(param_1 + 0xa0) = param_4;
  *(undefined4 *)(param_1 + 0xa4) = param_5;
  *(undefined4 *)(param_1 + 0xa8) = param_6;
  *(undefined4 *)(param_1 + 0xac) = param_7;
  *(double *)(param_1 + 0x78) = (double)*(int *)(param_1 + 0xa0) / (double)*(int *)(param_1 + 0xa8);
  return;
}

