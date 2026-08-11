/* Ghidra address: 00c541e0 */
/* Ghidra symbol: FUN_00c541e0 */


void FUN_00c541e0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6c0) = 1;
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    (**(code **)(param_1 + 0x6c8))(*(undefined8 *)(param_1 + 0x6d0));
  }
  return;
}

