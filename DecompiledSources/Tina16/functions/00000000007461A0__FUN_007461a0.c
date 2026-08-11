/* Ghidra address: 007461a0 */
/* Ghidra symbol: FUN_007461a0 */


void FUN_007461a0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x18)) {
    *(char *)(param_1 + 0x18) = param_2;
    FUN_004b1830(param_1,0);
  }
  return;
}

