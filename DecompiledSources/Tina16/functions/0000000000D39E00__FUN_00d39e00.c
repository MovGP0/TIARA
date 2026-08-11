/* Ghidra address: 00d39e00 */
/* Ghidra symbol: FUN_00d39e00 */


void FUN_00d39e00(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  if (*(longlong *)(*(longlong *)(param_2 + 0x78) + 8) == 0) {
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 8),
                       *(undefined8 *)(param_2 + 0x40));
  }
  else {
    thunk_FUN_0402759f(*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x3c));
  }
  return;
}

