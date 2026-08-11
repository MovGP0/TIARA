/* Ghidra address: 007894a0 */
/* Ghidra symbol: FUN_007894a0 */


void FUN_007894a0(undefined8 param_1,longlong param_2)

{
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x48),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  if (*(longlong *)(*(longlong *)(param_2 + 0x78) + 8) == 0) {
    thunk_FUN_041a9b5c(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 8),
                       *(undefined8 *)(param_2 + 0x40));
  }
  else if (*(int *)(param_2 + 0x3c) != 0) {
    thunk_FUN_0402759f(*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x3c));
  }
  return;
}

