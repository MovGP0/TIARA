/* Ghidra address: 00808da0 */
/* Ghidra symbol: FUN_00808da0 */


void FUN_00808da0(longlong param_1)

{
  *(short *)(param_1 + 0x128) = *(short *)(param_1 + 0x128) + -1;
  if ((*(short *)(param_1 + 0x128) == 0) && ((*(uint *)(param_1 + 0x12a) & 0x10) != 0)) {
    FUN_00808de0();
  }
  return;
}

