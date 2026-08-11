/* Ghidra address: 009e95a0 */
/* Ghidra symbol: FUN_009e95a0 */


void FUN_009e95a0(longlong param_1,short param_2)

{
  if ((*(short *)(param_1 + 10) != param_2) || ((*(byte *)(param_1 + 8) & 1) == 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    *(short *)(param_1 + 10) = param_2;
  }
  return;
}

