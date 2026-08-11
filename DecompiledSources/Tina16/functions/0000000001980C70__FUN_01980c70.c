/* Ghidra address: 01980c70 */
/* Ghidra symbol: FUN_01980c70 */


undefined4 FUN_01980c70(longlong param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return *(undefined4 *)(param_1 + 8);
}

