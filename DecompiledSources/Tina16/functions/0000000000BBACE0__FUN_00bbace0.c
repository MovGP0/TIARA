/* Ghidra address: 00bbace0 */
/* Ghidra symbol: FUN_00bbace0 */


void FUN_00bbace0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

