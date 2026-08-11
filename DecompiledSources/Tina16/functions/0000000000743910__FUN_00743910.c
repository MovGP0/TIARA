/* Ghidra address: 00743910 */
/* Ghidra symbol: FUN_00743910 */


void FUN_00743910(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4a4) != param_2) {
    *(char *)(param_1 + 0x4a4) = param_2;
    FUN_00655b90();
  }
  return;
}

