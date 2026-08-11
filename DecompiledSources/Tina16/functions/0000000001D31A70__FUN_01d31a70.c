/* Ghidra address: 01d31a70 */
/* Ghidra symbol: FUN_01d31a70 */


void FUN_01d31a70(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  if ((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20);
  }
  return;
}

