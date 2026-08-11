/* Ghidra address: 00bd44f0 */
/* Ghidra symbol: FUN_00bd44f0 */


void FUN_00bd44f0(longlong param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  if (*(int *)(param_1 + 0x54) < 1) {
    if (*(longlong *)(param_1 + 8) != 0) {
      thunk_FUN_0402759f(*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

