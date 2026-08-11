/* Ghidra address: 00689d60 */
/* Ghidra symbol: FUN_00689d60 */


void FUN_00689d60(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x498) != param_2) {
    *(char *)(param_1 + 0x498) = param_2;
    FUN_00655b90();
  }
  return;
}

