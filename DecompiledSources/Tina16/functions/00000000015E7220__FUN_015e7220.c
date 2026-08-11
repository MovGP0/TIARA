/* Ghidra address: 015e7220 */
/* Ghidra symbol: FUN_015e7220 */


void FUN_015e7220(longlong param_1)

{
  if (*(int *)(param_1 + 0x75c) == 1) {
    *(undefined4 *)(param_1 + 0x75c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x75c) = 1;
  }
  FUN_015e6f30();
  return;
}

