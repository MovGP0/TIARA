/* Ghidra address: 00bad760 */
/* Ghidra symbol: FUN_00bad760 */


void FUN_00bad760(longlong param_1)

{
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  if (*(int *)(param_1 + 0x48) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0x7fffffff;
  }
  return;
}

