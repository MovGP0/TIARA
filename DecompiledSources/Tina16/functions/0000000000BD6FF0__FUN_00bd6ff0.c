/* Ghidra address: 00bd6ff0 */
/* Ghidra symbol: FUN_00bd6ff0 */


void FUN_00bd6ff0(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x1c)) {
    *(short *)(param_1 + 0x1c) = param_2;
  }
  return;
}

