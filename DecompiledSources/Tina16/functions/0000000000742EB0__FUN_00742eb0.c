/* Ghidra address: 00742eb0 */
/* Ghidra symbol: FUN_00742eb0 */


void FUN_00742eb0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x98)) {
    *(char *)(param_1 + 0x98) = param_2;
    FUN_00742de0();
  }
  return;
}

