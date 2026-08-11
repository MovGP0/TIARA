/* Ghidra address: 010ae9a0 */
/* Ghidra symbol: FUN_010ae9a0 */


void FUN_010ae9a0(longlong param_1,char param_2,uint param_3)

{
  if (param_2 == '\0') {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_3;
  }
  else {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_3;
  }
  return;
}

