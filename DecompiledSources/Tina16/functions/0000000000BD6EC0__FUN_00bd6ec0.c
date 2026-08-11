/* Ghidra address: 00bd6ec0 */
/* Ghidra symbol: FUN_00bd6ec0 */


void FUN_00bd6ec0(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x18)) {
    *(short *)(param_1 + 0x18) = param_2;
  }
  return;
}

