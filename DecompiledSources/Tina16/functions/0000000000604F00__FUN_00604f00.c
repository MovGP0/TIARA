/* Ghidra address: 00604f00 */
/* Ghidra symbol: FUN_00604f00 */


void FUN_00604f00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
  }
  return;
}

