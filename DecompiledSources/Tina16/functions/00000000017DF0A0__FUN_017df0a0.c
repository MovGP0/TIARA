/* Ghidra address: 017df0a0 */
/* Ghidra symbol: FUN_017df0a0 */


void FUN_017df0a0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6c8) = 1;
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    (**(code **)(param_1 + 0x6d0))(*(undefined8 *)(param_1 + 0x6d8));
  }
  return;
}

