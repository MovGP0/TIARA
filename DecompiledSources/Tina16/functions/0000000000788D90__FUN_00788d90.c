/* Ghidra address: 00788d90 */
/* Ghidra symbol: FUN_00788d90 */


void FUN_00788d90(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x42)) {
    *(char *)(param_1 + 0x42) = param_2;
    FUN_00788d30(param_1,(*(byte *)(param_1 + 0x42) & 2) != 0);
    *(bool *)(param_1 + 0x2a) = (*(byte *)(param_1 + 0x42) & 4) != 0;
    *(bool *)(param_1 + 0x2b) = (*(byte *)(param_1 + 0x42) & 1) != 0;
  }
  return;
}

