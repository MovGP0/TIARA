/* Ghidra address: 006d8580 */
/* Ghidra symbol: FUN_006d8580 */


void FUN_006d8580(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x25) != param_2) {
    *(char *)(param_1 + 0x25) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

