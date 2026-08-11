/* Ghidra address: 00601e10 */
/* Ghidra symbol: FUN_00601e10 */


void FUN_00601e10(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20),param_1);
  }
  return;
}

