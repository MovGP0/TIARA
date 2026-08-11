/* Ghidra address: 009e9570 */
/* Ghidra symbol: FUN_009e9570 */


undefined1 FUN_009e9570(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    FUN_009e9620(param_1,0);
  }
  return *(undefined1 *)(param_1 + 0x1c);
}

