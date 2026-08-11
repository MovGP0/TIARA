/* Ghidra address: 007269b0 */
/* Ghidra symbol: FUN_007269b0 */


void FUN_007269b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 0xf8),param_1);
  }
  return;
}

