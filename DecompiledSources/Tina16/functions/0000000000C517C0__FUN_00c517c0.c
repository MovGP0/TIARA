/* Ghidra address: 00c517c0 */
/* Ghidra symbol: FUN_00c517c0 */


void FUN_00c517c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x100));
  }
  return;
}

