/* Ghidra address: 00bd6ed0 */
/* Ghidra symbol: FUN_00bd6ed0 */


void FUN_00bd6ed0(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x1a)) {
    *(short *)(param_1 + 0x1a) = param_2;
  }
  return;
}

