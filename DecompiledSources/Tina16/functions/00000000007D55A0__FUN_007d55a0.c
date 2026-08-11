/* Ghidra address: 007d55a0 */
/* Ghidra symbol: FUN_007d55a0 */


void FUN_007d55a0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0xaa)) {
    *(char *)(param_1 + 0xaa) = param_2;
  }
  return;
}

