/* Ghidra address: 00c51990 */
/* Ghidra symbol: FUN_00c51990 */


void FUN_00c51990(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0xb0));
  }
  return;
}

