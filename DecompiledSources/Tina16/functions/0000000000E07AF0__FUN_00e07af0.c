/* Ghidra address: 00e07af0 */
/* Ghidra symbol: FUN_00e07af0 */


void FUN_00e07af0(longlong param_1,undefined2 param_2)

{
  if (*(int *)(param_1 + 0x40) == 0x800) {
    FUN_00e078a0(L"input buffer overflow");
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  *(undefined2 *)(param_1 + 0x42 + (longlong)*(int *)(param_1 + 0x40) * 2) = param_2;
  return;
}

