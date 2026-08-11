/* Ghidra address: 00727a90 */
/* Ghidra symbol: FUN_00727a90 */


void FUN_00727a90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x100),param_1);
  }
  return;
}

