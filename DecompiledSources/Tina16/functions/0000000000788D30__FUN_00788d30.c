/* Ghidra address: 00788d30 */
/* Ghidra symbol: FUN_00788d30 */


void FUN_00788d30(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(char *)(param_1 + 0x28) = param_2;
  }
  *(char *)(param_1 + 0x29) = param_2;
  return;
}

