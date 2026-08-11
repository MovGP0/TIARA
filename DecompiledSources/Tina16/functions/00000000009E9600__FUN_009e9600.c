/* Ghidra address: 009e9600 */
/* Ghidra symbol: FUN_009e9600 */


void FUN_009e9600(longlong param_1,short param_2)

{
  if ((*(short *)(param_1 + 0x18) != param_2) || ((*(byte *)(param_1 + 8) & 2) == 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
    *(short *)(param_1 + 0x18) = param_2;
  }
  return;
}

