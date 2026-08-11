/* Ghidra address: 0197bfe0 */
/* Ghidra symbol: FUN_0197bfe0 */


void FUN_0197bfe0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

