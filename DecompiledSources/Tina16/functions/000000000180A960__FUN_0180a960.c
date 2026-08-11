/* Ghidra address: 0180a960 */
/* Ghidra symbol: FUN_0180a960 */


void FUN_0180a960(longlong param_1,int param_2)

{
  if (0 < param_2 % 0x18) {
    param_2 = param_2 - param_2 % 0x18;
  }
  if (*(int *)(param_1 + 0x5c) != param_2) {
    *(int *)(param_1 + 0x5c) = param_2;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

