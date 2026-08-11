/* Ghidra address: 006da070 */
/* Ghidra symbol: FUN_006da070 */


void FUN_006da070(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x2c) != param_2) {
    *(char *)(param_1 + 0x2c) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

