/* Ghidra address: 005fdea0 */
/* Ghidra symbol: FUN_005fdea0 */


void FUN_005fdea0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20),param_1);
  }
  return;
}

