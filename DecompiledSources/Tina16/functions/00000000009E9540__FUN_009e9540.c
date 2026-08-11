/* Ghidra address: 009e9540 */
/* Ghidra symbol: FUN_009e9540 */


undefined2 FUN_009e9540(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_009e9600(param_1,0x22);
  }
  return *(undefined2 *)(param_1 + 0x18);
}

