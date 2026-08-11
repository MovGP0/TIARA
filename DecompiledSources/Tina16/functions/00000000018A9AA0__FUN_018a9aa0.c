/* Ghidra address: 018a9aa0 */
/* Ghidra symbol: FUN_018a9aa0 */


void FUN_018a9aa0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4ba) != param_2) {
    *(char *)(param_1 + 0x4ba) = param_2;
    FUN_00655b90();
  }
  return;
}

