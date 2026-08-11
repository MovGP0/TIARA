/* Ghidra address: 00c517f0 */
/* Ghidra symbol: FUN_00c517f0 */


void FUN_00c517f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0xf0));
  }
  return;
}

