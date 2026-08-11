/* Ghidra address: 007e88e0 */
/* Ghidra symbol: FUN_007e88e0 */


void FUN_007e88e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0xf0));
  }
  return;
}

