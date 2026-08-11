/* Ghidra address: 01899fd0 */
/* Ghidra symbol: FUN_01899fd0 */


void FUN_01899fd0(longlong param_1,char param_2)

{
  *(char *)(param_1 + 800) = param_2;
  if (param_2 == '\x03') {
    FUN_0064cbf0(param_1,*(int *)(param_1 + 0x98) + 0x10);
  }
  return;
}

