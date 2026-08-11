/* Ghidra address: 004d1400 */
/* Ghidra symbol: FUN_004d1400 */


void FUN_004d1400(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1c)) {
    *(char *)(param_1 + 0x1c) = param_2;
  }
  return;
}

