/* Ghidra address: 006ed960 */
/* Ghidra symbol: FUN_006ed960 */


void FUN_006ed960(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

