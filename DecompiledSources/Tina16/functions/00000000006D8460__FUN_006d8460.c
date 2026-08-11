/* Ghidra address: 006d8460 */
/* Ghidra symbol: FUN_006d8460 */


void FUN_006d8460(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x27) != param_2) {
    *(char *)(param_1 + 0x27) = param_2;
    FUN_006d8480();
  }
  return;
}

