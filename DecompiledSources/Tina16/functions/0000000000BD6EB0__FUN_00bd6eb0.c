/* Ghidra address: 00bd6eb0 */
/* Ghidra symbol: FUN_00bd6eb0 */


void FUN_00bd6eb0(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x20)) {
    *(short *)(param_1 + 0x20) = param_2;
  }
  return;
}

