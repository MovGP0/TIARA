/* Ghidra address: 00bd3b50 */
/* Ghidra symbol: FUN_00bd3b50 */


void FUN_00bd3b50(undefined8 param_1,longlong param_2)

{
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_00bd3bf0();
  }
  return;
}

