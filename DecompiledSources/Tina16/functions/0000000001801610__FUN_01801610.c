/* Ghidra address: 01801610 */
/* Ghidra symbol: FUN_01801610 */


void FUN_01801610(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 < 0x20) {
    *(undefined4 *)(param_1 + 0x14) = 0x20;
  }
  return;
}

