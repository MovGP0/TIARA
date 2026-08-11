/* Ghidra address: 00bad740 */
/* Ghidra symbol: FUN_00bad740 */


void FUN_00bad740(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}

