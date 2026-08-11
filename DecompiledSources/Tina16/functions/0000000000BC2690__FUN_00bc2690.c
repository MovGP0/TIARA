/* Ghidra address: 00bc2690 */
/* Ghidra symbol: FUN_00bc2690 */


void FUN_00bc2690(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x8c) != param_2) {
    *(char *)(param_1 + 0x8c) = param_2;
    FUN_00bc1c40(param_1,0);
  }
  return;
}

