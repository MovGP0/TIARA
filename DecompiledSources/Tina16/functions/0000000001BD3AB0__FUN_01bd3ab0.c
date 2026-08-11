/* Ghidra address: 01bd3ab0 */
/* Ghidra symbol: FUN_01bd3ab0 */


void FUN_01bd3ab0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x360) != param_2) {
    *(char *)(param_1 + 0x360) = param_2;
  }
  return;
}

