/* Ghidra address: 00608c30 */
/* Ghidra symbol: FUN_00608c30 */


void FUN_00608c30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    thunk_FUN_041a2fd8(*(undefined8 *)(param_2 + 0xf0));
  }
  if (*(longlong *)(param_2 + 0xe8) != 0) {
    thunk_FUN_041a9b5c(0,*(undefined8 *)(param_2 + 0xe8));
  }
  return;
}

