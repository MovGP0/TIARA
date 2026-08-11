/* Ghidra address: 018a8d30 */
/* Ghidra symbol: FUN_018a8d30 */


void FUN_018a8d30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x558) = param_2;
  if (*(double *)(param_1 + 0x558) <= 0.25 && *(double *)(param_1 + 0x558) != 0.25) {
    *(undefined8 *)(param_1 + 0x558) = 0x3fd0000000000000;
  }
  *(undefined1 *)(param_1 + 0x560) = 0;
  FUN_018aba70();
  return;
}

