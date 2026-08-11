/* Ghidra address: 006804a0 */
/* Ghidra symbol: FUN_006804a0 */


void FUN_006804a0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x49d) != param_2) {
    *(char *)(param_1 + 0x49d) = param_2;
    FUN_00681940();
  }
  return;
}

