/* Ghidra address: 007e6870 */
/* Ghidra symbol: FUN_007e6870 */


void FUN_007e6870(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x90)) {
    *(char *)(param_1 + 0x90) = param_2;
    FUN_007e5850();
  }
  return;
}

