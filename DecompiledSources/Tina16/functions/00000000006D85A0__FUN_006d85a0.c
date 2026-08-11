/* Ghidra address: 006d85a0 */
/* Ghidra symbol: FUN_006d85a0 */


void FUN_006d85a0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x28) != param_2) {
    *(char *)(param_1 + 0x28) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

