/* Ghidra address: 0188c4f0 */
/* Ghidra symbol: FUN_0188c4f0 */


void FUN_0188c4f0(longlong param_1)

{
  FUN_005ffb10(*(undefined8 *)(param_1 + 0x18),0);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    thunk_FUN_041a2fd8(*(longlong *)(param_1 + 0xd0));
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    thunk_FUN_040c3345(*(longlong *)(param_1 + 0x50));
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    thunk_FUN_04172795(*(longlong *)(param_1 + 200));
    thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 200));
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

