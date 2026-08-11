/* Ghidra address: 00744460 */
/* Ghidra symbol: FUN_00744460 */


void FUN_00744460(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x4b8) != param_2) {
    *(char *)(param_1 + 0x4b8) = param_2;
    FUN_00654450();
  }
  return;
}

