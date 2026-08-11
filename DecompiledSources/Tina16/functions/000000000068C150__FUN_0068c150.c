/* Ghidra address: 0068c150 */
/* Ghidra symbol: FUN_0068c150 */


void FUN_0068c150(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b4) != param_2) {
    *(char *)(param_1 + 0x4b4) = param_2;
    FUN_00655b90();
  }
  return;
}

