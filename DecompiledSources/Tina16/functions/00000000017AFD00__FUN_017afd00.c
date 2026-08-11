/* Ghidra address: 017afd00 */
/* Ghidra symbol: FUN_017afd00 */


void FUN_017afd00(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x21)) {
    *(char *)(param_1 + 0x21) = param_2;
  }
  return;
}

