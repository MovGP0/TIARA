/* Ghidra address: 009f0410 */
/* Ghidra symbol: FUN_009f0410 */


void FUN_009f0410(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) == 0xcae0) {
    *(longlong *)(param_1 + 0x28) = param_1;
    *(code **)(param_1 + 0x20) = FUN_009ef750;
  }
  else if (*(int *)(param_1 + 0x18) == 0xcaed) {
    *(longlong *)(param_1 + 0x28) = param_1;
    *(code **)(param_1 + 0x20) = FUN_009efc70;
  }
  return;
}

