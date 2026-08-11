/* Ghidra address: 00c392b0 */
/* Ghidra symbol: FUN_00c392b0 */


void FUN_00c392b0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x326)) {
    *(char *)(param_1 + 0x326) = param_2;
    FUN_0064e770();
  }
  return;
}

