/* Ghidra address: 007fa850 */
/* Ghidra symbol: FUN_007fa850 */


void FUN_007fa850(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_007fb150(*(undefined8 *)(param_1 + 8));
  return;
}

