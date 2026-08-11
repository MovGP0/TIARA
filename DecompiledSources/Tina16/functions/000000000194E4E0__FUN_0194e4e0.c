/* Ghidra address: 0194e4e0 */
/* Ghidra symbol: FUN_0194e4e0 */


void FUN_0194e4e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined1 *)(param_1 + 0x1b2) = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    (**(code **)(param_1 + 0x1e0))(*(undefined8 *)(param_1 + 0x1e8),param_1);
  }
  return;
}

