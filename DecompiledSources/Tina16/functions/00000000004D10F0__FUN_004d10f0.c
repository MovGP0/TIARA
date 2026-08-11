/* Ghidra address: 004d10f0 */
/* Ghidra symbol: FUN_004d10f0 */


void FUN_004d10f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

