/* Ghidra address: 00661280 */
/* Ghidra symbol: FUN_00661280 */


void FUN_00661280(longlong param_1,longlong param_2)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_2);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_00661280(param_1,*(longlong *)(param_2 + 0x18));
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_00661280(param_1,*(longlong *)(param_2 + 0x10));
  }
  return;
}

