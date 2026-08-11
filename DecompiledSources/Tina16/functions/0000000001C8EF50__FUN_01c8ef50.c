/* Ghidra address: 01c8ef50 */
/* Ghidra symbol: FUN_01c8ef50 */


undefined4 FUN_01c8ef50(longlong param_1)

{
  *(int *)(param_1 + 0x27f0) = *(int *)(param_1 + 0x27f0) + 1;
  return *(undefined4 *)(param_1 + 0x27f0);
}

