/* Ghidra address: 00d3d470 */
/* Ghidra symbol: FUN_00d3d470 */


void FUN_00d3d470(longlong param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    thunk_FUN_040dee27(*(undefined8 *)(param_1 + 8),10);
  }
  *(undefined4 *)(param_1 + 0x78) = 3;
  thunk_FUN_04176ccd(*(undefined8 *)(param_1 + 8),10,100,0);
  return;
}

