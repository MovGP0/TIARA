/* Ghidra address: 009e94c0 */
/* Ghidra symbol: FUN_009e94c0 */


undefined2 FUN_009e94c0(longlong param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_009e95a0(param_1,0x2c);
  }
  return *(undefined2 *)(param_1 + 10);
}

