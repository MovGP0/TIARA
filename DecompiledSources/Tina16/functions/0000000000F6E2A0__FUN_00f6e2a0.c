/* Ghidra address: 00f6e2a0 */
/* Ghidra symbol: FUN_00f6e2a0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f6e2a0(longlong param_1,char param_2)

{
  if (param_2 == '\x03') {
    _DAT_0202eed0 = 1;
  }
  *(char *)(param_1 + 0x93) = param_2;
  return;
}

