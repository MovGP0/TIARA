/* Ghidra address: 006da290 */
/* Ghidra symbol: FUN_006da290 */


void FUN_006da290(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x38)) {
    *(char *)(param_1 + 0x38) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

