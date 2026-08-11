/* Ghidra address: 00cf9c90 */
/* Ghidra symbol: FUN_00cf9c90 */


void FUN_00cf9c90(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x20) != param_2) {
    FUN_00cf9950(param_1);
    *(char *)(param_1 + 0x20) = param_2;
  }
  return;
}

