/* Ghidra address: 00d3d4b0 */
/* Ghidra symbol: FUN_00d3d4b0 */


void FUN_00d3d4b0(longlong param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    thunk_FUN_040dee27(*(undefined8 *)(param_1 + 8),10);
  }
  return;
}

