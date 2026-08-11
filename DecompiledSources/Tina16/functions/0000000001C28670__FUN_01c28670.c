/* Ghidra address: 01c28670 */
/* Ghidra symbol: FUN_01c28670 */


void FUN_01c28670(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

