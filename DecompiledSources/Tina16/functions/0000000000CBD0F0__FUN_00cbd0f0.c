/* Ghidra address: 00cbd0f0 */
/* Ghidra symbol: FUN_00cbd0f0 */


void FUN_00cbd0f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    (**(code **)(param_1 + 0x118))(*(undefined8 *)(param_1 + 0x120),param_1);
  }
  return;
}

