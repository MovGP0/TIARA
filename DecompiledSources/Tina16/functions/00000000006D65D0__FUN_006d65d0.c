/* Ghidra address: 006d65d0 */
/* Ghidra symbol: FUN_006d65d0 */


void FUN_006d65d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    (**(code **)(param_1 + 0x4b8))(*(undefined8 *)(param_1 + 0x4c0),param_1);
  }
  return;
}

