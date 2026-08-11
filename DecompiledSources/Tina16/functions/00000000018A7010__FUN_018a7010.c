/* Ghidra address: 018a7010 */
/* Ghidra symbol: FUN_018a7010 */


void FUN_018a7010(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x589) != param_2) {
    *(char *)(param_1 + 0x589) = param_2;
    FUN_018ad880();
  }
  return;
}

