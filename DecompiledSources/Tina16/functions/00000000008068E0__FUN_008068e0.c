/* Ghidra address: 008068e0 */
/* Ghidra symbol: FUN_008068e0 */


void FUN_008068e0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x67c) != param_2) {
    *(int *)(param_1 + 0x67c) = param_2;
    FUN_00806770();
  }
  return;
}

