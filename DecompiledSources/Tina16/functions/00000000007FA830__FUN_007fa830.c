/* Ghidra address: 007fa830 */
/* Ghidra symbol: FUN_007fa830 */


void FUN_007fa830(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x40)) {
    *(int *)(param_1 + 0x40) = param_2;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    FUN_007fb150(*(undefined8 *)(param_1 + 8));
  }
  return;
}

