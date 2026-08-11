/* Ghidra address: 00b1a7d0 */
/* Ghidra symbol: FUN_00b1a7d0 */


void FUN_00b1a7d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

