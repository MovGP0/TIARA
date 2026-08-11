/* Ghidra address: 016d4e50 */
/* Ghidra symbol: FUN_016d4e50 */


void FUN_016d4e50(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x578) = 0;
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    (**(code **)(param_1 + 0x4c8))(*(undefined8 *)(param_1 + 0x4d0),param_1);
  }
  return;
}

