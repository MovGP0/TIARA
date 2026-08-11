/* Ghidra address: 00c73940 */
/* Ghidra symbol: FUN_00c73940 */


void FUN_00c73940(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x53c)) {
    *(char *)(param_1 + 0x53c) = param_2;
    FUN_0064e770();
  }
  return;
}

