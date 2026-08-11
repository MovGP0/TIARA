/* Ghidra address: 00609730 */
/* Ghidra symbol: FUN_00609730 */


void FUN_00609730(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    thunk_FUN_041a19a1(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xb8));
  }
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    thunk_FUN_041a2fd8(*(undefined8 *)(param_2 + 0xb0));
  }
  return;
}

