/* Ghidra address: 01bfe240 */
/* Ghidra symbol: FUN_01bfe240 */


void FUN_01bfe240(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xa4) != param_2) {
    *(int *)(param_1 + 0xa4) = param_2;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}

