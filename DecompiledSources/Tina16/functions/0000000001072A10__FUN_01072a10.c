/* Ghidra address: 01072a10 */
/* Ghidra symbol: FUN_01072a10 */


void FUN_01072a10(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6f0) = param_2;
  if ((*(int *)(param_1 + 0x6f0) == 5) || (*(int *)(param_1 + 0x6f0) == 6)) {
    *(undefined4 *)(param_1 + 0x6ec) = 2;
  }
  return;
}

