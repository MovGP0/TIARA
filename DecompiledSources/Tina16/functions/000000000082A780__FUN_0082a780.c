/* Ghidra address: 0082a780 */
/* Ghidra symbol: FUN_0082a780 */


void FUN_0082a780(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x318) != param_2) {
    *(int *)(param_1 + 0x318) = param_2;
    FUN_0082a670();
  }
  return;
}

