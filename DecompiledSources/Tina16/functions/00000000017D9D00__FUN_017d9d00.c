/* Ghidra address: 017d9d00 */
/* Ghidra symbol: FUN_017d9d00 */


void FUN_017d9d00(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x90)) {
    *(char *)(param_1 + 0x90) = param_2;
  }
  return;
}

