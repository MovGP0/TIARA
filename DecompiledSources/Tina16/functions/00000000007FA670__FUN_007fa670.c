/* Ghidra address: 007fa670 */
/* Ghidra symbol: FUN_007fa670 */


void FUN_007fa670(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    FUN_007fb150(*(undefined8 *)(param_1 + 8));
  }
  return;
}

