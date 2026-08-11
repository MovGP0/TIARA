/* Ghidra address: 0108b840 */
/* Ghidra symbol: FUN_0108b840 */


void FUN_0108b840(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0xbd2) = param_2;
  *(bool *)(param_1 + 0x6c4) = param_2 == '\0';
  return;
}

