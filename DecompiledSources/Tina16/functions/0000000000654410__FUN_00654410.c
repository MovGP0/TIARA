/* Ghidra address: 00654410 */
/* Ghidra symbol: FUN_00654410 */


void FUN_00654410(longlong param_1)

{
  *(short *)(param_1 + 0x318) = *(short *)(param_1 + 0x318) + -1;
  if ((*(short *)(param_1 + 0x318) == 0) && ((*(uint *)(param_1 + 0xa4) & 0x10) != 0)) {
    FUN_00654450();
  }
  return;
}

