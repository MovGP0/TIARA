/* Ghidra address: 006ed940 */
/* Ghidra symbol: FUN_006ed940 */


void FUN_006ed940(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) != param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

