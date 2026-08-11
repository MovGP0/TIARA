/* Ghidra address: 01c02180 */
/* Ghidra symbol: FUN_01c02180 */


void FUN_01c02180(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4f8) != param_2) {
    *(char *)(param_1 + 0x4f8) = param_2;
    FUN_0064e770();
  }
  return;
}

