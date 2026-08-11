/* Ghidra address: 00722870 */
/* Ghidra symbol: FUN_00722870 */


void FUN_00722870(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0),param_1);
  }
  return;
}

