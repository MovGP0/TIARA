/* Ghidra address: 00dd7320 */
/* Ghidra symbol: FUN_00dd7320 */


undefined4 FUN_00dd7320(longlong param_1)

{
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  return *(undefined4 *)(param_1 + 0x80);
}

