/* Ghidra address: 0082b0a0 */
/* Ghidra symbol: FUN_0082b0a0 */


void FUN_0082b0a0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x534)) {
    *(char *)(param_1 + 0x534) = param_2;
    FUN_0064e770();
  }
  return;
}

