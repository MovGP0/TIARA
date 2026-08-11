/* Ghidra address: 009e9690 */
/* Ghidra symbol: FUN_009e9690 */


void FUN_009e9690(longlong param_1,short param_2)

{
  if ((*(short *)(param_1 + 0x1a) != param_2) || ((*(byte *)(param_1 + 8) & 4) == 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 4;
    *(short *)(param_1 + 0x1a) = param_2;
  }
  return;
}

