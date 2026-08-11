/* Ghidra address: 006d8560 */
/* Ghidra symbol: FUN_006d8560 */


void FUN_006d8560(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x24) != param_2) {
    *(char *)(param_1 + 0x24) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

