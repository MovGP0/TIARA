/* Ghidra address: 00604ec0 */
/* Ghidra symbol: FUN_00604ec0 */


void FUN_00604ec0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
  }
  return;
}

