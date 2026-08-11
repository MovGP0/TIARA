/* Ghidra address: 00f03530 */
/* Ghidra symbol: FUN_00f03530 */


void FUN_00f03530(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4c)) {
    *(char *)(param_1 + 0x4c) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

