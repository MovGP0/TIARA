/* Ghidra address: 009e9620 */
/* Ghidra symbol: FUN_009e9620 */


void FUN_009e9620(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x1c) != param_2) || ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x10;
    *(char *)(param_1 + 0x1c) = param_2;
  }
  return;
}

