/* Ghidra address: 00a3dd30 */
/* Ghidra symbol: FUN_00a3dd30 */


void FUN_00a3dd30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    thunk_FUN_0418f5de(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),0);
  }
  thunk_FUN_041a2fd8(*(undefined8 *)(param_2 + 0x60));
  return;
}

