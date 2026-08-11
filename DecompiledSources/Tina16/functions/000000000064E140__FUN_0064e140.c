/* Ghidra address: 0064e140 */
/* Ghidra symbol: FUN_0064e140 */


void FUN_0064e140(longlong param_1,short param_2)

{
  if (*(short *)(param_1 + 0xe0) != param_2) {
    *(short *)(param_1 + 0xe0) = param_2;
    FUN_0064fca0(param_1,0xb00f,0,0);
  }
  return;
}

