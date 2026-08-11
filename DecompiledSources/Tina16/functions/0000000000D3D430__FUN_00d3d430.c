/* Ghidra address: 00d3d430 */
/* Ghidra symbol: FUN_00d3d430 */


void FUN_00d3d430(longlong param_1)

{
  if (*(int *)(param_1 + 0x78) != 0) {
    thunk_FUN_040dee27(*(undefined8 *)(param_1 + 8),10);
  }
  *(undefined4 *)(param_1 + 0x78) = 2;
  thunk_FUN_04176ccd(*(undefined8 *)(param_1 + 8),10,100,0);
  return;
}

