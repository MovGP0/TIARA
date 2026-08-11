/* Ghidra address: 00c39270 */
/* Ghidra symbol: FUN_00c39270 */


void FUN_00c39270(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x324)) {
    *(char *)(param_1 + 0x324) = param_2;
    FUN_0064e770();
  }
  return;
}

