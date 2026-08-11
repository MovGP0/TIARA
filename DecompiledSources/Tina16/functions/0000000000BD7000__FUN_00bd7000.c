/* Ghidra address: 00bd7000 */
/* Ghidra symbol: FUN_00bd7000 */


void FUN_00bd7000(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x1e)) {
    *(short *)(param_1 + 0x1e) = param_2;
  }
  return;
}

