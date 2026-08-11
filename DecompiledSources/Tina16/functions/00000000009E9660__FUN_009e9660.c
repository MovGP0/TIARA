/* Ghidra address: 009e9660 */
/* Ghidra symbol: FUN_009e9660 */


undefined2 FUN_009e9660(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 4) == 0) {
    FUN_009e9690(param_1,0x3d);
  }
  return *(undefined2 *)(param_1 + 0x1a);
}

