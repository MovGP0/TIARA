/* Ghidra address: 00c51770 */
/* Ghidra symbol: FUN_00c51770 */


void FUN_00c51770(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x80));
  }
  return;
}

