/* Ghidra address: 008005b0 */
/* Ghidra symbol: FUN_008005b0 */


void FUN_008005b0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x524)) {
    *(char *)(param_1 + 0x524) = param_2;
  }
  return;
}

