/* Ghidra address: 00628230 */
/* Ghidra symbol: FUN_00628230 */


void FUN_00628230(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

