/* Ghidra address: 007fbb80 */
/* Ghidra symbol: FUN_007fbb80 */


void FUN_007fbb80(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4b8)) {
    *(char *)(param_1 + 0x4b8) = param_2;
    FUN_00655b90();
  }
  return;
}

