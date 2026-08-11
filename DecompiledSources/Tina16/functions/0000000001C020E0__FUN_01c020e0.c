/* Ghidra address: 01c020e0 */
/* Ghidra symbol: FUN_01c020e0 */


void FUN_01c020e0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4c3) != param_2) {
    *(char *)(param_1 + 0x4c3) = param_2;
    FUN_01c02010();
  }
  return;
}

