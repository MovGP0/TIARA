/* Ghidra address: 006da220 */
/* Ghidra symbol: FUN_006da220 */


void FUN_006da220(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x36)) {
    *(char *)(param_1 + 0x36) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

