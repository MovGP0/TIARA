/* Ghidra address: 0064b4a0 */
/* Ghidra symbol: FUN_0064b4a0 */


void FUN_0064b4a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

