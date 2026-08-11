/* Ghidra address: 00ccf730 */
/* Ghidra symbol: FUN_00ccf730 */


void FUN_00ccf730(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x230) != 0) {
    (**(code **)(param_1 + 0x230))(*(undefined8 *)(param_1 + 0x238),param_1);
  }
  return;
}

