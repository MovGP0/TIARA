/* Ghidra address: 007035c0 */
/* Ghidra symbol: FUN_007035c0 */


void FUN_007035c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    FUN_00655b90();
  }
  return;
}

