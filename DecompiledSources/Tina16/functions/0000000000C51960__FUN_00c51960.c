/* Ghidra address: 00c51960 */
/* Ghidra symbol: FUN_00c51960 */


void FUN_00c51960(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xe0));
  }
  return;
}

