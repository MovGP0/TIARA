/* Ghidra address: 006d65a0 */
/* Ghidra symbol: FUN_006d65a0 */


void FUN_006d65a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    (**(code **)(param_1 + 0x4a8))(*(undefined8 *)(param_1 + 0x4b0),param_1);
  }
  return;
}

